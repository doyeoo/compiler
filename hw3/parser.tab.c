/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TLOWERTHANELSE = 258,
     TELSE = 259,
     TIDENT = 260,
     TNUMBER = 261,
     TCONST = 262,
     TIF = 263,
     TINT = 264,
     TFLOAT = 265,
     TRETURN = 266,
     TVOID = 267,
     TWHILE = 268,
     TADDASSIGN = 269,
     TSUBASSIGN = 270,
     TMULASSIGN = 271,
     TDIVASSIGN = 272,
     TMODASSIGN = 273,
     TOR = 274,
     TAND = 275,
     TEQUAL = 276,
     TNOTEQU = 277,
     TGREATE = 278,
     TLESSE = 279,
     TINC = 280,
     TDEC = 281,
     TPLUS = 282,
     TMINUS = 283,
     TSTAR = 284,
     TSLASH = 285,
     TMOD = 286,
     TASSIGN = 287,
     TNOT = 288,
     TLESS = 289,
     TGREAT = 290,
     TLSBRACKET = 291,
     TRSBRACKET = 292,
     TCOMMA = 293,
     TLMBRACKET = 294,
     TRMBRACKET = 295,
     TLLBRACKET = 296,
     TRLBRACKET = 297,
     TSEMICOLON = 298,
     TCOMMENT = 299,
     TSEPERATOR = 300,
     TLINE = 301,
     TILLID = 302,
     TERROR = 303
   };
#endif
/* Tokens.  */
#define TLOWERTHANELSE 258
#define TELSE 259
#define TIDENT 260
#define TNUMBER 261
#define TCONST 262
#define TIF 263
#define TINT 264
#define TFLOAT 265
#define TRETURN 266
#define TVOID 267
#define TWHILE 268
#define TADDASSIGN 269
#define TSUBASSIGN 270
#define TMULASSIGN 271
#define TDIVASSIGN 272
#define TMODASSIGN 273
#define TOR 274
#define TAND 275
#define TEQUAL 276
#define TNOTEQU 277
#define TGREATE 278
#define TLESSE 279
#define TINC 280
#define TDEC 281
#define TPLUS 282
#define TMINUS 283
#define TSTAR 284
#define TSLASH 285
#define TMOD 286
#define TASSIGN 287
#define TNOT 288
#define TLESS 289
#define TGREAT 290
#define TLSBRACKET 291
#define TRSBRACKET 292
#define TCOMMA 293
#define TLMBRACKET 294
#define TRMBRACKET 295
#define TLLBRACKET 296
#define TRLBRACKET 297
#define TSEMICOLON 298
#define TCOMMENT 299
#define TSEPERATOR 300
#define TLINE 301
#define TILLID 302
#define TERROR 303




/* Copy the first part of user declarations.  */
#line 6 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "glob.h"

int type_int=0;
int type_void=0;
int type_float=0;
int param=0;

void updateAttribute();
extern yylex();
extern int yyerror(char *s);

