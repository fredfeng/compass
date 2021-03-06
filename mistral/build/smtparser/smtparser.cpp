/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zzparse
#define yylex           zzlex
#define yyerror         zzerror
#define yydebug         zzdebug
#define yynerrs         zznerrs

#define yylval          zzlval
#define yychar          zzchar

/* Copy the first part of user declarations.  */
#line 2 "smtparser.y" /* yacc.c:339  */

#include "smt-parser-defs.h"
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include "cnode.h"
#include "term.h"
#include "util.h"


struct pp
{
	map<Term*, Term*>* t_sub;
	map<CNode*, CNode*>* c_sub;
};

using namespace std;
int yylex();
extern int yy_scan_string(const char* c);
int yyerror(const char* p)
{ 
  if(smt_parser_error_fn != NULL) {
    smt_parser_error_fn("Error at line " + int_to_string(smt_curr_lineno) + ": " + string(p));
  }
  return 1;
};

 
ScopeTable st;



#line 107 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "smtparser.hpp".  */
#ifndef YY_ZZ_HOME_YUFENG_RESEARCH_OTHERS_COMPASS_MISTRAL_BUILD_SMTPARSER_SMTPARSER_HPP_INCLUDED
# define YY_ZZ_HOME_YUFENG_RESEARCH_OTHERS_COMPASS_MISTRAL_BUILD_SMTPARSER_SMTPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zzdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_PLUS = 258,
    TOKEN_MINUS = 259,
    TOKEN_IDENTIFIER = 260,
    TOKEN_TIMES = 261,
    TOKEN_DIVIDE = 262,
    TOKEN_INT = 263,
    TOKEN_LPAREN = 264,
    TOKEN_RPAREN = 265,
    TOKEN_AND = 266,
    TOKEN_OR = 267,
    TOKEN_NOT = 268,
    TOKEN_EQ = 269,
    TOKEN_GT = 270,
    TOKEN_GEQ = 271,
    TOKEN_LT = 272,
    TOKEN_LEQ = 273,
    TOKEN_COND = 274,
    TOKEN_ERROR = 275,
    TOKEN_LET = 276,
    TOKEN_ASSERT = 277,
    EXPR = 278,
    TOKEN_PRINT = 279,
    TOKEN_NEQ = 280,
    TOKEN_ISNIL = 281,
    TOKEN_CONS = 282,
    TOKEN_HD = 283,
    TOKEN_TL = 284
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zzlval;

int zzparse (void);

#endif /* !YY_ZZ_HOME_YUFENG_RESEARCH_OTHERS_COMPASS_MISTRAL_BUILD_SMTPARSER_SMTPARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  35
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  94

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    91,   101,   106,   111,   116,   121,   130,
     135,   145,   155,   165,   175,   185,   212,   216,   221,   226,
     241,   247,   260,   271,   311,   321,   327,   337,   346,   359,
     366,   379,   388,   422,   428,   442
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_PLUS", "TOKEN_MINUS",
  "TOKEN_IDENTIFIER", "TOKEN_TIMES", "TOKEN_DIVIDE", "TOKEN_INT",
  "TOKEN_LPAREN", "TOKEN_RPAREN", "TOKEN_AND", "TOKEN_OR", "TOKEN_NOT",
  "TOKEN_EQ", "TOKEN_GT", "TOKEN_GEQ", "TOKEN_LT", "TOKEN_LEQ",
  "TOKEN_COND", "TOKEN_ERROR", "TOKEN_LET", "TOKEN_ASSERT", "EXPR",
  "TOKEN_PRINT", "TOKEN_NEQ", "TOKEN_ISNIL", "TOKEN_CONS", "TOKEN_HD",
  "TOKEN_TL", "$accept", "program", "assert_list", "assertion",
  "constraint", "exp", "and_list", "or_list", "plus_list", "minus_list",
  "let_list", "let_elem", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

