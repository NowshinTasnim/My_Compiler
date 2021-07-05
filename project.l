%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <malloc.h>
	#include <math.h>
	
	#include "project.tab.h"
	extern YYSTYPE yylval;
	extern int line;
	extern int showflag;
%}


Space " "
Line_End " ..."

Digit [0-9]+
Id [a-zA-Z][a-zA-Z0-9]*

Constant "fixed"
Static "stat"
Global "glob"

Loop_Start "loop till"|"loop until"

Mod "%"
Equal_Equal "=="
Less_Equal "<="
Greater_Equal ">="
Greater ">"
Less "<"
Assign "="

%%

{Line_End}	{ return SEND;}

"include ".*{Line_End}	{ yytext[yyleng-4] = '\0';
						yyleng-=4;
						int i=0;
						char *a;
						for(i=0; yytext[i] != ' ';i++);
						a = (char*)malloc((i+1)*sizeof(char));
						a[0] = '#';
						int j=0;
						for(int j=0; j<i;j++)
						{
							a[j+1] = yytext[j];
						}
						
						char *b;
						b = (char*) malloc((yyleng-i+4)*sizeof(char));
						b[0] = ' ';
						b[1] = '<';
						int k=0;
						for(j=i+1,k=2; j<yyleng; j++,k++)
						{
							b[k]= yytext[j];
						}
						b[k]= '>';
						b[k+1] = '\0';
						yytext = (char*)malloc((j+5)*sizeof(char));
						for(int l=0;l<=j+4; l++)
						{
							if(l<=i)
							{
								yytext[l]=a[l];
							}
							else{
								yytext[l] = b[l-i-1];
							}
						}
						yylval = (YYSTYPE)yytext;
						return INC;
						}

"//".*
		
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/] 	 	
		
"main_func"	{ return DEFMAIN;}
					
"main_func_end"	{ return ENDMAIN;}		

{Digit}	{ 	yylval = atoi(yytext);
			return NUM;
		}
		
{Digit}[.]{Digit}	{ 	yylval = atof("10.4");
						printf("%.2d\n",yylval);
						return FNUM;
					}

[a-z]	{	yylval = *yytext - 'a';
			return	VAR;
		}

"int"	{ yylval = 1;
		return VTYPE;
		}
 
"float"	{ yylval = 2;
		return VTYPE;
		}

"char"	{ yylval = 3;
		return VTYPE;
		}

"double"	{ yylval = 4;
			return VTYPE;
			}
			
[-+/*<>=,();]	{ 	yylval = yytext[0];
						return *yytext;
						}
						
{Equal_Equal}	{ return EQQ; }

{Less_Equal}	{ return LEQ; }

{Greater_Equal}	{ return GEQ; }

{Greater}	{ return GE; }

{Less}	{ return LE; }
				
{Mod}	{ return MOD; } 
				
"if"	{return IF;}
"if_end"	{return IF_END;}
"else"	{return ELSE;}
"else_end"	{return ELSE_END;}
"elif"	{return ELIF;}
"elif_end"	{return ELIF_END;}

"switch"	{ return SWITCH; }

"switch_end"	{ return SWITCH_END; }

"case".*{Line_End}	{	int i=0;
						for(i=0;i<yyleng-9;i++){
							yytext[i] = yytext[i+5];
						}
						yytext[i] = '\0';
						yylval = atoi(yytext);
						return CASE;
					}	
					
"default"{Line_End}	{ return DEFAULT; }
					
"break"{Line_End}	{ return CASE_END; }

{Loop_Start}	{ if(yytext[5] == 116)
					{
						return LOOPT;
					}
					if(yytext[5] == 117)
					{
						return LOOPU;
					} 
				}

"loop_end"	{ return LOOP_END;}

"show ".*{Line_End}	{ 	int i =0;
						if(yytext[5] == 34)
						{
							for(i=0;i<yyleng-11;i++)
							{
								yytext[i] = yytext[i+6];
							}
							yytext[i] = '\0';
							yylval = (YYSTYPE)yytext;
						}
						else 
						{	showflag = 1;
							yytext[0] = yytext[5];
							yytext[1] = '\0';
							yylval = *yytext - 'a';
						}
						return SHOW;
					}

"get ".*{Line_End}	{ yylval = yytext[4] - 'a';
					return GET;
					}

"back ".*{Line_End}

"\n"	{ line++;}

"\t"*

" "*		
%%

int yywrap()
{
	return 1;
}