/*yacc source for Mini C*/


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 221 "parser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   429

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    17,    20,
      23,    26,    30,    32,    34,    37,    39,    41,    43,    45,
      47,    49,    51,    52,    56,    60,    62,    63,    65,    69,
      73,    76,    81,    86,    88,    89,    91,    94,    98,   102,
     104,   108,   112,   114,   118,   122,   124,   129,   134,   136,
     137,   139,   140,   142,   145,   147,   149,   151,   153,   155,
     158,   160,   161,   167,   175,   180,   185,   191,   197,   202,
     208,   214,   218,   222,   224,   226,   230,   234,   238,   242,
     246,   250,   254,   258,   262,   266,   270,   274,   276,   280,
     284,   286,   290,   294,   296,   300,   304,   308,   312,   314,
     318,   322,   326,   330,   334,   338,   342,   346,   348,   352,
     356,   360,   364,   366,   370,   374,   378,   382,   386,   390,
     392,   395,   398,   401,   404,   406,   411,   416,   421,   426,
     429,   432,   434,   435,   437,   439,   443,   445,   447,   451
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    52,    -1,    51,    52,    -1,
      53,    -1,    68,    -1,     5,    43,    -1,    54,    65,    -1,
      54,    43,    -1,    54,     1,    -1,    55,    60,    61,    -1,
      56,    -1,    57,    -1,    56,    57,    -1,    58,    -1,    59,
      -1,     7,    -1,     9,    -1,    12,    -1,    10,    -1,     5,
      -1,    -1,    36,    62,    37,    -1,    36,    62,     1,    -1,
      63,    -1,    -1,    64,    -1,    63,    38,    64,    -1,    63,
      64,     1,    -1,    55,    71,    -1,    39,    66,    73,    40,
      -1,    39,    66,    73,     1,    -1,    67,    -1,    -1,    68,
      -1,    67,    68,    -1,    55,    69,    43,    -1,    55,    69,
       1,    -1,    70,    -1,    69,    38,    70,    -1,    69,    70,
       1,    -1,    71,    -1,    71,    32,     6,    -1,    71,    32,
       1,    -1,     5,    -1,     5,    41,    72,    42,    -1,     5,
      41,    72,     1,    -1,     6,    -1,    -1,    74,    -1,    -1,
      75,    -1,    74,    75,    -1,    65,    -1,    76,    -1,    78,
      -1,    79,    -1,    80,    -1,    77,    43,    -1,    81,    -1,
      -1,     8,    36,    81,    37,    75,    -1,     8,    36,    81,
      37,    75,     4,    75,    -1,     8,    36,    81,     1,    -1,
       8,    36,    37,    75,    -1,     8,     1,    81,    37,    75,
      -1,    13,    36,    81,    37,    75,    -1,    13,    36,    81,
       1,    -1,    13,     1,    81,    37,    75,    -1,    13,    36,
       1,    37,    75,    -1,    11,    77,    43,    -1,    11,    77,
       1,    -1,    82,    -1,    83,    -1,    89,    32,    82,    -1,
      89,    14,    82,    -1,    89,    15,    82,    -1,    89,    16,
      82,    -1,    89,    17,    82,    -1,    89,    18,    82,    -1,
      89,    32,     1,    -1,    89,    14,     1,    -1,    89,    15,
       1,    -1,    89,    16,     1,    -1,    89,    17,     1,    -1,
      89,    18,     1,    -1,    84,    -1,    83,    19,    84,    -1,
      83,    19,     1,    -1,    85,    -1,    84,    20,    85,    -1,
      84,    20,     1,    -1,    86,    -1,    85,    21,    86,    -1,
      85,    22,    86,    -1,    85,    21,     1,    -1,    85,    22,
       1,    -1,    87,    -1,    86,    35,    87,    -1,    86,    34,
      87,    -1,    86,    23,    87,    -1,    86,    24,    87,    -1,
      86,    35,     1,    -1,    86,    34,     1,    -1,    86,    23,
       1,    -1,    86,    24,     1,    -1,    88,    -1,    87,    27,
      88,    -1,    87,    28,    88,    -1,    87,    27,     1,    -1,
      87,    28,     1,    -1,    89,    -1,    88,    29,    89,    -1,
      88,    30,    89,    -1,    88,    31,    89,    -1,    88,    29,
       1,    -1,    88,    30,     1,    -1,    88,    31,     1,    -1,
      90,    -1,    28,    89,    -1,    33,    89,    -1,    25,    89,
      -1,    26,    89,    -1,    94,    -1,    90,    41,    81,    42,
      -1,    90,    41,    91,     1,    -1,    90,    36,    91,    37,
      -1,    90,    36,    91,     1,    -1,    90,    25,    -1,    90,
      26,    -1,    92,    -1,    -1,    93,    -1,    82,    -1,    93,
      38,    82,    -1,     5,    -1,     6,    -1,    36,    81,    37,
      -1,    36,    81,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    41,    42,    43,    45,    46,
      47,    54,    57,    59,    60,    63,    64,    66,    67,    73,
      79,    87,   102,   108,   112,   119,   121,   126,   127,   128,
     134,   137,   138,   145,   146,   149,   150,   152,   158,   169,
     170,   171,   178,   179,   180,   187,   215,   236,   243,   244,
     247,   248,   251,   252,   255,   256,   257,   258,   259,   262,
     265,   266,   269,   270,   271,   276,   281,   288,   289,   294,
     299,   305,   306,   312,   314,   315,   316,   317,   318,   319,
     320,   321,   326,   331,   336,   341,   346,   352,   353,   354,
     360,   361,   362,   368,   369,   370,   371,   376,   382,   383,
     384,   385,   386,   387,   392,   397,   402,   408,   409,   410,
     411,   416,   422,   423,   424,   425,   426,   431,   436,   443,
     444,   445,   446,   447,   450,   451,   452,   457,   458,   463,
     464,   466,   467,   469,   471,   472,   474,   480,   481,   482
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TLOWERTHANELSE", "TELSE", "TIDENT",
  "TNUMBER", "TCONST", "TIF", "TINT", "TFLOAT", "TRETURN", "TVOID",
  "TWHILE", "TADDASSIGN", "TSUBASSIGN", "TMULASSIGN", "TDIVASSIGN",
  "TMODASSIGN", "TOR", "TAND", "TEQUAL", "TNOTEQU", "TGREATE", "TLESSE",
  "TINC", "TDEC", "TPLUS", "TMINUS", "TSTAR", "TSLASH", "TMOD", "TASSIGN",
  "TNOT", "TLESS", "TGREAT", "TLSBRACKET", "TRSBRACKET", "TCOMMA",
  "TLMBRACKET", "TRMBRACKET", "TLLBRACKET", "TRLBRACKET", "TSEMICOLON",
  "TCOMMENT", "TSEPERATOR", "TLINE", "TILLID", "TERROR", "$accept",
  "mini_c", "translation_unit", "external_dcl", "function_def",
  "function_header", "dcl_spec", "dcl_specifiers", "dcl_specifier",
  "type_qualifier", "type_specifier", "function_name", "formal_param",
  "opt_formal_param", "formal_param_list", "param_dcl", "compound_st",
  "opt_dcl_list", "declaration_list", "declaration", "init_dcl_list",
  "init_declarator", "declarator", "opt_number", "opt_stat_list",
  "statement_list", "statement", "expression_st", "opt_expression",
  "if_st", "while_st", "return_st", "expression", "assignment_exp",
  "logical_or_exp", "logical_and_exp", "equality_exp", "relational_exp",
  "additive_exp", "multiplicative_exp", "unary_exp", "postfix_exp",
  "opt_actual_param", "actual_param", "actual_param_list", "primary_exp", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    53,    53,
      53,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    70,    70,    70,    71,    71,    71,    72,    72,
      73,    73,    74,    74,    75,    75,    75,    75,    75,    76,
      77,    77,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    80,    80,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      84,    84,    84,    85,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    94,    94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     2,     2,
       2,     3,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     3,     1,     0,     1,     3,     3,
       2,     4,     4,     1,     0,     1,     2,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     4,     4,     1,     0,
       1,     0,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     0,     5,     7,     4,     4,     5,     5,     4,     5,
       5,     3,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     2,     1,     4,     4,     4,     4,     2,
       2,     1,     0,     1,     1,     3,     1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    17,    18,    20,    19,     0,     2,     3,     5,
       0,    22,    12,    13,    15,    16,     6,     7,     1,     4,
      10,    34,     9,     8,    45,     0,     0,    39,    42,    14,
       0,    51,    33,    35,    49,    26,    11,    38,    45,     0,
      37,     0,     0,   136,   137,     0,    61,     0,     0,     0,
       0,     0,     0,    54,     0,    50,    52,    55,     0,    56,
      57,    58,    60,    73,    74,    87,    90,    93,    98,   107,
     112,   119,   124,    36,    48,     0,     0,     0,    25,    27,
      40,    41,    44,    43,     0,     0,     0,     0,     0,   122,
     123,   120,   121,     0,    32,    31,    53,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   132,
     132,    47,    46,    30,    24,    23,     0,     0,     0,    61,
       0,    72,    71,     0,     0,     0,   139,   138,    89,    88,
     112,    92,    91,    96,    94,    97,    95,   105,   101,   106,
     102,   104,   100,   103,    99,   110,   108,   111,   109,   116,
     113,   117,   114,   118,   115,    82,    76,    83,    77,    84,
      78,    85,    79,    86,    80,    81,    75,   134,     0,   131,
     133,     0,   134,     0,    28,    29,    61,    65,    64,    61,
      61,    61,    68,    61,   128,   127,     0,   125,   126,    66,
      62,    69,    70,    67,   135,    61,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    76,    12,    13,    14,
      15,    25,    36,    77,    78,    79,    53,    31,    32,    16,
      26,    27,    28,    75,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   178,   179,   180,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -111
