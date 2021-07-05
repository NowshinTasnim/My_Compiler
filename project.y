%{
	#define YYSTYPE double
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <math.h>
	extern int yylex();
	extern int yyparse();
	extern int yyerror(char *s);
	extern FILE *yyin;
	extern FILE *yyout;
	int sym[26];
	int case_count = 0;
	int case_array[20];
	int case_state[20];
	int vtype[26];
	int line = 1;
	int showflag = 0;
	int ifflag = 0;
%}

%token SEND INC DEFMAIN ENDMAIN VAR NUM FNUM SHOW GET VTYPE SWITCH SWITCH_END CASE CASE_END DEFAULT IF IF_END ELIF ELIF_END ELSE ELSE_END LOOPT LOOPU LOOP_END MOD EQQ GE LE GEQ LEQ
%left EQQ GEQ LEQ
%left GE LE '='
%left '+' '-'
%left '*' '/'
%left MOD 


%%

start:	head DEFMAIN SEND statements ENDMAIN SEND
	;
	
head:
	| INC head {  memset(sym, '\0', 26*sizeof(sym[0]));
				memset(vtype, '\0', 26*sizeof(sym[0]));
				memset(case_array, '\0', 20*sizeof(int));
				memset(case_state, '\0', 20*sizeof(int));
				$$ = $1; 
			}
	;
	
statements: statement
	| statements statement
	;

	
statement: SEND	
	| print_statement
					
	| var_statement SEND
	
	| expression SEND
	
	| if_statement	{ 	if(ifflag == 0) 
						{ 	ifflag = 1;
							printf("%d\n",$$); 
						}
					}
					
	| switch_statement
														
	| loop_statement	
	;

loop_statement: LOOPT VAR relop expression SEND statements LOOP_END SEND	{	if(vtype[$2]!='\0')
																				{	
																					if(sym[$2] >= $4)
																					{	
																						if( $3 == 62)
																						{ 	for(int i= sym[$2]; i>$4 ;i--)
																							{ 
																								printf("%d\n",$6);
																							}
																						}
																						else
																						{
																							for(int i= sym[$2]; i>=$4 ;i--)
																							{ printf("%d\n",$6);
																							}
																						}
																					}
																					else
																					{
																						if( $3 == 60)
																						{ 	for(int i= sym[$2]; i<$4 ;i++)
																							{ 
																								$$ = $6;
																								printf("%d\n",$$);
																							}
																						}
																						else
																						{
																							for(int i= sym[$2]; i<=$4 ;i++)
																							{ 
																								$$ = $6;
																								printf("%d\n",$$);
																							}
																						}
																					}
																				
																				}
																			}	
																			
	| LOOPU VAR relop expression SEND statements LOOP_END SEND	{	if(vtype[$2]!='\0')
																	{	
																		if(sym[$2] >= $4)
																		{	
																			if( $3 == 62)
																			{ 	int i = sym[$2];
																				do
																				{ 
																					$$ = $6;
																					printf("%d\n",$$);
																					i--;
																				}
																				while(i>$4);
																			}
																			else
																			{
																				int i= sym[$2];
																				do
																				{ 
																					$$ = $6;
																					printf("%d\n",$$);
																					i--;
																				}
																				while(i>=$4);
																			}
																		}
																		else
																		{
																			if( $3 == 60)
																			{ 	int i= sym[$2];
																				do 
																				{ 
																					$$ = $6;
																					printf("%d\n",$$);
																					i++;
																				}
																				while(i<$4);
																			}
																			else
																			{
																				int i= sym[$2];
																				do 
																				{ 
																					$$ = $6;
																					printf("%d\n",$$);
																					i++;
																				}
																				while(i<=$4);
																			}
																		}
																	
																	}
																}
	;

switch_statement: SWITCH '(' VAR ')' SEND cases default SWITCH_END	{	int i=0, case_flag = 0;
																		for(i =0;i<20;i++)
																		{
																			if(sym[$3] == case_array[i])
																			{	printf("%d\n",case_state[i]);
																				case_flag = 1;
																				break;
																			}
																		}
																		if(case_flag == 0)
																		{	
																			 printf("%d\n",$7);
																		}
																	}
	;
	
