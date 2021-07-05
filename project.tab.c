
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "project.y"

	#define YYSTYPE int
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


/* Line 189 of yacc.c  */
#line 95 "project.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEND = 258,
     INC = 259,
     DEFMAIN = 260,
     ENDMAIN = 261,
     VAR = 262,
     NUM = 263,
     FNUM = 264,
     SHOW = 265,
     GET = 266,
     VTYPE = 267,
     SWITCH = 268,
     SWITCH_END = 269,
     CASE = 270,
     CASE_END = 271,
     DEFAULT = 272,
     IF = 273,
     IF_END = 274,
     ELIF = 275,
     ELIF_END = 276,
     ELSE = 277,
     ELSE_END = 278,
     LOOPT = 279,
     LOOPU = 280,
     LOOP_END = 281,
     MOD = 282,
     EQQ = 283,
     GE = 284,
     LE = 285,
     GEQ = 286,
     LEQ = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 169 "project.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNRULES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    39,    36,    34,     2,    35,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    16,    19,    21,    23,
      26,    29,    31,    33,    35,    44,    53,    62,    69,    80,
      93,   110,   111,   116,   120,   123,   128,   130,   132,   134,
     136,   140,   144,   148,   152,   156,   160,   164,   168,   172,
     176,   180,   184,   186,   188,   190
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,     5,     3,    43,     6,     3,    -1,
      -1,     4,    42,    -1,    44,    -1,    43,    44,    -1,     3,
      -1,    51,    -1,    50,     3,    -1,    52,     3,    -1,    47,
      -1,    46,    -1,    45,    -1,    24,     7,    53,    52,     3,
      43,    26,     3,    -1,    25,     7,    53,    52,     3,    43,
      26,     3,    -1,    13,    38,     7,    39,     3,    48,    49,
      14,    -1,    18,    52,     3,    43,    19,     3,    -1,    18,
      52,     3,    43,    22,    43,    23,     3,    19,     3,    -1,
      18,    52,     3,    43,    20,    52,     3,    43,    21,     3,
      19,     3,    -1,    18,    52,     3,    43,    20,    52,     3,
      43,    21,     3,    22,    43,    23,     3,    19,     3,    -1,
      -1,    48,    15,    43,    16,    -1,    17,    43,    16,    -1,
      12,     7,    -1,    12,     7,    33,    52,    -1,    10,    -1,
       8,    -1,     9,    -1,     7,    -1,     7,    33,    52,    -1,
      52,    34,    52,    -1,    52,    35,    52,    -1,    52,    36,
      52,    -1,    52,    37,    52,    -1,    52,    27,    52,    -1,
      52,    30,    52,    -1,    52,    29,    52,    -1,    52,    28,
      52,    -1,    52,    31,    52,    -1,    52,    32,    52,    -1,
      38,    52,    39,    -1,    30,    -1,    29,    -1,    31,    -1,
      32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    35,    36,    44,    45,    49,    50,    52,
      54,    56,    62,    64,    67,   106,   161,   177,   183,   192,
     202,   217,   218,   221,   224,   227,   234,   250,   251,   252,
     253,   257,   258,   259,   260,   270,   272,   274,   276,   278,
     280,   282,   287,   288,   289,   290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEND", "INC", "DEFMAIN", "ENDMAIN",
  "VAR", "NUM", "FNUM", "SHOW", "GET", "VTYPE", "SWITCH", "SWITCH_END",
  "CASE", "CASE_END", "DEFAULT", "IF", "IF_END", "ELIF", "ELIF_END",
  "ELSE", "ELSE_END", "LOOPT", "LOOPU", "LOOP_END", "MOD", "EQQ", "GE",
  "LE", "GEQ", "LEQ", "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'",
  "$accept", "start", "head", "statements", "statement", "loop_statement",
  "switch_statement", "if_statement", "cases", "default", "var_statement",
  "print_statement", "expression", "relop", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    61,    43,    45,    42,    47,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    44,
      44,    44,    44,    44,    45,    45,    46,    47,    47,    47,
      47,    48,    48,    49,    50,    50,    51,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    53
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     2,     1,     1,     2,
       2,     1,     1,     1,     8,     8,     8,     6,    10,    12,
      16,     0,     4,     3,     2,     4,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     3,     0,     0,     4,     1,     0,     0,     7,    29,
      27,    28,    26,     0,     0,     0,     0,     0,     0,     0,
       5,    13,    12,    11,     0,     8,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     6,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,    43,    42,    44,    45,     0,     0,    41,     2,
      35,    38,    37,    36,    39,    40,    31,    32,    33,    34,
      25,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,    14,
      15,    22,    23,     0,     0,     0,    18,     0,     0,    19,
       0,     0,     0,     0,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    19,    20,    21,    22,    23,    81,    89,
      24,    25,    26,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -41