static const yytype_int16 yypact[] =
{
     415,   -15,  -111,  -111,  -111,  -111,    30,   415,  -111,  -111,
      15,    33,    97,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,    97,  -111,  -111,    -7,     0,    14,  -111,    71,  -111,
      42,    72,    97,  -111,   104,    97,  -111,  -111,    73,    42,
    -111,   117,    31,  -111,  -111,    19,   393,    43,   393,   393,
     393,   393,   393,  -111,    20,    72,  -111,  -111,    80,  -111,
    -111,  -111,  -111,  -111,   106,   119,    28,   135,   102,    65,
       9,    76,  -111,  -111,  -111,    34,    42,    44,    81,  -111,
    -111,  -111,  -111,  -111,   393,   377,    16,   393,   115,  -111,
    -111,  -111,  -111,    45,  -111,  -111,  -111,  -111,   121,   127,
     160,   166,   172,   178,   211,   217,   223,   229,   262,   268,
     274,   280,   313,   319,   325,   331,   364,  -111,  -111,   393,
     393,  -111,  -111,  -111,  -111,  -111,    97,   136,   105,   368,
      47,  -111,  -111,   125,   131,    50,  -111,  -111,  -111,   119,
    -111,  -111,    28,  -111,   135,  -111,   135,  -111,   102,  -111,
     102,  -111,   102,  -111,   102,  -111,    65,  -111,    65,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    52,  -111,
     118,   122,   134,   179,  -111,  -111,   368,  -111,  -111,   368,
     368,   368,  -111,   368,  -111,  -111,   393,  -111,  -111,  -111,
     177,  -111,  -111,  -111,  -111,   368,  -111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -111,   175,  -111,  -111,    92,  -111,   183,  -111,
    -111,  -111,  -111,  -111,  -111,   -70,   180,  -111,  -111,     1,
    -111,    -8,   111,  -111,  -111,  -111,   -55,  -111,   143,  -111,
    -111,  -111,   -45,  -110,  -111,   103,   108,    74,   282,    38,
     -37,  -111,    89,  -111,  -111,  -111
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
      96,   166,   168,   170,   172,   174,   176,    93,   127,   177,
     182,    89,    90,    91,    92,    37,    20,   131,    41,    38,
      84,    94,    33,   111,   112,   113,   114,   115,    17,   -21,
      18,    80,    82,    73,    34,   121,    35,    83,    24,   128,
     130,   116,   133,   135,    87,   124,   136,    38,   188,   100,
     101,   192,    39,   194,    21,    85,   184,    40,    22,   132,
      95,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   160,   162,   164,   187,   181,   122,    43,    44,    88,
      45,   125,   137,    46,   189,    47,   204,   193,     2,   195,
       3,     4,    11,     5,   108,   109,   110,    48,    49,    11,
      50,   117,   118,    42,     2,    51,     3,     4,    52,     5,
      74,    21,   119,    30,    34,   -61,   134,   120,    81,   126,
      43,    44,   138,    97,    30,    98,    43,    44,   141,   106,
     107,   199,    43,    44,   200,   201,   202,   185,   203,    99,
      48,    49,   186,    50,   156,   158,    48,    49,    51,    50,
     206,    52,    48,    49,    51,    50,   196,    52,   102,   103,
      51,   143,   190,    52,   197,    43,    44,   145,   191,   104,
     105,    43,    44,   147,   144,   146,   -73,    43,    44,   149,
     198,   205,    19,    43,    44,    48,    49,   123,    50,    86,
      23,    48,    49,    51,    50,    29,    52,    48,    49,    51,
      50,   139,    52,    48,    49,    51,    50,   142,    52,   183,
       0,    51,   151,     0,    52,     0,    43,    44,   153,     0,
       0,     0,    43,    44,   155,     0,     0,     0,    43,    44,
     157,     0,     0,     0,    43,    44,    48,    49,     0,    50,
       0,     0,    48,    49,    51,    50,     0,    52,    48,    49,
      51,    50,     0,    52,    48,    49,    51,    50,     0,    52,
       0,     0,    51,   159,     0,    52,     0,    43,    44,   161,
       0,     0,     0,    43,    44,   163,     0,     0,     0,    43,
      44,   165,     0,     0,     0,    43,    44,    48,    49,     0,
      50,     0,     0,    48,    49,    51,    50,     0,    52,    48,
      49,    51,    50,     0,    52,    48,    49,    51,    50,     0,
      52,     0,     0,    51,   167,     0,    52,     0,    43,    44,
     169,     0,     0,     0,    43,    44,   171,     0,     0,     0,
      43,    44,   173,     0,     0,     0,    43,    44,    48,    49,
       0,    50,     0,     0,    48,    49,    51,    50,     0,    52,
      48,    49,    51,    50,     0,    52,    48,    49,    51,    50,
       0,    52,     0,     0,    51,   175,     0,    52,     0,    43,
      44,     0,     0,    43,    44,     0,    45,     0,     0,    46,
       0,    47,    43,    44,   148,   150,   152,   154,     0,    48,
      49,     0,    50,    48,    49,     0,    50,    51,    43,    44,
      52,    51,    48,    49,    52,    50,     0,    21,     0,     0,
      51,     0,     0,    52,   129,     0,     0,     0,    48,    49,
       1,    50,     2,     0,     3,     4,    51,     5,     0,    52
};