if_statement: IF expression SEND statements IF_END SEND	{  	if($2)
													{ 
														$$ = $2;
													} 
												}
	
	| IF expression SEND statements ELSE statements ELSE_END SEND IF_END SEND	{ 	if($2)
																					{ 
																						$$ =$4;
																					} 
																					else{ 
																						$$ =$6;  
																					}
																				}
	
	| IF expression SEND statements ELIF expression SEND statements ELIF_END SEND IF_END SEND	{ 	if($2)
																									{ 
																										$$ =$4; 
																									} 
																									else if($6)
																									{ 
																										$$ =$8;   
																									}
																								} 
	
	| IF expression SEND statements ELIF expression SEND statements ELIF_END SEND ELSE statements ELSE_END SEND IF_END SEND	{ 	if($2)
																																{ 
																																	$$ =$4; 
																																} 
																																else if($6)
																																{ 	
																																	$$ =$8; 
																																}
																																else
																																{ 
																																	$$ =$12; 
																																}
																															}
	;
	
cases: 
	| cases CASE statements CASE_END	{ case_array[case_count] = $2; case_state[case_count] = $3; case_count++;}
	;
	
default: DEFAULT statements CASE_END 	{ $$ = $2;}	
	;

var_statement: VTYPE VAR						{ if(vtype[$2] == '\0') vtype[$2] = $1;
									else printf("ERROR at line %d: Variable type is already declared!!!\n",line);}

	| VTYPE VAR '=' expression		{ if(vtype[$2] == '\0') { vtype[$2] = $1; 
										sym[$2] = $4;
										}
										else printf("ERROR at line %d: Variable type is already declared!!!\n",line);
									} 
	;
	
print_statement: SHOW	{ 	if(showflag == 0){
								$$ = $1;
								printf("%s\n",$1);
							}
							else if (showflag == 1)
							{ 	$$ = sym[$1];
								if(vtype[$1] == 1) printf("%d\n",sym[$1]);
								else if(vtype[$1] == 2) printf("%f\n",sym[$1]);
								else if(vtype[$1] == 3) printf("%c\n",sym[$1]);
							}
							showflag = 0;
						}
	;
	
	
	
expression: NUM	{ $$ = $1; }
	| FNUM	{ $$ = $1; }
	| VAR	{ $$ = sym[$1]; }
	| VAR '=' expression	{ if(vtype[$1] != '\0') sym[$1] = $3; 
							else printf("ERROR at line %d: Variable type is not declared yet!!!\n",line);
							}

	| expression '+' expression	{ $$ = $1 + $3; }
	| expression '-' expression	{ $$ = $1 - $3; }
	| expression '*' expression	{ $$ = $1 * $3; }
	| expression '/' expression	{ 	if($3) 
									{
										$$ = $1 / $3;
									}
									else
									{
										$$ = 0;
										printf("\ndivision by zero\t");
									}	 	
								}
	| expression MOD expression	{ $$ = $1 % $3; }
	
	| expression LE expression	{ $$ = $1 < $3; }
	
	| expression GE expression	{ $$ = $1 > $3; }
	
	| expression EQQ expression		{ $$ = $1 == $3; }
	
	| expression GEQ expression	{ $$ = $1 >= $3; }
	
	| expression LEQ expression	{ $$ = $1 <= $3; }
	
	| '(' expression ')'	{ $$ = $2; }
	
	; 
	

relop: LE	{ $$ = $1; }
	| GE	{ $$ = $1; }
	| GEQ	{ $$ = $1; }
	| LEQ	{ $$ = $1; }
	;
		
%%

int yyerror(char *s){
	printf( "ERROR: %s at line %d\n",s,line);
	return 0;
}

int main() {
	yyin = freopen("in1.txt","r",stdin);
	yyout = freopen("out1.txt","w",stdout);
	yyparse();
}