#define YYPACT_NINF -56

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define YYTABLE_NINF -32

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       0,   -18,    20,     0,   -56,    25,   -56,   -56,    99,    41,
      25,    25,    25,    36,    36,    36,    36,    36,    47,    52,
     -56,   -56,    -8,   -56,     6,    55,   -56,   -56,    64,    36,
      36,    36,    36,    36,    48,   -56,   -56,   -56,   -56,   -56,
     -56,    36,    36,    36,    51,    56,    65,    66,    67,    68,
      69,    50,    15,   -56,   -56,    13,    27,    36,    48,   -56,
     -56,   -56,   -56,   -56,   -56,    88,    25,    36,    25,   -56,
     -56,   -56,   -56,    70,    36,    71,    73,    33,    75,    76,
      77,    79,    85,   -56,   -56,    36,    48,   -56,   -56,   -56,
      97,    40,   -56,    50
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     1,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    25,     0,    27,     0,     0,    17,    16,     0,     0,
       0,     0,     0,     0,     0,     9,     6,    24,     7,    26,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    29,     0,     0,     0,     0,    18,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    32,
      20,    28,    22,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    21,    23,     0,     0,    35,    34,    15,
       0,     0,    19,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,   -56,    95,    -5,    -3,   -56,   -56,    18,   -56,
     -55,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    19,    45,    22,    24,    55,    75,
      52,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       9,     8,    36,    77,     5,    21,    23,    25,    69,     1,
      29,    30,    31,    32,    33,     8,    38,    37,    26,    39,
       6,    27,    28,    70,    51,    68,    46,    47,    48,    49,
      50,    91,    26,    69,     8,    27,    28,    72,    54,    56,
      57,    26,    51,    85,    27,    28,    66,    69,    67,    51,
      93,    20,    71,    73,    76,    26,    34,    51,    27,    65,
      58,    79,    35,    81,    80,    40,    59,    41,    42,    26,
      43,    82,    27,    28,    74,    60,    61,    62,    63,    64,
     -31,    83,    90,    84,    86,    44,    87,    88,    81,    89,
      90,    41,    42,    26,    43,   -30,    27,    65,     7,    10,
      11,    12,    13,    14,    15,    16,    17,    92,     8,    78,
      10,    11,    12,    13,    14,    15,    16,    17,     0,     0,
      18
};