static const yytype_int16 yycheck[] =
{
      55,   111,   112,   113,   114,   115,   116,    52,    78,   119,
     120,    48,    49,    50,    51,     1,     1,     1,    26,     5,
       1,     1,    21,    14,    15,    16,    17,    18,    43,    36,
       0,    39,     1,    32,    41,     1,    36,     6,     5,    84,
      85,    32,    87,    88,     1,     1,     1,     5,     1,    21,
      22,     1,    38,     1,    39,    36,   126,    43,    43,    43,
      40,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   129,   120,    42,     5,     6,    36,
       8,    37,    37,    11,    37,    13,   196,    37,     7,    37,
       9,    10,     0,    12,    29,    30,    31,    25,    26,     7,
      28,    25,    26,    32,     7,    33,     9,    10,    36,    12,
       6,    39,    36,    21,    41,    43,     1,    41,     1,    38,
       5,     6,     1,    43,    32,    19,     5,     6,     1,    27,
      28,   186,     5,     6,   189,   190,   191,     1,   193,    20,
      25,    26,    37,    28,   106,   107,    25,    26,    33,    28,
     205,    36,    25,    26,    33,    28,    38,    36,    23,    24,
      33,     1,    37,    36,    42,     5,     6,     1,    37,    34,
      35,     5,     6,     1,   100,   101,    42,     5,     6,     1,
       1,     4,     7,     5,     6,    25,    26,    76,    28,    46,
      10,    25,    26,    33,    28,    12,    36,    25,    26,    33,
      28,    98,    36,    25,    26,    33,    28,    99,    36,   120,
      -1,    33,     1,    -1,    36,    -1,     5,     6,     1,    -1,
      -1,    -1,     5,     6,     1,    -1,    -1,    -1,     5,     6,
       1,    -1,    -1,    -1,     5,     6,    25,    26,    -1,    28,
      -1,    -1,    25,    26,    33,    28,    -1,    36,    25,    26,
      33,    28,    -1,    36,    25,    26,    33,    28,    -1,    36,
      -1,    -1,    33,     1,    -1,    36,    -1,     5,     6,     1,
      -1,    -1,    -1,     5,     6,     1,    -1,    -1,    -1,     5,
       6,     1,    -1,    -1,    -1,     5,     6,    25,    26,    -1,
      28,    -1,    -1,    25,    26,    33,    28,    -1,    36,    25,
      26,    33,    28,    -1,    36,    25,    26,    33,    28,    -1,
      36,    -1,    -1,    33,     1,    -1,    36,    -1,     5,     6,
       1,    -1,    -1,    -1,     5,     6,     1,    -1,    -1,    -1,
       5,     6,     1,    -1,    -1,    -1,     5,     6,    25,    26,
      -1,    28,    -1,    -1,    25,    26,    33,    28,    -1,    36,
      25,    26,    33,    28,    -1,    36,    25,    26,    33,    28,
      -1,    36,    -1,    -1,    33,     1,    -1,    36,    -1,     5,
       6,    -1,    -1,     5,     6,    -1,     8,    -1,    -1,    11,
      -1,    13,     5,     6,   102,   103,   104,   105,    -1,    25,
      26,    -1,    28,    25,    26,    -1,    28,    33,     5,     6,
      36,    33,    25,    26,    36,    28,    -1,    39,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    25,    26,
       5,    28,     7,    -1,     9,    10,    33,    12,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     7,     9,    10,    12,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    68,    43,     0,    52,
       1,    39,    43,    65,     5,    60,    69,    70,    71,    57,
      55,    66,    67,    68,    41,    36,    61,     1,     5,    38,
      43,    70,    32,     5,     6,     8,    11,    13,    25,    26,
      28,    33,    36,    65,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    94,    68,     6,    72,    55,    62,    63,    64,
      70,     1,     1,     6,     1,    36,    77,     1,    36,    89,
      89,    89,    89,    81,     1,    40,    75,    43,    19,    20,
      21,    22,    23,    24,    34,    35,    27,    28,    29,    30,
      31,    14,    15,    16,    17,    18,    32,    25,    26,    36,
      41,     1,    42,    71,     1,    37,    38,    64,    81,    37,
      81,     1,    43,    81,     1,    81,     1,    37,     1,    84,
      89,     1,    85,     1,    86,     1,    86,     1,    87,     1,
      87,     1,    87,     1,    87,     1,    88,     1,    88,     1,
      89,     1,    89,     1,    89,     1,    82,     1,    82,     1,
      82,     1,    82,     1,    82,     1,    82,    82,    91,    92,
      93,    81,    82,    91,    64,     1,    37,    75,     1,    37,
      37,    37,     1,    37,     1,    37,    38,    42,     1,    75,
      75,    75,    75,    75,    82,     4,    75
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 10:
#line 48 "parser.y"
    {
				yyerrok;
				yyerror("wrong function");
			;}
    break;

  case 18:
#line 68 "parser.y"
    {
				type_int=1;
				type_void=0;
				type_float=0;
			;}
    break;

  case 19:
#line 74 "parser.y"
    {
				type_int=0;
				type_void=1;
				type_float=0;
			;}
    break;

  case 20:
#line 80 "parser.y"
    {
				type_int=0;
				type_void=0;
				type_float=1;
			;}
    break;

  case 21:
#line 88 "parser.y"
    {
				if(look_id->type==0||look_id->type==5){
					if(type_void==1){
					      	look_id->type=4;
					} else if(type_int==1){
					      	look_id->type=6;
					} else if(type_float==1){
					      	look_id->type=13;
					}
					updateAttribute(look_id->type);
					param=1;
				}
			;}
    break;

  case 22:
#line 102 "parser.y"
    {
				yyerrok;
				yyerror("no function name");
			;}
    break;

  case 23:
#line 109 "parser.y"
    {
				param=0;
			;}
    break;

  case 24:
#line 113 "parser.y"
    {
				yyerrok;
				yyerror("no right small bracket");
			;}
    break;

  case 26:
#line 121 "parser.y"
    {
				param=0;
			;}
    break;

  case 29:
#line 128 "parser.y"
    {
				yyerrok;
				yyerror("no comma");
			;}
    break;

  case 32:
#line 139 "parser.y"
    {
				yyerrok;
				yyerror("no right medium bracket");
			;}
    break;

  case 37:
#line 153 "parser.y"
    {
				type_int=0;
				type_void=0;
				type_float=0;
			;}
    break;

  case 38:
#line 159 "parser.y"
    {
				look_tmp->type=0; /* identifier about parse error*/
				yyerrok;
				type_int=0;
				type_void=0;
				type_float=0;
				yyerror("no semicolon");
			;}
    break;

  case 41:
#line 172 "parser.y"
    {
				yyerrok;
				yyerror("no comma");
			;}
    break;

  case 44:
#line 181 "parser.y"
    {
				yyerrok;
				yyerror("no number");
			;}
    break;

  case 45:
#line 188 "parser.y"
    {
				if(look_id->type==0){
					//매개변수 아닐 때
					if(param==0){
						if(type_float==1){
						      look_id->type=9;
					        }
						else if(type_int==1){
						      look_id->type=1;
						}
						else if(type_void==1){
						      look_id->type=2;
					        }
					}
					//매개변수일 때
					else if(param==1){
						if(type_int==1){
						      look_id->type=7;
						}
						else if(type_float==1){
						      look_id->type=11;
						}
					}
					updateAttribute(look_id->type);
				}
				look_tmp=look_id;
			;}
    break;

  case 46:
#line 216 "parser.y"
    {
				if(look_id->type==0){
					if(type_int==1) {
						if(param==1) {
							look_id->type=8; //배열 매개변수
						} else {
							look_id->type=3;
						}
					}
					else if(type_float==1) {
						if(param==1) {
							look_id->type=12; //배열 매개변수
						} else {
							look_id->type=10;
						}
					}
					updateAttribute(look_id->type);
				}
				look_tmp=look_id;
			;}
    break;

  case 47:
#line 237 "parser.y"
    {
				yyerrok;
				yyerror("no right large bracket");
			;}
    break;

  case 64:
#line 272 "parser.y"
    {
				yyerrok;
				yyerror("no right small bracket");
			;}
    break;

  case 65:
#line 277 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 66:
#line 282 "parser.y"
    {
				yyerrok;
				yyerror("no small left bracket");
			;}
    break;

  case 68:
#line 290 "parser.y"
    {
				yyerrok;
				yyerror("no right small bracket");
			;}
    break;

  case 69:
#line 295 "parser.y"
    {
				yyerrok;
				yyerror("no left small bracket");
			;}
    break;

  case 70:
#line 300 "parser.y"
    {
				    yyerrok;
				    yyerror("no expression");
				;}
    break;

  case 72:
#line 307 "parser.y"
    {
				yyerrok;
				yyerror("no semicolon");
			;}
    break;

  case 81:
#line 322 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 82:
#line 327 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 83:
#line 332 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 84:
#line 337 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 85:
#line 342 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 86:
#line 347 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 89:
#line 355 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 92:
#line 363 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 96:
#line 372 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 97:
#line 377 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 103:
#line 388 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 104:
#line 393 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 105:
#line 398 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 106:
#line 403 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 110:
#line 412 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 111:
#line 417 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 116:
#line 427 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 117:
#line 432 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 118:
#line 437 "parser.y"
    {
				yyerrok;
				yyerror("no expression");
			;}
    break;

  case 126:
#line 453 "parser.y"
    {
				yyerrok;
				yyerror("no right large bracket");
			;}
    break;

  case 128:
#line 459 "parser.y"
    {
				yyerrok;
				yyerror("no right small bracket");
			;}
    break;

  case 136:
#line 475 "parser.y"
    {
				if(look_id->type==0)
					look_id->type=5;
				updateAttribute(look_id->type);
			;}
    break;

  case 139:
#line 483 "parser.y"
    {
				yyerrok;
				yyerror("no right small bracket");
			;}
    break;


/* Line 1267 of yacc.c.  */
#line 2114 "parser.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 488 "parser.y"

/*updateAttr 함수 : 주어진 type을 사용하여 속성 업데이트*/
void updateAttribute(int type)
{
	int code, i, j;
	code = 0;
	for (i = nextid; i < nextSTfree - 1; i++) {
		code += (int)ST[i];
	}

	int hashcode = code % HTsize;

	HTpointer here = HT[hashcode];
	int found=0;

	while (here != NULL && found == 0) {
	    	found = 1;
		i = here->index;
		j = nextid;

		while (ST[i] != '\0' && ST[j] != '\0' && found == 1) {
			if (ST[i] != ST[j]) {
				found = 0;
				break;
			}
			else {
				i++;
				j++;
			}
		}

		if(!found) {
			here = here->next;
		} else {
			here->type = type;
			break;
		}
	}

	look_id->type=0;
}