static const yytype_int16 yypact[] =
{
      -1,    -1,     2,     4,   -41,   -41,    13,   259,   -41,   -16,
     -41,   -41,   -41,    11,     3,    -2,    16,    37,    -2,    97,
     -41,   -41,   -41,   -41,    43,   -41,   258,    -2,    19,    44,
     271,    40,    40,   329,    57,   -41,   -41,   -41,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    22,    -2,
      23,   259,   -41,   -41,   -41,   -41,    -2,    -2,   -41,   -41,
     -41,   -15,    22,    22,   -15,   -15,    18,    18,    34,    34,
     342,    61,    74,   288,   301,   -41,    70,    -2,   259,   259,
     259,    -7,   -41,   318,   116,   135,   159,   259,   259,    60,
     259,    76,    77,    82,   183,   202,   -41,   221,    69,   -41,
     -41,   -41,   -41,    86,    87,    15,   -41,    92,   259,   -41,
     240,    94,    83,    98,   -41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,   107,   -40,   -19,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -14,    79
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,    30,     5,     1,    33,     9,    10,    11,    87,     6,
      88,    72,    38,    48,    40,    41,     7,    27,    28,    44,
      45,    46,    47,    31,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,   107,    70,    18,   108,    84,    85,
      86,    29,    73,    74,    32,    38,    36,    94,    95,    38,
      97,    50,    49,    35,    46,    47,    44,    45,    46,    47,
      59,    38,    71,    83,    75,    35,    35,    35,   110,    52,
      53,    54,    55,    82,    96,    35,    35,     8,    35,    98,
      99,     9,    10,    11,    12,   100,    13,    14,   104,   105,
     106,    35,    15,    76,    77,   109,    78,   112,    16,    17,
       8,   114,   113,    34,     9,    10,    11,    12,     4,    13,
      14,    57,    18,     0,     0,    15,     0,     0,     0,     8,
       0,    16,    17,     9,    10,    11,    12,     0,    13,    14,
       0,     0,     0,     0,    15,    18,     0,     0,     8,    91,
      16,    17,     9,    10,    11,    12,     0,    13,    14,     0,
       0,     0,     0,    15,    18,     0,     0,     0,     0,    16,
      17,    92,     8,     0,     0,     0,     9,    10,    11,    12,
       0,    13,    14,    18,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,    17,    93,     8,     0,     0,     0,
       9,    10,    11,    12,     0,    13,    14,    18,     0,   101,
       0,    15,     0,     0,     0,     8,     0,    16,    17,     9,
      10,    11,    12,     0,    13,    14,     0,     0,   102,     0,
      15,    18,     0,     0,     8,     0,    16,    17,     9,    10,
      11,    12,     0,    13,    14,     0,     0,     0,     0,    15,
      18,     0,   103,     8,     0,    16,    17,     9,    10,    11,
      12,     0,    13,    14,     0,     0,     0,     0,    15,    18,
       0,    37,     8,   111,    16,    17,     9,    10,    11,    12,
       0,    13,    14,     0,    51,     0,     0,    15,    18,     0,
       0,     0,     0,    16,    17,    38,    39,    40,    41,    42,
      43,    79,    44,    45,    46,    47,     0,    18,    38,    39,
      40,    41,    42,    43,    80,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    38,    39,    40,    41,    42,
      43,    90,    44,    45,    46,    47,     0,     0,    38,    39,
      40,    41,    42,    43,     0,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    38,    39,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    58,    38,
      39,    40,    41,    42,    43,     0,    44,    45,    46,    47
};