static const yytype_int8 yycheck[] =
{
       5,     9,    10,    58,    22,    10,    11,    12,    52,     9,
      13,    14,    15,    16,    17,     9,    10,    22,     5,    24,
       0,     8,     9,    10,     9,    10,    29,    30,    31,    32,
      33,    86,     5,    77,     9,     8,     9,    10,    41,    42,
      43,     5,     9,    10,     8,     9,    51,    91,    51,     9,
      10,    10,    55,    56,    57,     5,     9,     9,     8,     9,
       9,    66,    10,    68,    67,    10,    10,     3,     4,     5,
       6,    74,     8,     9,    56,    10,    10,    10,    10,    10,
      10,    10,    85,    10,     9,    21,    10,    10,    93,    10,
      93,     3,     4,     5,     6,    10,     8,     9,     3,    11,
      12,    13,    14,    15,    16,    17,    18,    10,     9,    21,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    31,    32,    33,    22,     0,    33,     9,    34,
      11,    12,    13,    14,    15,    16,    17,    18,    21,    34,
      10,    34,    36,    34,    37,    34,     5,     8,     9,    35,
      35,    35,    35,    35,     9,    10,    10,    34,    10,    34,
      10,     3,     4,     6,    21,    35,    35,    35,    35,    35,
      35,     9,    40,    41,    35,    38,    35,    35,     9,    10,
      10,    10,    10,    10,    10,     9,    34,    35,    10,    41,
      10,    35,    10,    35,    38,    39,    35,    40,    21,    34,
      35,    34,    35,    10,    10,    10,     9,    10,    10,    10,
      35,    40,    10,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    35,    35,    35,    35,
      35,    35,    35,    35,    36,    36,    37,    37,    38,    38,
      39,    39,    40,    40,    41,    41
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     4,     4,     4,     4,     3,
       5,     5,     5,     5,     5,     7,     1,     1,     3,     7,
       4,     5,     4,     5,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 84 "smtparser.y" /* yacc.c:1646  */
    {
	assert((yyvsp[0]).kind == PARSE_CNODE);
	CNode* t = (yyvsp[0]).res.c;
	smt_res_constraint = t;
}
#line 1331 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 92 "smtparser.y" /* yacc.c:1646  */
    {
  assert((yyvsp[-1]).kind == PARSE_CNODE);
  assert((yyvsp[0]).kind == PARSE_CNODE);
  CNode* c1 = (yyvsp[-1]).res.c;
  CNode* c2 = (yyvsp[0]).res.c;
  (yyval).kind = PARSE_CNODE;
  (yyval).res.c = Connective::make(AND, c1, c2);
}
#line 1344 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 102 "smtparser.y" /* yacc.c:1646  */
    {
(yyval) = (yyvsp[0]);
}
#line 1352 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 107 "smtparser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
}
#line 1360 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "smtparser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
}
#line 1368 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 117 "smtparser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
}
#line 1376 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "smtparser.y" /* yacc.c:1646  */
    {
  assert((yyvsp[-1]).kind == PARSE_CNODE);
  CNode* c = (yyvsp[-1]).res.c;
  (yyval).kind = PARSE_CNODE;
  (yyval).res.c = Connective::make_not(c);
  
}
#line 1388 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 131 "smtparser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
}
#line 1396 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 136 "smtparser.y" /* yacc.c:1646  */
    {
    assert((yyvsp[-2]).kind == PARSE_TERM);
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-2]).res.t;
    Term* t2 = (yyvsp[-1]).res.t;
    (yyval).kind = PARSE_CNODE;
    (yyval).res.c = EqLeaf::make(t1, t2);
}
#line 1409 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 146 "smtparser.y" /* yacc.c:1646  */
    {
    assert((yyvsp[-2]).kind == PARSE_TERM);
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-2]).res.t;
    Term* t2 = (yyvsp[-1]).res.t;
    (yyval).kind = PARSE_CNODE;
    (yyval).res.c = ILPLeaf::make(t1, t2, ILP_GT);
}
#line 1422 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 156 "smtparser.y" /* yacc.c:1646  */
    {
    assert((yyvsp[-2]).kind == PARSE_TERM);
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-2]).res.t;
    Term* t2 = (yyvsp[-1]).res.t;
    (yyval).kind = PARSE_CNODE;
    (yyval).res.c = ILPLeaf::make(t1, t2, ILP_GEQ);
}
#line 1435 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 166 "smtparser.y" /* yacc.c:1646  */
    {
    assert((yyvsp[-2]).kind == PARSE_TERM);
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-2]).res.t;
    Term* t2 = (yyvsp[-1]).res.t;
    (yyval).kind = PARSE_CNODE;
    (yyval).res.c = ILPLeaf::make(t1, t2, ILP_LT);
}
#line 1448 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 176 "smtparser.y" /* yacc.c:1646  */
    {
 	assert((yyvsp[-2]).kind == PARSE_TERM);
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-2]).res.t;
    Term* t2 = (yyvsp[-1]).res.t;
    (yyval).kind = PARSE_CNODE;
    (yyval).res.c = ILPLeaf::make(t1, t2, ILP_LEQ);
}
#line 1461 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 186 "smtparser.y" /* yacc.c:1646  */
    {
     assert((yyvsp[-3]).kind == (PARSE_KIND)99);
     
     

     assert((yyvsp[-1]).kind == PARSE_CNODE);
     pp* p = (pp*)  (yyvsp[-3]).res.t;
     
     map<Term*, Term*>* subs =  p->t_sub;
      map<CNode*, CNode*>* subs_c =  p->c_sub;
     
     
     CNode* t = (yyvsp[-1]).res.c;
     //cout << "Term before: " << t->to_string() << endl;
     t = t->substitute(*subs);
     t = t->substitute(*subs_c);
     //  cout << "Term after: " << t->to_string() << endl;
     delete subs;
     delete subs_c;
     delete p;
     (yyval).kind = PARSE_CNODE;
      (yyval).res.c = t;   
}
#line 1489 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 213 "smtparser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
}
#line 1497 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 217 "smtparser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
}
#line 1505 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 222 "smtparser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
}
#line 1513 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 227 "smtparser.y" /* yacc.c:1646  */
    {
     assert((yyvsp[-3]).kind == (PARSE_KIND)99);
     pp* p = (pp*)  (yyvsp[-3]).res.t;
     map<Term*, Term*>* subs =  (map<Term*, Term*>*) p->t_sub;
     assert((yyvsp[-1]).kind == PARSE_TERM);
     Term* t = (yyvsp[-1]).res.t;
   //  cout << "Term before: " << t->to_string() << endl;
     t = t->substitute(*subs);
     //  cout << "Term after: " << t->to_string() << endl;
     delete subs;
     delete p;
     (yyval).kind = PARSE_TERM;
      (yyval).res.t = t;   
}
#line 1532 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 242 "smtparser.y" /* yacc.c:1646  */
    {
 	(yyval) = (yyvsp[-1]);
    
}
#line 1541 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 248 "smtparser.y" /* yacc.c:1646  */
    {
 	assert((yyvsp[-2]).kind == PARSE_TERM);
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-2]).res.t;
    Term* t2 = (yyvsp[-1]).res.t;
    (yyval).kind = PARSE_TERM;
    map<Term*, long int> terms;
    terms[t1]+=1;
    terms[t2]-=1;
    (yyval).res.t = ArithmeticTerm::make(terms, 0);
}
#line 1557 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 261 "smtparser.y" /* yacc.c:1646  */
    {
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-1]).res.t;
    (yyval).kind = PARSE_TERM;
    map<Term*, long int> terms;
    terms[t1]-=1;
    (yyval).res.t = ArithmeticTerm::make(terms, 0);
}
#line 1570 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 272 "smtparser.y" /* yacc.c:1646  */
    {
   	assert((yyvsp[-2]).kind == PARSE_TERM);
    assert((yyvsp[-1]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-2]).res.t;
    Term* t2 = (yyvsp[-1]).res.t;
    ConstantTerm* ct = NULL;
    Term* other = NULL;
    if(t1->get_term_type() == CONSTANT_TERM){
    	ct = static_cast<ConstantTerm*>(t1);
    	other = t2;
    }
    else if(t2->get_term_type() == CONSTANT_TERM){
    	ct = static_cast<ConstantTerm*>(t2);
    	other = t1;
    }
    if(ct == NULL) {
    	zzerror("Non-linear constraint");
    	YYERROR;
    }
    
    
    (yyval).kind = PARSE_TERM;
    map<Term*, long int> terms;
    terms[other]=ct->get_constant();
    (yyval).res.t = ArithmeticTerm::make(terms, 0);
}
#line 1601 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 312 "smtparser.y" /* yacc.c:1646  */
    {
  assert((yyvsp[-1]).kind == PARSE_CNODE);
  assert((yyvsp[0]).kind == PARSE_CNODE);
  CNode* c1 = (yyvsp[-1]).res.c;
  CNode* c2 = (yyvsp[0]).res.c;
  (yyval).kind = PARSE_CNODE;
  (yyval).res.c = Connective::make(AND, c1, c2);
}
#line 1614 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 322 "smtparser.y" /* yacc.c:1646  */
    {
 (yyval) = (yyvsp[0]);
}
#line 1622 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 328 "smtparser.y" /* yacc.c:1646  */
    {
  assert((yyvsp[-1]).kind == PARSE_CNODE);
  assert((yyvsp[0]).kind == PARSE_CNODE);
  CNode* c1 = (yyvsp[-1]).res.c;
  CNode* c2 = (yyvsp[0]).res.c;
  (yyval).kind = PARSE_CNODE;
  (yyval).res.c = Connective::make(OR, c1, c2);
}
#line 1635 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 338 "smtparser.y" /* yacc.c:1646  */
    {
 (yyval) = (yyvsp[0]);
}
#line 1643 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 347 "smtparser.y" /* yacc.c:1646  */
    {
 	assert((yyvsp[-1]).kind == PARSE_TERM);
    assert((yyvsp[0]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-1]).res.t;
    Term* t2 = (yyvsp[0]).res.t;
    (yyval).kind = PARSE_TERM;
    map<Term*, long int> terms;
    terms[t1]+=1;
    terms[t2]+=1;
    (yyval).res.t = ArithmeticTerm::make(terms, 0);
}
#line 1659 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 360 "smtparser.y" /* yacc.c:1646  */
    {
 (yyval) = (yyvsp[0]);
}
#line 1667 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 367 "smtparser.y" /* yacc.c:1646  */
    {
 	assert((yyvsp[-1]).kind == PARSE_TERM);
    assert((yyvsp[0]).kind == PARSE_TERM);
    Term* t1 = (yyvsp[-1]).res.t;
    Term* t2 = (yyvsp[0]).res.t;
    (yyval).kind = PARSE_TERM;
    map<Term*, long int> terms;
    terms[t1]+=1;
    terms[t2]-=1;
    (yyval).res.t = ArithmeticTerm::make(terms, 0);
}
#line 1683 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 380 "smtparser.y" /* yacc.c:1646  */
    {
 (yyval) = (yyvsp[0]);
}
#line 1691 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 389 "smtparser.y" /* yacc.c:1646  */
    {
	pp* p1 = (pp*)(yyvsp[-1]).res.t;
	pp* p2 = (pp*)(yyvsp[0]).res.t;

	{
	  map<Term*, Term*>* subs1 = (map<Term*, Term*>* )p1->t_sub;
	  map<Term*, Term*>* subs2 = (map<Term*, Term*>* )p2->t_sub;
	  for(map<Term*, Term*>::iterator it = subs2->begin(); it != subs2->end();
	  	it++)
	  	{
	  	(*subs1)[it->first] = it->second;
	  	}
	  delete subs2;
	}
	
	{
	  map<CNode*, CNode*>* subs1 = (map<CNode*, CNode*>* )p1->c_sub;
	  map<CNode*, CNode*>* subs2 = (map<CNode*, CNode*>* )p2->c_sub;
	  for(map<CNode*, CNode*>::iterator it = subs2->begin(); it != subs2->end();
	  	it++)
	  	{
	  	(*subs1)[it->first] = it->second;
	  	}
	  delete subs2;
	}
	delete p2;
	
	  
	  
	  (yyval).kind = (PARSE_KIND)99;
      (yyval).res.t = (Term*) p1;
}
#line 1728 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 423 "smtparser.y" /* yacc.c:1646  */
    {
 (yyval) = (yyvsp[0]);
}
#line 1736 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 429 "smtparser.y" /* yacc.c:1646  */
    {
  map<Term*, Term*>* subs = new  map<Term*, Term*>();
  assert((yyvsp[-2]).kind == PARSE_TERM);
  assert((yyvsp[-1]).kind == PARSE_TERM);
  Term* t1 = (yyvsp[-2]).res.t;
  Term* t2 = (yyvsp[-1]).res.t;
  (*subs)[t1] = t2;
  pp* p = new pp;
  p->t_sub = subs;
  p->c_sub = new map<CNode*, CNode*>();
  (yyval).kind = (PARSE_KIND)99;
  (yyval).res.t = (Term*) p;
}
#line 1754 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 443 "smtparser.y" /* yacc.c:1646  */
    {
  map<CNode*, CNode*>* subs = new  map<CNode*, CNode*>();
  assert((yyvsp[-2]).kind == PARSE_CNODE);
  assert((yyvsp[-1]).kind == PARSE_CNODE);
  CNode* t1 = (yyvsp[-2]).res.c;
  CNode* t2 = (yyvsp[-1]).res.c;
  (*subs)[t1] = t2;
  pp* p = new pp;
  p->t_sub = new map<Term*, Term*>();
  p->c_sub = subs;
  (yyval).kind = (PARSE_KIND)99;
  (yyval).res.t = (Term*) p;
}
#line 1772 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
    break;


#line 1776 "/home/yufeng/research/others/compass/mistral/build/smtparser/smtparser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