static const yytype_int8 yycheck[] =
{
      19,    15,     0,     4,    18,     7,     8,     9,    15,     5,
      17,    51,    27,    27,    29,    30,     3,    33,     7,    34,
      35,    36,    37,     7,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    19,    49,    38,    22,    78,    79,
      80,    38,    56,    57,     7,    27,     3,    87,    88,    27,
      90,     7,    33,    72,    36,    37,    34,    35,    36,    37,
       3,    27,    39,    77,     3,    84,    85,    86,   108,    29,
      30,    31,    32,     3,    14,    94,    95,     3,    97,     3,
       3,     7,     8,     9,    10,     3,    12,    13,    19,     3,
       3,   110,    18,    19,    20,     3,    22,     3,    24,    25,
       3,     3,    19,     6,     7,     8,     9,    10,     1,    12,
      13,    32,    38,    -1,    -1,    18,    -1,    -1,    -1,     3,
      -1,    24,    25,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    18,    38,    -1,    -1,     3,    23,
      24,    25,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    38,    -1,    -1,    -1,    -1,    24,
      25,    26,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      -1,    12,    13,    38,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,     3,    -1,    -1,    -1,
       7,     8,     9,    10,    -1,    12,    13,    38,    -1,    16,
      -1,    18,    -1,    -1,    -1,     3,    -1,    24,    25,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    16,    -1,
      18,    38,    -1,    -1,     3,    -1,    24,    25,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      38,    -1,    21,     3,    -1,    24,    25,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,    38,
      -1,     3,     3,    23,    24,    25,     7,     8,     9,    10,
      -1,    12,    13,    -1,     3,    -1,    -1,    18,    38,    -1,
      -1,    -1,    -1,    24,    25,    27,    28,    29,    30,    31,
      32,     3,    34,    35,    36,    37,    -1,    38,    27,    28,
      29,    30,    31,    32,     3,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,     3,    34,    35,    36,    37,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    -1,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    41,    42,    42,     0,     5,     3,     3,     7,
       8,     9,    10,    12,    13,    18,    24,    25,    38,    43,
      44,    45,    46,    47,    50,    51,    52,    33,     7,    38,
      52,     7,     7,    52,     6,    44,     3,     3,    27,    28,
      29,    30,    31,    32,    34,    35,    36,    37,    52,    33,
       7,     3,    29,    30,    31,    32,    53,    53,    39,     3,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    39,    43,    52,    52,     3,    19,    20,    22,     3,
       3,    48,     3,    52,    43,    43,    43,    15,    17,    49,
       3,    23,    26,    26,    43,    43,    14,    43,     3,     3,
       3,    16,    16,    21,    19,     3,     3,    19,    22,     3,
      43,    23,     3,    19,     3
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 36 "project.y"
    {  memset(sym, '\0', 26*sizeof(sym[0]));
				memset(vtype, '\0', 26*sizeof(sym[0]));
				memset(case_array, '\0', 20*sizeof(int));
				memset(case_state, '\0', 20*sizeof(int));
				(yyval) = (yyvsp[(1) - (2)]); 
			;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 56 "project.y"
    { 	if(ifflag == 0) 
						{ 	ifflag = 1;
							printf("%d\n",(yyval)); 
						}
					;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 67 "project.y"
    {	if(vtype[(yyvsp[(2) - (8)])]!='\0')
																				{	
																					if(sym[(yyvsp[(2) - (8)])] >= (yyvsp[(4) - (8)]))
																					{	
																						if( (yyvsp[(3) - (8)]) == 62)
																						{ 	for(int i= sym[(yyvsp[(2) - (8)])]; i>(yyvsp[(4) - (8)]) ;i--)
																							{ 
																								printf("%d\n",(yyvsp[(6) - (8)]));
																							}
																						}
																						else
																						{
																							for(int i= sym[(yyvsp[(2) - (8)])]; i>=(yyvsp[(4) - (8)]) ;i--)
																							{ printf("%d\n",(yyvsp[(6) - (8)]));
																							}
																						}
																					}
																					else
																					{
																						if( (yyvsp[(3) - (8)]) == 60)
																						{ 	for(int i= sym[(yyvsp[(2) - (8)])]; i<(yyvsp[(4) - (8)]) ;i++)
																							{ 
																								(yyval) = (yyvsp[(6) - (8)]);
																								printf("%d\n",(yyval));
																							}
																						}
																						else
																						{
																							for(int i= sym[(yyvsp[(2) - (8)])]; i<=(yyvsp[(4) - (8)]) ;i++)
																							{ 
																								(yyval) = (yyvsp[(6) - (8)]);
																								printf("%d\n",(yyval));
																							}
																						}
																					}
																				
																				}
																			;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 106 "project.y"
    {	if(vtype[(yyvsp[(2) - (8)])]!='\0')
																	{	
																		if(sym[(yyvsp[(2) - (8)])] >= (yyvsp[(4) - (8)]))
																		{	
																			if( (yyvsp[(3) - (8)]) == 62)
																			{ 	int i = sym[(yyvsp[(2) - (8)])];
																				do
																				{ 
																					(yyval) = (yyvsp[(6) - (8)]);
																					printf("%d\n",(yyval));
																					i--;
																				}
																				while(i>(yyvsp[(4) - (8)]));
																			}
																			else
																			{
																				int i= sym[(yyvsp[(2) - (8)])];
																				do
																				{ 
																					(yyval) = (yyvsp[(6) - (8)]);
																					printf("%d\n",(yyval));
																					i--;
																				}
																				while(i>=(yyvsp[(4) - (8)]));
																			}
																		}
																		else
																		{
																			if( (yyvsp[(3) - (8)]) == 60)
																			{ 	int i= sym[(yyvsp[(2) - (8)])];
																				do 
																				{ 
																					(yyval) = (yyvsp[(6) - (8)]);
																					printf("%d\n",(yyval));
																					i++;
																				}
																				while(i<(yyvsp[(4) - (8)]));
																			}
																			else
																			{
																				int i= sym[(yyvsp[(2) - (8)])];
																				do 
																				{ 
																					(yyval) = (yyvsp[(6) - (8)]);
																					printf("%d\n",(yyval));
																					i++;
																				}
																				while(i<=(yyvsp[(4) - (8)]));
																			}
																		}
																	
																	}
																;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 161 "project.y"
    {	int i=0, case_flag = 0;
																		for(i =0;i<20;i++)
																		{
																			if(sym[(yyvsp[(3) - (8)])] == case_array[i])
																			{	printf("%d\n",case_state[i]);
																				case_flag = 1;
																				break;
																			}
																		}
																		if(case_flag == 0)
																		{	
																			 printf("%d\n",(yyvsp[(7) - (8)]));
																		}
																	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 177 "project.y"
    {  	if((yyvsp[(2) - (6)]))
													{ 
														(yyval) = (yyvsp[(2) - (6)]);
													} 
												;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 183 "project.y"
    { 	if((yyvsp[(2) - (10)]))
																					{ 
																						(yyval) =(yyvsp[(4) - (10)]);
																					} 
																					else{ 
																						(yyval) =(yyvsp[(6) - (10)]);  
																					}
																				;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 192 "project.y"
    { 	if((yyvsp[(2) - (12)]))
																									{ 
																										(yyval) =(yyvsp[(4) - (12)]); 
																									} 
																									else if((yyvsp[(6) - (12)]))
																									{ 
																										(yyval) =(yyvsp[(8) - (12)]);   
																									}
																								;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 202 "project.y"
    { 	if((yyvsp[(2) - (16)]))
																																{ 
																																	(yyval) =(yyvsp[(4) - (16)]); 
																																} 
																																else if((yyvsp[(6) - (16)]))
																																{ 	
																																	(yyval) =(yyvsp[(8) - (16)]); 
																																}
																																else
																																{ 
																																	(yyval) =(yyvsp[(12) - (16)]); 
																																}
																															;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 218 "project.y"
    { case_array[case_count] = (yyvsp[(2) - (4)]); case_state[case_count] = (yyvsp[(3) - (4)]); case_count++;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 221 "project.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 224 "project.y"
    { if(vtype[(yyvsp[(2) - (2)])] == '\0') vtype[(yyvsp[(2) - (2)])] = (yyvsp[(1) - (2)]);
									else printf("ERROR at line %d: Variable type is already declared!!!\n",line);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 227 "project.y"
    { if(vtype[(yyvsp[(2) - (4)])] == '\0') { vtype[(yyvsp[(2) - (4)])] = (yyvsp[(1) - (4)]); 
										sym[(yyvsp[(2) - (4)])] = (yyvsp[(4) - (4)]);
										}
										else printf("ERROR at line %d: Variable type is already declared!!!\n",line);
									;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 234 "project.y"
    { 	if(showflag == 0){
								(yyval) = (yyvsp[(1) - (1)]);
								printf("%s\n",(yyvsp[(1) - (1)]));
							}
							else if (showflag == 1)
							{ 	(yyval) = sym[(yyvsp[(1) - (1)])];
								if(vtype[(yyvsp[(1) - (1)])] == 1) printf("%d\n",sym[(yyvsp[(1) - (1)])]);
								else if(vtype[(yyvsp[(1) - (1)])] == 2) printf("%f\n",sym[(yyvsp[(1) - (1)])]);
								else if(vtype[(yyvsp[(1) - (1)])] == 3) printf("%c\n",sym[(yyvsp[(1) - (1)])]);
							}
							showflag = 0;
						;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 250 "project.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 251 "project.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 252 "project.y"
    { (yyval) = sym[(yyvsp[(1) - (1)])]; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 253 "project.y"
    { if(vtype[(yyvsp[(1) - (3)])] != '\0') sym[(yyvsp[(1) - (3)])] = (yyvsp[(3) - (3)]); 
							else printf("ERROR at line %d: Variable type is not declared yet!!!\n",line);
							;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 257 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 258 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 259 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 260 "project.y"
    { 	if((yyvsp[(3) - (3)])) 
									{
										(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
									}
									else
									{
										(yyval) = 0;
										printf("\ndivision by zero\t");
									}	 	
								;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 270 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 272 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 274 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 276 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) == (yyvsp[(3) - (3)]); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 278 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)]); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 280 "project.y"
    { (yyval) = (yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)]); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 282 "project.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 287 "project.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 288 "project.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 289 "project.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 290 "project.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1902 "project.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 293 "project.y"


int yyerror(char *s){
	printf( "ERROR: %s at line %d\n",s,line);
	return 0;
}

int main() {
	yyin = freopen("in1.txt","r",stdin);
	yyout = freopen("out1.txt","w",stdout);
	yyparse();
}
