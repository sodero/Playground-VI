/* A Bison parser, made by GNU Bison 3.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "../src/parser.y"

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* parser.y:                                                                                                                                                                            */
/*                                                                                                                                                                                      */
/* InstallerLG parser                                                                                                                                                                   */
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Copyright (C) 2018-2020, Ola Söder. All rights reserved.                                                                                                                             */
/* Licensed under the AROS PUBLIC LICENSE (APL) Version 1.1                                                                                                                             */
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include "all.h"
#include "alloc.h"
#include "eval.h"
#include "init.h"
#include "lexer.h"

#include <string.h>

// Always debug.
#define YYDEBUG 1

#line 92 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SYM = 258,
    STR = 259,
    OOM = 260,
    INT = 261,
    HEX = 262,
    BIN = 263,
    EQ = 264,
    GT = 265,
    GTE = 266,
    LT = 267,
    LTE = 268,
    NEQ = 269,
    IF = 270,
    SELECT = 271,
    UNTIL = 272,
    WHILE = 273,
    TRACE = 274,
    RETRACE = 275,
    ASTRAW = 276,
    ASBRAW = 277,
    ASBEVAL = 278,
    EVAL = 279,
    OPTIONS = 280,
    EXECUTE = 281,
    REXX = 282,
    RUN = 283,
    ABORT = 284,
    EXIT = 285,
    ONERROR = 286,
    TRAP = 287,
    REBOOT = 288,
    COPYFILES = 289,
    COPYLIB = 290,
    DELETE = 291,
    EXISTS = 292,
    FILEONLY = 293,
    FOREACH = 294,
    MAKEASSIGN = 295,
    MAKEDIR = 296,
    PROTECT = 297,
    STARTUP = 298,
    TEXTFILE = 299,
    TOOLTYPE = 300,
    TRANSCRIPT = 301,
    RENAME = 302,
    COMPLETE = 303,
    DEBUG = 304,
    MESSAGE = 305,
    USER = 306,
    WELCOME = 307,
    WORKING = 308,
    AND = 309,
    BITAND = 310,
    BITNOT = 311,
    BITOR = 312,
    BITXOR = 313,
    NOT = 314,
    IN = 315,
    OR = 316,
    SHIFTLEFT = 317,
    SHIFTRIGHT = 318,
    XOR = 319,
    CLOSEMEDIA = 320,
    EFFECT = 321,
    SETMEDIA = 322,
    SHOWMEDIA = 323,
    DATABASE = 324,
    EARLIER = 325,
    GETASSIGN = 326,
    GETDEVICE = 327,
    GETDISKSPACE = 328,
    GETENV = 329,
    GETSIZE = 330,
    GETSUM = 331,
    GETVERSION = 332,
    ICONINFO = 333,
    QUERYDISPLAY = 334,
    CUS = 335,
    DCL = 336,
    ASKBOOL = 337,
    ASKCHOICE = 338,
    ASKDIR = 339,
    ASKDISK = 340,
    ASKFILE = 341,
    ASKNUMBER = 342,
    ASKOPTIONS = 343,
    ASKSTRING = 344,
    CAT = 345,
    EXPANDPATH = 346,
    FMT = 347,
    PATHONLY = 348,
    PATMATCH = 349,
    STRLEN = 350,
    SUBSTR = 351,
    TACKON = 352,
    SET = 353,
    SYMBOLSET = 354,
    SYMBOLVAL = 355,
    OPENWBOBJECT = 356,
    SHOWWBOBJECT = 357,
    CLOSEWBOBJECT = 358,
    ALL = 359,
    APPEND = 360,
    ASSIGNS = 361,
    BACK = 362,
    CHOICES = 363,
    COMMAND = 364,
    COMPRESSION = 365,
    CONFIRM = 366,
    DEFAULT = 367,
    DELOPTS = 368,
    DEST = 369,
    DISK = 370,
    FILES = 371,
    FONTS = 372,
    GETDEFAULTTOOL = 373,
    GETPOSITION = 374,
    GETSTACK = 375,
    GETTOOLTYPE = 376,
    HELP = 377,
    INFOS = 378,
    INCLUDE = 379,
    NEWNAME = 380,
    NEWPATH = 381,
    NOGAUGE = 382,
    NOPOSITION = 383,
    NOREQ = 384,
    PATTERN = 385,
    PROMPT = 386,
    QUIET = 387,
    RANGE = 388,
    SAFE = 389,
    SETDEFAULTTOOL = 390,
    SETPOSITION = 391,
    SETSTACK = 392,
    SETTOOLTYPE = 393,
    SOURCE = 394,
    SWAPCOLORS = 395,
    OPTIONAL = 396,
    RESIDENT = 397,
    OVERRIDE = 398
  };
#endif

/* Value type.  */



int yyparse (yyscan_t scanner);

#endif /* !YY_YY_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  291
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2384

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  153
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  159
/* YYNRULES -- Number of rules.  */
#define YYNRULES  383
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  739

#define YYUNDEFTOK  2
#define YYMAXUTOK   398


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     144,   145,   148,   146,     2,   149,     2,   147,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     152,   150,   151,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    88,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   275,   276,
     277,   278,   282,   283,   284,   285,   286,   287,   291,   292,
     293,   294,   295,   296,   297,   298,   302,   303,   304,   305,
     306,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   325,   326,   327,   328,   329,   330,   331,
     333,   334,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   402,   403,   404,
     405,   406,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   429,   430,
     431,   432,   433,   434,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   467,   468,   469,
     473,   474,   475,   476,   477,   478,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SYM", "STR", "OOM", "INT", "HEX", "BIN",
  "EQ", "GT", "GTE", "LT", "LTE", "NEQ", "IF", "SELECT", "UNTIL", "WHILE",
  "TRACE", "RETRACE", "ASTRAW", "ASBRAW", "ASBEVAL", "EVAL", "OPTIONS",
  "EXECUTE", "REXX", "RUN", "ABORT", "EXIT", "ONERROR", "TRAP", "REBOOT",
  "COPYFILES", "COPYLIB", "DELETE", "EXISTS", "FILEONLY", "FOREACH",
  "MAKEASSIGN", "MAKEDIR", "PROTECT", "STARTUP", "TEXTFILE", "TOOLTYPE",
  "TRANSCRIPT", "RENAME", "COMPLETE", "DEBUG", "MESSAGE", "USER",
  "WELCOME", "WORKING", "AND", "BITAND", "BITNOT", "BITOR", "BITXOR",
  "NOT", "IN", "OR", "SHIFTLEFT", "SHIFTRIGHT", "XOR", "CLOSEMEDIA",
  "EFFECT", "SETMEDIA", "SHOWMEDIA", "DATABASE", "EARLIER", "GETASSIGN",
  "GETDEVICE", "GETDISKSPACE", "GETENV", "GETSIZE", "GETSUM", "GETVERSION",
  "ICONINFO", "QUERYDISPLAY", "CUS", "DCL", "ASKBOOL", "ASKCHOICE",
  "ASKDIR", "ASKDISK", "ASKFILE", "ASKNUMBER", "ASKOPTIONS", "ASKSTRING",
  "CAT", "EXPANDPATH", "FMT", "PATHONLY", "PATMATCH", "STRLEN", "SUBSTR",
  "TACKON", "SET", "SYMBOLSET", "SYMBOLVAL", "OPENWBOBJECT",
  "SHOWWBOBJECT", "CLOSEWBOBJECT", "ALL", "APPEND", "ASSIGNS", "BACK",
  "CHOICES", "COMMAND", "COMPRESSION", "CONFIRM", "DEFAULT", "DELOPTS",
  "DEST", "DISK", "FILES", "FONTS", "GETDEFAULTTOOL", "GETPOSITION",
  "GETSTACK", "GETTOOLTYPE", "HELP", "INFOS", "INCLUDE", "NEWNAME",
  "NEWPATH", "NOGAUGE", "NOPOSITION", "NOREQ", "PATTERN", "PROMPT",
  "QUIET", "RANGE", "SAFE", "SETDEFAULTTOOL", "SETPOSITION", "SETSTACK",
  "SETTOOLTYPE", "SOURCE", "SWAPCOLORS", "OPTIONAL", "RESIDENT",
  "OVERRIDE", "'('", "')'", "'+'", "'/'", "'*'", "'-'", "'='", "'>'",
  "'<'", "$accept", "start", "s", "p", "pp", "ps", "pps", "vp", "vps",
  "opts", "xpb", "xpbs", "np", "sps", "par", "cv", "cvv", "opt", "ivp",
  "add", "div", "mul", "sub", "eq", "gt", "gte", "lt", "lte", "neq", "if",
  "select", "until", "while", "trace", "retrace", "astraw", "asbraw",
  "asbeval", "eval", "options", "execute", "rexx", "run", "abort", "exit",
  "onerror", "reboot", "trap", "copyfiles", "copylib", "delete", "exists",
  "fileonly", "foreach", "makeassign", "makedir", "protect", "startup",
  "textfile", "tooltype", "transcript", "rename", "complete", "debug",
  "message", "user", "welcome", "working", "and", "bitand", "bitnot",
  "bitor", "bitxor", "not", "in", "or", "shiftleft", "shiftright", "xor",
  "closemedia", "effect", "setmedia", "showmedia", "database", "earlier",
  "getassign", "getdevice", "getdiskspace", "getenv", "getsize", "getsum",
  "getversion", "iconinfo", "querydisplay", "dcl", "cus", "askbool",
  "askchoice", "askdir", "askdisk", "askfile", "asknumber", "askoptions",
  "askstring", "cat", "expandpath", "fmt", "pathonly", "patmatch",
  "strlen", "substr", "tackon", "set", "symbolset", "symbolval",
  "openwbobject", "showwbobject", "closewbobject", "all", "append",
  "assigns", "back", "choices", "command", "compression", "confirm",
  "default", "delopts", "dest", "disk", "files", "fonts", "getdefaulttool",
  "getposition", "getstack", "gettooltype", "help", "infos", "include",
  "newname", "newpath", "nogauge", "noposition", "noreq", "pattern",
  "prompt", "quiet", "range", "safe", "setdefaulttool", "setposition",
  "setstack", "settooltype", "source", "swapcolors", "optional",
  "resident", "override", "dynopt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    40,    41,    43,    47,    42,    45,
      61,    62,    60
};
# endif

#define YYPACT_NINF (-402)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -140,  1262,    35,  -402,  -402,  -140,  -140,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,     9,
      15,    93,    93,    93,    93,    93,    93,    93,  -105,   -97,
     -94,    93,    93,    93,   -75,   573,   573,   573,    93,    61,
    -140,    93,   -68,   -62,   -62,   573,   573,    93,    93,    93,
     573,    93,   573,   -62,   -62,    93,    93,    93,    68,   573,
      93,    87,   118,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,   127,   -62,    93,    99,
    -136,   -62,  -120,   -62,  -113,  -111,   -62,  -106,    93,    93,
      93,    93,    93,    93,    93,   107,    93,    93,   573,    93,
      93,   -37,    93,   -26,  -140,    93,    93,    -7,   143,    93,
     248,    93,    -2,    27,    32,    93,    93,    93,    93,   262,
      36,    93,    93,    40,    43,    48,    50,    93,    93,    65,
      93,    71,    93,    93,    93,    93,    93,    94,   270,    98,
      93,    93,    93,    93,    93,    93,    93,    93,   102,  -101,
     -89,  -402,  -140,  -140,  -140,  -140,  -402,  -402,  -402,  -402,
    -402,  -402,  1862,  -402,  -402,   276,  -402,  -402,  -402,   293,
      93,   116,   119,   141,   303,   146,   167,   835,  -140,  -140,
    -402,  -402,  -402,   172,   184,   188,  -402,  1412,   379,   573,
     419,   573,   427,   573,   446,  1562,  -402,   452,   458,   -87,
    -140,  -402,  2240,   -85,   -82,   464,   573,   -64,   573,   190,
    -140,   470,   -59,   -57,   573,   479,   -40,   -62,   487,   -32,
     -29,   547,   -27,   196,  -402,   633,   718,   573,   201,  -402,
     738,  -402,   787,   795,   209,   213,   216,   220,   224,    93,
     815,   245,   257,   259,   267,    93,   892,    93,   901,   271,
     274,   942,   298,   300,   986,   334,   335,   343,   344,  -402,
     -17,    -8,   351,    34,  -402,    -4,    11,  -402,    13,    17,
    -402,    19,  -402,    24,    53,  -402,    56,  1004,   353,   354,
     356,   357,  1064,   358,   835,     7,  -402,  1085,   360,    58,
     573,   361,   364,  -402,  1091,  -402,    64,  1103,  1672,  -402,
    -402,  1678,   365,  -402,  1684,   366,  -402,  -402,  -402,   367,
     368,   371,   372,  -402,  1692,  -402,   373,   375,  -402,  -402,
    -402,  -402,   376,  1827,  -402,   380,  -402,   381,   382,   383,
    1835,   385,    70,  -402,  -402,  1844,  -402,   386,  1978,   387,
    1987,  1993,   388,   389,   391,  -402,  -402,  -402,    93,   102,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  1262,  -402,  -402,
      74,   835,  -402,  -402,  2012,  -402,  2113,    85,    89,  -402,
    -402,  -402,    91,  -402,    97,  2121,   -62,  -402,   101,  2136,
    -402,   105,  2142,  -402,  -402,   392,  -402,  2162,  -402,   113,
      93,  -402,  -402,  -402,   115,  2168,  -402,   158,   394,  -402,
     160,  1712,  -402,   396,   408,  -402,   398,  -402,   171,   176,
    -402,   179,  -402,   181,   193,  -402,   199,  -402,  -402,  -402,
    -402,   204,  -402,  -402,  -402,   207,  2174,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  2180,  -402,  -402,  -402,
    -402,  -402,   399,  -402,   401,    93,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,   405,  -402,   403,
    -402,  -402,  -402,  -402,   412,    42,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
     413,  -402,  -402,   835,  -402,  -402,  -402,  -402,  -402,   219,
     230,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,   455,  -402,   415,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  2186,  2192,
    -402,   232,  -402,  -402,  -402,  -402,  -402,  -402,  -402,   234,
    -402,  -402,   244,  -402,  -402,   250,  -402,  -402,  -402,   -62,
    -402,  -402,   254,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
     256,  -402,  -402,  -402,  -402,   264,  -402,  -402,  -402,   266,
    -402,  -402,  -402,  2198,  -402,  -402,  -402,  -402,   416,  -402,
    -402,  -402,  -402,   295,  -402,  -402,   417,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,    16,     3,     0,    19,    11,    79,
      80,    81,    82,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   118,   117,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   155,   154,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    58,    57,    59,
      60,    61,    62,    63,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    64,    78,    65,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     1,    13,    14,    15,    18,    30,    29,    31,    26,
      27,    28,     0,   303,     8,     0,     4,     5,   320,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,   195,   196,     0,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,     0,     0,     0,   263,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
       0,     0,     0,     0,   304,     0,     0,   307,     0,     0,
     310,     0,   312,     0,     0,   315,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,   336,     0,   338,     0,     0,     0,   342,
     344,     0,     0,   347,     0,     0,   349,   350,   351,     0,
       0,     0,     0,   357,     0,   358,     0,     0,   361,   362,
     363,   364,     0,     0,   367,     0,   369,     0,     0,     0,
       0,     0,     0,   377,   379,     0,   380,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    17,    20,     0,     0,
     302,     7,   319,     6,   184,   186,   187,     0,   190,    23,
       0,    36,   189,   188,     0,    24,     0,     0,     0,   197,
     198,   199,     0,   204,     0,     0,    18,   208,     0,     0,
     212,     0,     0,   213,   217,     0,   216,     0,   219,     0,
       0,   222,   223,   227,     0,     0,   228,     0,     0,   231,
       0,     0,   236,     0,     0,   234,     0,   240,     0,     0,
     244,     0,   242,     0,     0,   248,     0,   249,   250,   251,
     253,     0,   254,   255,   260,     0,     0,   261,   262,   264,
     266,   267,   268,   269,   270,   271,     0,   273,   274,   275,
     276,   277,     0,   279,     0,     0,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,     0,   294,     0,
     296,   297,    35,   301,     0,     0,   305,   306,   308,   309,
     311,   313,   314,   316,   317,   318,   321,   322,   323,   324,
       0,   326,    33,     0,   327,   328,     9,   329,   330,     0,
       0,   334,   335,   337,   339,   340,   341,   343,   345,   346,
     348,   352,   353,   354,   355,   356,   359,   360,   365,   366,
     368,   370,   371,   372,   374,   373,     0,   375,     0,   378,
     381,   178,   179,   180,   181,   182,   183,   185,     0,     0,
     382,     0,    37,   191,    25,   192,   193,   201,   202,     0,
     205,   206,     0,   209,   210,     0,   214,   215,   221,     0,
     224,   225,     0,   229,   230,   232,   235,   233,   237,   238,
       0,   243,   241,   245,   246,     0,   252,   257,   258,     0,
     272,   278,   280,     0,   295,   300,    34,   299,     0,   325,
      32,   331,   332,     0,   376,    21,     0,   383,   203,   207,
     211,   226,   239,   247,   259,   281,   298,   333,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -402,  -402,  -401,   500,   847,  -139,  -402,    78,    41,     0,
    -310,  -402,  -104,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,    95,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -166,  -402,    90,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,   168,  -402,  -402
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   304,   311,   305,   427,   306,   292,   516,
     501,   506,   307,   425,   605,   315,   316,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   290,   604,   338,     1,   293,   295,   505,   342,   404,
     623,   309,   296,   297,   298,   299,   300,   301,   296,   297,
     298,   299,   300,   301,   342,   407,   328,   330,   332,   334,
     337,   342,   410,   342,   412,   291,   345,   602,   342,   415,
     320,     5,   289,     1,   486,   716,   361,   294,   321,   365,
     366,   322,   370,   372,   373,     1,   487,     1,   528,   342,
     531,   380,   342,   532,   296,   297,   298,   299,   300,   301,
     326,   296,   297,   298,   299,   300,   301,   341,     4,   288,
     342,   536,   342,     4,     4,   544,   545,   342,   547,   417,
     296,   297,   298,   299,   300,   301,   296,   297,   298,   299,
     300,   301,   403,   434,   342,   552,   437,   438,   433,   441,
     424,   444,   342,   557,   622,   342,   558,   342,   560,   435,
     454,   296,   297,   298,   299,   300,   301,   597,   598,   463,
     296,   297,   298,   299,   300,   301,   342,   600,   439,   475,
     342,   606,   478,   446,   480,   481,   296,   297,   298,   299,
     300,   301,   624,   302,   303,   342,   607,   342,   608,   302,
     308,   342,   609,   342,   610,   329,   331,   333,   342,   611,
       6,   525,   447,   343,   344,   346,   348,   448,     1,   603,
     354,   455,   358,   359,   360,   458,     1,   717,   459,   367,
     515,   672,   519,   460,   522,   461,   674,   342,   612,   527,
     342,   613,   342,   628,   718,   335,   336,   535,     1,   634,
     464,   339,   302,   364,   656,   657,   466,   401,   342,   670,
     405,   406,   408,   409,   411,   413,   414,   416,   566,     1,
     675,   302,   369,     1,   676,   342,   487,   302,   430,   473,
     576,   342,   677,   476,     6,   342,   680,   485,     4,   342,
     683,   296,   297,   298,   299,   300,   301,     1,   688,   342,
     690,   494,   302,   371,   495,   296,   297,   298,   299,   300,
     301,   302,   399,   296,   297,   298,   299,   300,   301,   296,
     297,   298,   299,   300,   301,   436,   496,   302,   440,   293,
     295,   502,   293,   295,   293,   295,   296,   297,   298,   299,
     300,   301,   342,   693,     1,   695,   296,   297,   298,   299,
     300,   301,   503,   720,   500,   342,   698,   509,     6,     6,
     342,   699,     4,   342,   701,   342,   702,   512,   514,   510,
     518,   294,   521,   511,   294,   539,   294,   342,   703,   293,
       6,   562,   512,   342,   704,   534,   567,   537,   342,   706,
       6,   342,   707,   548,   571,   551,   553,   554,   572,   507,
     508,   573,   561,   342,   721,   574,   565,     4,     4,   575,
       4,     4,     4,     4,   342,   722,   342,   727,   342,   728,
     489,   529,   296,   297,   298,   299,   300,   301,   342,   729,
     578,   540,   302,   443,   342,   730,     4,     4,   342,   731,
     342,   732,   579,     6,   580,   489,   302,   453,   342,   733,
     342,   734,   581,   489,   302,   474,   587,     4,     4,   588,
     302,   490,   296,   297,   298,   299,   300,   301,     4,   629,
     296,   297,   298,   299,   300,   301,   293,   302,   492,   342,
     737,   543,   546,   590,     5,   591,   713,   497,   498,   296,
     297,   298,   299,   300,   301,   296,   297,   298,   299,   300,
     301,   296,   297,   298,   299,   300,   301,   296,   297,   298,
     299,   300,   301,   296,   297,   298,   299,   300,   301,   593,
     594,     4,   296,   297,   298,   299,   300,   301,   595,   596,
     296,   297,   298,   299,   300,   301,   601,   290,   615,   616,
     671,   617,   618,   621,     6,   627,   631,   293,   293,   632,
     638,   640,   641,   642,     4,   679,   643,   644,   646,   682,
     647,   648,   685,   327,   513,   650,   651,   652,   653,   293,
     655,   660,   662,   665,   666,   692,   667,   686,   669,   694,
     293,   696,   271,   697,   711,   669,   712,   279,   714,   700,
     296,   297,   298,   299,   300,   301,   705,   715,   719,   241,
     724,   736,   738,   327,   517,   726,   709,   658,   599,     0,
       0,   327,   520,     0,     0,   288,   296,   297,   298,   299,
     300,   301,   288,     0,     0,     4,     4,     0,     0,     0,
     302,   523,     0,     0,     0,     0,   335,   524,     0,     0,
       0,     0,   302,   526,     0,     6,     0,     4,   327,   533,
       0,     0,     0,     0,   541,   542,     0,     0,     4,   489,
       0,     0,     0,   327,   550,     0,     0,     0,     0,     0,
     723,   327,   555,     0,     0,     0,   296,   297,   298,   299,
     300,   301,     0,     0,     0,     0,     5,     0,     0,     0,
       0,   310,   310,   310,   314,   317,   318,   319,     0,     0,
       0,   323,   324,   325,     0,     0,     0,     0,     0,   293,
       0,   340,     0,     0,     0,     0,   347,   349,   310,   351,
     353,   355,   357,     4,     0,     0,   310,   363,     0,   500,
     368,   302,   559,     0,   310,   375,   310,   310,   378,   379,
       0,   310,   310,   310,   384,   310,   310,   310,   388,   310,
     391,   393,   394,   396,   397,   398,   400,   327,   310,     0,
       0,   296,   297,   298,   299,   300,   301,     0,     0,   418,
     419,   310,   421,   310,   310,     0,   310,   428,   429,   431,
     432,   296,   297,   298,   299,   300,   301,     4,     0,   442,
       0,   445,     0,     0,     0,   449,   310,   451,   310,     0,
       0,   456,   457,     0,     0,     0,     0,   462,     0,     0,
     310,     0,   467,   310,   469,   470,   472,   302,   563,     0,
     477,     0,   310,     0,     0,   310,   310,   310,     0,     0,
     296,   297,   298,   299,   300,   301,     0,     0,   296,   297,
     298,   299,   300,   301,     0,   491,     0,     0,     0,   491,
     493,     0,     0,     0,   499,     0,     0,   499,   296,   297,
     298,   299,   300,   301,     0,     0,     0,     0,   491,     0,
     491,     0,   491,     0,   491,     0,     0,   491,   296,   297,
     298,   299,   300,   301,     0,   491,     0,     0,   538,     0,
       0,   493,     0,     0,   549,   493,     0,     0,   556,     0,
       0,   491,   327,   564,     0,   491,   491,     0,     0,     0,
     491,     0,   491,   491,     0,     0,     0,     0,     0,     0,
     491,     0,   302,   568,     0,   310,   584,   310,   493,     0,
       0,   493,     0,     0,   493,   296,   297,   298,   299,   300,
     301,     0,     0,     0,   296,   297,   298,   299,   300,   301,
       0,     0,     0,     0,     0,     0,     0,   491,     0,     0,
       0,     0,   620,     0,   499,     0,     0,   310,     0,     0,
     630,   302,   569,     0,   491,     0,     0,   491,   491,   302,
     570,   491,     0,     0,   491,   296,   297,   298,   299,   300,
     301,     0,     0,     0,   491,     0,     0,     0,     0,   302,
     577,     0,     0,   491,     0,     0,     0,     0,     0,     0,
     493,     0,     0,     0,     0,   491,     0,     0,   491,   504,
     491,   491,     0,     0,     0,     0,     0,     0,   668,   296,
     297,   298,   299,   300,   301,     0,     0,     0,     0,   312,
     313,   499,     0,     0,     0,     0,   499,   296,   297,   298,
     299,   300,   301,     0,     0,   491,     0,     0,     0,   491,
       0,     0,   491,     0,     0,   350,   352,   491,   356,     0,
     689,     0,     0,   362,     0,   491,   302,   583,     0,     0,
       0,   374,     0,   376,   377,   302,   586,     0,   381,   382,
     383,     0,   385,   386,   387,   389,   390,   392,     0,   395,
       0,     0,     0,     0,     0,   402,   491,   296,   297,   298,
     299,   300,   301,     0,     0,     0,   491,     0,   420,     0,
     422,   423,     0,   426,     0,     0,   302,   589,   296,   297,
     298,   299,   300,   301,   296,   297,   298,   299,   300,   301,
       0,     0,     0,   450,     0,   452,   296,   297,   298,   299,
     300,   301,     0,     0,     0,     0,     0,   465,     0,     0,
     468,     0,   471,   499,     0,     0,     0,     0,     0,   479,
     302,   592,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   302,   614,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   499,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   302,   619,
       0,     0,     0,   491,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
     625,     0,   582,     0,   585,   302,   633,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   302,   635,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,   150,     0,     0,     0,
       0,     0,     0,   151,   626,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     1,     0,   281,   282,
     283,   284,   285,   286,   287,   149,   150,     0,     0,     0,
       0,     0,     0,   151,     0,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   327,     0,   281,   282,
     283,   284,   285,   286,   287,   149,   150,     0,     0,     0,
       0,     0,     0,   151,     0,   152,   153,   488,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,   297,   298,   299,   300,
     301,   296,   297,   298,   299,   300,   301,   296,   297,   298,
     299,   300,   301,     0,   269,   296,   297,   298,   299,   300,
     301,     0,     0,     0,     0,     0,   302,     0,   281,   282,
     283,   284,   285,   286,   287,   149,   150,     0,     0,     0,
       0,     0,     0,   151,     0,   152,   153,   488,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   302,   636,     0,     0,
       0,     0,   302,   637,     0,     0,     0,     0,   302,   639,
     296,   297,   298,   299,   300,   301,   302,   645,   296,   297,
     298,   299,   300,   301,     0,     0,   271,   296,   297,   298,
     299,   300,   301,     0,     0,     0,   302,     0,   281,   282,
     283,   284,   285,   286,   287,   149,   150,     0,     0,     0,
       0,     0,     0,   151,     0,   152,   153,   488,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,     0,     0,     0,
       0,   302,   649,     0,     0,     0,     0,     0,     0,   302,
     654,   296,   297,   298,   299,   300,   301,     0,   302,   659,
     296,   297,   298,   299,   300,   301,   296,   297,   298,   299,
     300,   301,     0,     0,     0,     0,   302,     0,   281,   282,
     283,   284,   285,   286,   287,   149,   150,     0,     0,     0,
       0,     0,     0,   151,     0,   152,   153,   488,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   296,   297,   298,   299,
     300,   301,   302,   661,   296,   297,   298,   299,   300,   301,
       0,   302,   663,     0,     0,     0,     0,   302,   664,   296,
     297,   298,   299,   300,   301,   296,   297,   298,   299,   300,
     301,     0,     0,     0,     0,     0,     1,     0,   281,   282,
     283,   284,   285,   286,   287,   296,   297,   298,   299,   300,
     301,   296,   297,   298,   299,   300,   301,   296,   297,   298,
     299,   300,   301,   296,   297,   298,   299,   300,   301,   296,
     297,   298,   299,   300,   301,   296,   297,   298,   299,   300,
     301,   296,   297,   298,   299,   300,   301,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   530,     0,   504,   673,     0,
       0,     0,     0,     0,     0,   327,   678,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,   681,     0,     0,     0,     0,   327,   684,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   302,   687,     0,     0,
       0,     0,   327,   691,     0,     0,     0,     0,   327,   708,
       0,     0,     0,     0,   302,   710,     0,     0,     0,     0,
     504,   498,     0,     0,     0,     0,     1,   725,     0,     0,
       0,     0,   302,   735,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   342
};

static const yytype_int16 yycheck[] =
{
       0,     1,   403,   169,   144,     5,     6,   317,   144,   145,
       3,   150,     3,     4,     5,     6,     7,     8,     3,     4,
       5,     6,     7,     8,   144,   145,   165,   166,   167,   168,
     169,   144,   145,   144,   145,     0,   175,     3,   144,   145,
     145,     0,     1,   144,   145,     3,   185,     6,   145,   188,
     189,   145,   191,   192,   193,   144,   145,   144,   145,   144,
     145,   200,   144,   145,     3,     4,     5,     6,     7,     8,
     145,     3,     4,     5,     6,     7,     8,   145,     0,     1,
     144,   145,   144,     5,     6,   144,   145,   144,   145,   228,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,     3,   242,   144,   145,   245,   246,   145,   248,
       3,   250,   144,   145,   424,   144,   145,   144,   145,   145,
     259,     3,     4,     5,     6,     7,     8,   144,   145,   268,
       3,     4,     5,     6,     7,     8,   144,   145,   145,   278,
     144,   145,   281,   145,   283,   284,     3,     4,     5,     6,
       7,     8,   145,   144,   145,   144,   145,   144,   145,   144,
     145,   144,   145,   144,   145,   165,   166,   167,   144,   145,
     170,   337,   145,   173,   174,   175,   176,   145,   144,   145,
     180,   145,   182,   183,   184,   145,   144,   145,   145,   189,
     329,   501,   331,   145,   333,   145,   506,   144,   145,   338,
     144,   145,   144,   145,   605,   144,   145,   346,   144,   145,
     145,   170,   144,   145,   144,   145,   145,   217,   144,   145,
     220,   221,   222,   223,   224,   225,   226,   227,   367,   144,
     145,   144,   145,   144,   145,   144,   145,   144,   238,   145,
     379,   144,   145,   145,   244,   144,   145,   145,   170,   144,
     145,     3,     4,     5,     6,     7,     8,   144,   145,   144,
     145,   145,   144,   145,   145,     3,     4,     5,     6,     7,
       8,   144,   145,     3,     4,     5,     6,     7,     8,     3,
       4,     5,     6,     7,     8,   244,   145,   144,   145,   289,
     290,   145,   292,   293,   294,   295,     3,     4,     5,     6,
       7,     8,   144,   145,   144,   145,     3,     4,     5,     6,
       7,     8,   145,   623,   314,   144,   145,   145,   318,   319,
     144,   145,   244,   144,   145,   144,   145,   327,   328,   145,
     330,   290,   332,   145,   293,   145,   295,   144,   145,   339,
     340,   145,   342,   144,   145,   345,   145,   347,   144,   145,
     350,   144,   145,   353,   145,   355,   356,   357,   145,   318,
     319,   145,   362,   144,   145,   145,   366,   289,   290,   145,
     292,   293,   294,   295,   144,   145,   144,   145,   144,   145,
     302,   340,     3,     4,     5,     6,     7,     8,   144,   145,
     145,   350,   144,   145,   144,   145,   318,   319,   144,   145,
     144,   145,   145,   403,   145,   327,   144,   145,   144,   145,
     144,   145,   145,   335,   144,   145,   145,   339,   340,   145,
     144,   145,     3,     4,     5,     6,     7,     8,   350,   429,
       3,     4,     5,     6,     7,     8,   436,   144,   145,   144,
     145,   351,   352,   145,   403,   145,   585,   144,   145,     3,
       4,     5,     6,     7,     8,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,     3,     4,     5,
       6,     7,     8,     3,     4,     5,     6,     7,     8,   145,
     145,   403,     3,     4,     5,     6,     7,     8,   145,   145,
       3,     4,     5,     6,     7,     8,   145,   497,   145,   145,
     500,   145,   145,   145,   504,   145,   145,   507,   508,   145,
     145,   145,   145,   145,   436,   515,   145,   145,   145,   519,
     145,   145,   522,   144,   145,   145,   145,   145,   145,   529,
     145,   145,   145,   145,   145,   535,   145,   145,   497,   145,
     540,   145,   134,   145,   145,   504,   145,   142,   145,   549,
       3,     4,     5,     6,     7,     8,   556,   145,   145,   104,
     145,   145,   145,   144,   145,   669,   566,   472,   400,    -1,
      -1,   144,   145,    -1,    -1,   497,     3,     4,     5,     6,
       7,     8,   504,    -1,    -1,   507,   508,    -1,    -1,    -1,
     144,   145,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
      -1,    -1,   144,   145,    -1,   605,    -1,   529,   144,   145,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   540,   541,
      -1,    -1,    -1,   144,   145,    -1,    -1,    -1,    -1,    -1,
     630,   144,   145,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,   605,    -1,    -1,    -1,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,    -1,    -1,   669,
      -1,   171,    -1,    -1,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   605,    -1,    -1,   186,   187,    -1,   689,
     190,   144,   145,    -1,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   144,   218,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,   229,
     230,   231,   232,   233,   234,    -1,   236,   237,   238,   239,
     240,     3,     4,     5,     6,     7,     8,   669,    -1,   249,
      -1,   251,    -1,    -1,    -1,   255,   256,   257,   258,    -1,
      -1,   261,   262,    -1,    -1,    -1,    -1,   267,    -1,    -1,
     270,    -1,   272,   273,   274,   275,   276,   144,   145,    -1,
     280,    -1,   282,    -1,    -1,   285,   286,   287,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,   305,    -1,    -1,    -1,   309,
     310,    -1,    -1,    -1,   314,    -1,    -1,   317,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,   328,    -1,
     330,    -1,   332,    -1,   334,    -1,    -1,   337,     3,     4,
       5,     6,     7,     8,    -1,   345,    -1,    -1,   348,    -1,
      -1,   351,    -1,    -1,   354,   355,    -1,    -1,   358,    -1,
      -1,   361,   144,   145,    -1,   365,   366,    -1,    -1,    -1,
     370,    -1,   372,   373,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,   144,   145,    -1,   385,   386,   387,   388,    -1,
      -1,   391,    -1,    -1,   394,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,   422,    -1,   424,    -1,    -1,   427,    -1,    -1,
     430,   144,   145,    -1,   434,    -1,    -1,   437,   438,   144,
     145,   441,    -1,    -1,   444,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,   144,
     145,    -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,    -1,
     470,    -1,    -1,    -1,    -1,   475,    -1,    -1,   478,   144,
     480,   481,    -1,    -1,    -1,    -1,    -1,    -1,   488,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,   152,
     153,   501,    -1,    -1,    -1,    -1,   506,     3,     4,     5,
       6,     7,     8,    -1,    -1,   515,    -1,    -1,    -1,   519,
      -1,    -1,   522,    -1,    -1,   178,   179,   527,   181,    -1,
     530,    -1,    -1,   186,    -1,   535,   144,   145,    -1,    -1,
      -1,   194,    -1,   196,   197,   144,   145,    -1,   201,   202,
     203,    -1,   205,   206,   207,   208,   209,   210,    -1,   212,
      -1,    -1,    -1,    -1,    -1,   218,   566,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,   576,    -1,   231,    -1,
     233,   234,    -1,   236,    -1,    -1,   144,   145,     3,     4,
       5,     6,     7,     8,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,   256,    -1,   258,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,
     273,    -1,   275,   623,    -1,    -1,    -1,    -1,    -1,   282,
     144,   145,   285,   286,   287,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   668,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,    -1,   713,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,   385,    -1,   387,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    11,   427,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,     3,     4,     5,
       6,     7,     8,    -1,   132,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   144,   145,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,    -1,    -1,   144,   145,
       3,     4,     5,     6,     7,     8,   144,   145,     3,     4,
       5,     6,     7,     8,    -1,    -1,   134,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,     3,     4,     5,     6,     7,     8,    -1,   144,   145,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     3,     4,     5,     6,
       7,     8,   144,   145,     3,     4,     5,     6,     7,     8,
      -1,   144,   145,    -1,    -1,    -1,    -1,   144,   145,     3,
       4,     5,     6,     7,     8,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,     3,     4,     5,
       6,     7,     8,     3,     4,     5,     6,     7,     8,     3,
       4,     5,     6,     7,     8,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,    -1,    -1,   144,   145,
      -1,    -1,    -1,    -1,   144,   145,    -1,    -1,    -1,    -1,
     144,   145,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
      -1,    -1,   144,   145,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   144,   154,   155,   160,   161,   162,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     3,
       4,    11,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   146,   147,   148,   149,   150,   151,   152,   160,   161,
     162,     0,   161,   162,   161,   162,     3,     4,     5,     6,
       7,     8,   144,   145,   156,   158,   160,   165,   145,   158,
     156,   157,   157,   157,   156,   168,   169,   156,   156,   156,
     145,   145,   145,   156,   156,   156,   145,   144,   158,   162,
     158,   162,   158,   162,   158,   144,   145,   158,   299,   161,
     156,   145,   144,   162,   162,   158,   162,   156,   162,   156,
     157,   156,   157,   156,   162,   156,   157,   156,   162,   162,
     162,   158,   157,   156,   145,   158,   158,   162,   156,   145,
     158,   145,   158,   158,   157,   156,   157,   157,   156,   156,
     158,   157,   157,   157,   156,   157,   157,   157,   156,   157,
     157,   156,   157,   156,   156,   157,   156,   156,   156,   145,
     156,   162,   157,     3,   145,   162,   162,   145,   162,   162,
     145,   162,   145,   162,   162,   145,   162,   158,   156,   156,
     157,   156,   157,   157,     3,   166,   157,   159,   156,   156,
     162,   156,   156,   145,   158,   145,   161,   158,   158,   145,
     145,   158,   156,   145,   158,   156,   145,   145,   145,   156,
     157,   156,   157,   145,   158,   145,   156,   156,   145,   145,
     145,   145,   156,   158,   145,   157,   145,   156,   157,   156,
     156,   157,   156,   145,   145,   158,   145,   156,   158,   157,
     158,   158,   157,   157,   157,   145,   145,   145,    15,   160,
     145,   156,   145,   156,   145,   145,   145,   144,   145,   156,
     162,   163,   145,   145,   144,   163,   164,   161,   161,   145,
     145,   145,   162,   145,   162,   158,   162,   145,   162,   158,
     145,   162,   158,   145,   145,   299,   145,   158,   145,   161,
      15,   145,   145,   145,   162,   158,   145,   162,   156,   145,
     161,   144,   145,   301,   144,   145,   301,   145,   162,   156,
     145,   162,   145,   162,   162,   145,   156,   145,   145,   145,
     145,   162,   145,   145,   145,   162,   158,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   158,   145,   145,   145,
     145,   145,   157,   145,   156,   157,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   144,   145,   309,
     145,   145,     3,   145,   155,   167,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     156,   145,   163,     3,   145,   145,   157,   145,   145,   162,
     156,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   144,   145,   271,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   156,   161,
     145,   162,   163,   145,   163,   145,   145,   145,   145,   162,
     145,   145,   162,   145,   145,   162,   145,   145,   145,   156,
     145,   145,   162,   145,   145,   145,   145,   145,   145,   145,
     162,   145,   145,   145,   145,   162,   145,   145,   145,   162,
     145,   145,   145,   158,   145,   145,     3,   145,   155,   145,
     163,   145,   145,   162,   145,   145,   165,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   153,   154,   155,   156,   156,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   161,   161,   161,   162,   162,
     162,   163,   163,   163,   164,   164,   165,   165,   165,   165,
     165,   165,   166,   166,   167,   167,   168,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   182,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   193,   193,   193,   194,   194,   194,   194,   195,
     195,   195,   195,   196,   197,   197,   197,   197,   197,   198,
     199,   200,   201,   202,   203,   203,   203,   203,   204,   204,
     204,   205,   206,   207,   207,   207,   207,   208,   208,   208,
     208,   209,   209,   209,   209,   210,   210,   210,   210,   211,
     212,   213,   214,   214,   215,   216,   216,   217,   217,   217,
     217,   218,   219,   219,   220,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     234,   235,   236,   236,   237,   238,   238,   239,   240,   240,
     241,   242,   243,   244,   244,   244,   245,   246,   247,   247,
     247,   247,   248,   248,   249,   249,   250,   251,   251,   252,
     253,   253,   254,   254,   255,   256,   256,   257,   258,   259,
     259,   260,   261,   262,   263,   263,   264,   265,   266,   267,
     268,   268,   268,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   278,   279,   280,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   305,   306,   306,   307,   308,   308,
     309,   310,   311,   311
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     1,     3,     2,     2,     2,     1,     3,     2,     1,
       3,     3,     4,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     5,     5,     5,     3,     3,     3,     4,     4,     4,
       3,     5,     5,     6,     4,     5,     5,     6,     4,     5,
       5,     6,     4,     4,     5,     5,     4,     4,     3,     4,
       3,     5,     4,     4,     5,     5,     6,     4,     4,     5,
       5,     4,     5,     5,     4,     5,     4,     5,     5,     6,
       4,     5,     4,     5,     4,     5,     5,     6,     4,     4,
       4,     4,     5,     4,     4,     4,     3,     5,     5,     6,
       4,     4,     4,     3,     4,     3,     4,     4,     4,     4,
       4,     4,     5,     4,     4,     4,     4,     4,     5,     4,
       5,     6,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     4,     5,     4,     4,     6,     5,
       5,     4,     4,     3,     3,     4,     4,     3,     4,     4,
       3,     4,     3,     4,     4,     3,     4,     4,     4,     4,
       3,     4,     4,     4,     4,     5,     4,     4,     4,     4,
       4,     5,     5,     6,     4,     4,     3,     4,     3,     4,
       4,     4,     3,     4,     3,     4,     4,     3,     4,     3,
       3,     3,     4,     4,     4,     4,     4,     3,     3,     4,
       4,     3,     3,     3,     3,     4,     4,     3,     4,     3,
       4,     4,     4,     4,     4,     4,     5,     3,     4,     3,
       3,     4,     5,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (scanner, YY_("syntax error: cannot back up")); \
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
                  Type, Value, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, scanner); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* SYM  */
#line 73 "../src/parser.y"
            { free(((*yyvaluep).s)); }
#line 2094 "parser.c"
        break;

    case 4: /* STR  */
#line 73 "../src/parser.y"
            { free(((*yyvaluep).s)); }
#line 2100 "parser.c"
        break;

    case 154: /* start  */
#line 71 "../src/parser.y"
            { run(((*yyvaluep).e));  }
#line 2106 "parser.c"
        break;

    case 155: /* s  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2112 "parser.c"
        break;

    case 156: /* p  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2118 "parser.c"
        break;

    case 157: /* pp  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2124 "parser.c"
        break;

    case 158: /* ps  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2130 "parser.c"
        break;

    case 159: /* pps  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2136 "parser.c"
        break;

    case 160: /* vp  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2142 "parser.c"
        break;

    case 161: /* vps  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2148 "parser.c"
        break;

    case 162: /* opts  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2154 "parser.c"
        break;

    case 163: /* xpb  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2160 "parser.c"
        break;

    case 164: /* xpbs  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2166 "parser.c"
        break;

    case 165: /* np  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2172 "parser.c"
        break;

    case 166: /* sps  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2178 "parser.c"
        break;

    case 167: /* par  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2184 "parser.c"
        break;

    case 168: /* cv  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2190 "parser.c"
        break;

    case 169: /* cvv  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2196 "parser.c"
        break;

    case 170: /* opt  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2202 "parser.c"
        break;

    case 171: /* ivp  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2208 "parser.c"
        break;

    case 172: /* add  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2214 "parser.c"
        break;

    case 173: /* div  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2220 "parser.c"
        break;

    case 174: /* mul  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2226 "parser.c"
        break;

    case 175: /* sub  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2232 "parser.c"
        break;

    case 176: /* eq  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2238 "parser.c"
        break;

    case 177: /* gt  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2244 "parser.c"
        break;

    case 178: /* gte  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2250 "parser.c"
        break;

    case 179: /* lt  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2256 "parser.c"
        break;

    case 180: /* lte  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2262 "parser.c"
        break;

    case 181: /* neq  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2268 "parser.c"
        break;

    case 182: /* if  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2274 "parser.c"
        break;

    case 183: /* select  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2280 "parser.c"
        break;

    case 184: /* until  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2286 "parser.c"
        break;

    case 185: /* while  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2292 "parser.c"
        break;

    case 186: /* trace  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2298 "parser.c"
        break;

    case 187: /* retrace  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2304 "parser.c"
        break;

    case 188: /* astraw  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2310 "parser.c"
        break;

    case 189: /* asbraw  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2316 "parser.c"
        break;

    case 190: /* asbeval  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2322 "parser.c"
        break;

    case 191: /* eval  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2328 "parser.c"
        break;

    case 192: /* options  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2334 "parser.c"
        break;

    case 193: /* execute  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2340 "parser.c"
        break;

    case 194: /* rexx  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2346 "parser.c"
        break;

    case 195: /* run  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2352 "parser.c"
        break;

    case 196: /* abort  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2358 "parser.c"
        break;

    case 197: /* exit  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2364 "parser.c"
        break;

    case 198: /* onerror  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2370 "parser.c"
        break;

    case 199: /* reboot  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2376 "parser.c"
        break;

    case 200: /* trap  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2382 "parser.c"
        break;

    case 201: /* copyfiles  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2388 "parser.c"
        break;

    case 202: /* copylib  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2394 "parser.c"
        break;

    case 203: /* delete  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2400 "parser.c"
        break;

    case 204: /* exists  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2406 "parser.c"
        break;

    case 205: /* fileonly  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2412 "parser.c"
        break;

    case 206: /* foreach  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2418 "parser.c"
        break;

    case 207: /* makeassign  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2424 "parser.c"
        break;

    case 208: /* makedir  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2430 "parser.c"
        break;

    case 209: /* protect  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2436 "parser.c"
        break;

    case 210: /* startup  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2442 "parser.c"
        break;

    case 211: /* textfile  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2448 "parser.c"
        break;

    case 212: /* tooltype  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2454 "parser.c"
        break;

    case 213: /* transcript  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2460 "parser.c"
        break;

    case 214: /* rename  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2466 "parser.c"
        break;

    case 215: /* complete  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2472 "parser.c"
        break;

    case 216: /* debug  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2478 "parser.c"
        break;

    case 217: /* message  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2484 "parser.c"
        break;

    case 218: /* user  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2490 "parser.c"
        break;

    case 219: /* welcome  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2496 "parser.c"
        break;

    case 220: /* working  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2502 "parser.c"
        break;

    case 221: /* and  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2508 "parser.c"
        break;

    case 222: /* bitand  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2514 "parser.c"
        break;

    case 223: /* bitnot  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2520 "parser.c"
        break;

    case 224: /* bitor  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2526 "parser.c"
        break;

    case 225: /* bitxor  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2532 "parser.c"
        break;

    case 226: /* not  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2538 "parser.c"
        break;

    case 227: /* in  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2544 "parser.c"
        break;

    case 228: /* or  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2550 "parser.c"
        break;

    case 229: /* shiftleft  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2556 "parser.c"
        break;

    case 230: /* shiftright  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2562 "parser.c"
        break;

    case 231: /* xor  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2568 "parser.c"
        break;

    case 232: /* closemedia  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2574 "parser.c"
        break;

    case 233: /* effect  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2580 "parser.c"
        break;

    case 234: /* setmedia  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2586 "parser.c"
        break;

    case 235: /* showmedia  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2592 "parser.c"
        break;

    case 236: /* database  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2598 "parser.c"
        break;

    case 237: /* earlier  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2604 "parser.c"
        break;

    case 238: /* getassign  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2610 "parser.c"
        break;

    case 239: /* getdevice  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2616 "parser.c"
        break;

    case 240: /* getdiskspace  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2622 "parser.c"
        break;

    case 241: /* getenv  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2628 "parser.c"
        break;

    case 242: /* getsize  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2634 "parser.c"
        break;

    case 243: /* getsum  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2640 "parser.c"
        break;

    case 244: /* getversion  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2646 "parser.c"
        break;

    case 245: /* iconinfo  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2652 "parser.c"
        break;

    case 246: /* querydisplay  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2658 "parser.c"
        break;

    case 247: /* dcl  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2664 "parser.c"
        break;

    case 248: /* cus  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2670 "parser.c"
        break;

    case 249: /* askbool  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2676 "parser.c"
        break;

    case 250: /* askchoice  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2682 "parser.c"
        break;

    case 251: /* askdir  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2688 "parser.c"
        break;

    case 252: /* askdisk  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2694 "parser.c"
        break;

    case 253: /* askfile  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2700 "parser.c"
        break;

    case 254: /* asknumber  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2706 "parser.c"
        break;

    case 255: /* askoptions  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2712 "parser.c"
        break;

    case 256: /* askstring  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2718 "parser.c"
        break;

    case 257: /* cat  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2724 "parser.c"
        break;

    case 258: /* expandpath  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2730 "parser.c"
        break;

    case 259: /* fmt  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2736 "parser.c"
        break;

    case 260: /* pathonly  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2742 "parser.c"
        break;

    case 261: /* patmatch  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2748 "parser.c"
        break;

    case 262: /* strlen  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2754 "parser.c"
        break;

    case 263: /* substr  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2760 "parser.c"
        break;

    case 264: /* tackon  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2766 "parser.c"
        break;

    case 265: /* set  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2772 "parser.c"
        break;

    case 266: /* symbolset  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2778 "parser.c"
        break;

    case 267: /* symbolval  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2784 "parser.c"
        break;

    case 268: /* openwbobject  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2790 "parser.c"
        break;

    case 269: /* showwbobject  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2796 "parser.c"
        break;

    case 270: /* closewbobject  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2802 "parser.c"
        break;

    case 271: /* all  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2808 "parser.c"
        break;

    case 272: /* append  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2814 "parser.c"
        break;

    case 273: /* assigns  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2820 "parser.c"
        break;

    case 274: /* back  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2826 "parser.c"
        break;

    case 275: /* choices  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2832 "parser.c"
        break;

    case 276: /* command  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2838 "parser.c"
        break;

    case 277: /* compression  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2844 "parser.c"
        break;

    case 278: /* confirm  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2850 "parser.c"
        break;

    case 279: /* default  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2856 "parser.c"
        break;

    case 280: /* delopts  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2862 "parser.c"
        break;

    case 281: /* dest  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2868 "parser.c"
        break;

    case 282: /* disk  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2874 "parser.c"
        break;

    case 283: /* files  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2880 "parser.c"
        break;

    case 284: /* fonts  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2886 "parser.c"
        break;

    case 285: /* getdefaulttool  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2892 "parser.c"
        break;

    case 286: /* getposition  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2898 "parser.c"
        break;

    case 287: /* getstack  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2904 "parser.c"
        break;

    case 288: /* gettooltype  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2910 "parser.c"
        break;

    case 289: /* help  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2916 "parser.c"
        break;

    case 290: /* infos  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2922 "parser.c"
        break;

    case 291: /* include  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2928 "parser.c"
        break;

    case 292: /* newname  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2934 "parser.c"
        break;

    case 293: /* newpath  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2940 "parser.c"
        break;

    case 294: /* nogauge  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2946 "parser.c"
        break;

    case 295: /* noposition  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2952 "parser.c"
        break;

    case 296: /* noreq  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2958 "parser.c"
        break;

    case 297: /* pattern  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2964 "parser.c"
        break;

    case 298: /* prompt  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2970 "parser.c"
        break;

    case 299: /* quiet  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2976 "parser.c"
        break;

    case 300: /* range  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2982 "parser.c"
        break;

    case 301: /* safe  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2988 "parser.c"
        break;

    case 302: /* setdefaulttool  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 2994 "parser.c"
        break;

    case 303: /* setposition  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3000 "parser.c"
        break;

    case 304: /* setstack  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3006 "parser.c"
        break;

    case 305: /* settooltype  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3012 "parser.c"
        break;

    case 306: /* source  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3018 "parser.c"
        break;

    case 307: /* swapcolors  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3024 "parser.c"
        break;

    case 308: /* optional  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3030 "parser.c"
        break;

    case 309: /* resident  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3036 "parser.c"
        break;

    case 310: /* override  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3042 "parser.c"
        break;

    case 311: /* dynopt  */
#line 75 "../src/parser.y"
            { kill(((*yyvaluep).e)); }
#line 3048 "parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex (&yylval, scanner);
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 87 "../src/parser.y"
                                                 { (yyval.e) = init((yyvsp[0].e)); }
#line 3322 "parser.c"
    break;

  case 6:
#line 94 "../src/parser.y"
                                                 { (yyval.e) = push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3328 "parser.c"
    break;

  case 7:
#line 95 "../src/parser.y"
                                                 { (yyval.e) = push((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3334 "parser.c"
    break;

  case 8:
#line 96 "../src/parser.y"
                                                 { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3340 "parser.c"
    break;

  case 9:
#line 97 "../src/parser.y"
                                                 { (yyval.e) = merge((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3346 "parser.c"
    break;

  case 12:
#line 100 "../src/parser.y"
                                                 { (yyval.e) = (yyvsp[-1].e); }
#line 3352 "parser.c"
    break;

  case 13:
#line 101 "../src/parser.y"
                                                 { (yyval.e) = merge((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3358 "parser.c"
    break;

  case 14:
#line 102 "../src/parser.y"
                                                 { (yyval.e) = merge((yyvsp[-1].e), (yyvsp[0].e));  }
#line 3364 "parser.c"
    break;

  case 15:
#line 103 "../src/parser.y"
                                                 { (yyval.e) = merge((yyvsp[-1].e), (yyvsp[0].e));  }
#line 3370 "parser.c"
    break;

  case 16:
#line 104 "../src/parser.y"
                                                 { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3376 "parser.c"
    break;

  case 17:
#line 105 "../src/parser.y"
                                                 { (yyval.e) = (yyvsp[-1].e); }
#line 3382 "parser.c"
    break;

  case 18:
#line 106 "../src/parser.y"
                                                 { (yyval.e) = merge((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3388 "parser.c"
    break;

  case 19:
#line 107 "../src/parser.y"
                                                 { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3394 "parser.c"
    break;

  case 20:
#line 108 "../src/parser.y"
                                                 { (yyval.e) = (yyvsp[-1].e); }
#line 3400 "parser.c"
    break;

  case 21:
#line 109 "../src/parser.y"
                                                 { (yyval.e) = (yyvsp[-1].e); }
#line 3406 "parser.c"
    break;

  case 22:
#line 110 "../src/parser.y"
                                                 { (yyval.e) = push((yyvsp[-2].e), (yyvsp[-1].e)); }
#line 3412 "parser.c"
    break;

  case 23:
#line 111 "../src/parser.y"
                                                 { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3418 "parser.c"
    break;

  case 24:
#line 112 "../src/parser.y"
                                                 { (yyval.e) = push(new_contxt(), (yyvsp[0].e)); }
#line 3424 "parser.c"
    break;

  case 25:
#line 113 "../src/parser.y"
                                                 { (yyval.e) = push((yyvsp[-1].e), (yyvsp[0].e)); }
#line 3430 "parser.c"
    break;

  case 26:
#line 114 "../src/parser.y"
                                                 { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3436 "parser.c"
    break;

  case 27:
#line 115 "../src/parser.y"
                                                 { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3442 "parser.c"
    break;

  case 28:
#line 116 "../src/parser.y"
                                                 { (yyval.e) = new_number((yyvsp[0].n)); }
#line 3448 "parser.c"
    break;

  case 29:
#line 117 "../src/parser.y"
                                                 { (yyval.e) = new_string((yyvsp[0].s)); }
#line 3454 "parser.c"
    break;

  case 30:
#line 118 "../src/parser.y"
                                                 { (yyval.e) = new_symref((yyvsp[0].s), LINE); }
#line 3460 "parser.c"
    break;

  case 31:
#line 119 "../src/parser.y"
                                                 { (yyval.e) = NULL; YYFPRINTF(stderr, "Out of memory in line %d\n", LINE); YYABORT; }
#line 3466 "parser.c"
    break;

  case 32:
#line 120 "../src/parser.y"
                                                 { (yyval.e) = push(push((yyvsp[-2].e), new_symbol((yyvsp[-1].s))), (yyvsp[0].e)) ; }
#line 3472 "parser.c"
    break;

  case 33:
#line 121 "../src/parser.y"
                                                 { (yyval.e) = push(push(new_contxt(), new_symbol((yyvsp[-1].s))), (yyvsp[0].e)); }
#line 3478 "parser.c"
    break;

  case 34:
#line 122 "../src/parser.y"
                                                 { (yyval.e) = push((yyvsp[-1].e), new_symbol((yyvsp[0].s))); }
#line 3484 "parser.c"
    break;

  case 35:
#line 123 "../src/parser.y"
                                                 { (yyval.e) = push(new_contxt(), new_symbol((yyvsp[0].s))); }
#line 3490 "parser.c"
    break;

  case 36:
#line 124 "../src/parser.y"
                                                 { (yyval.e) = push(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3496 "parser.c"
    break;

  case 37:
#line 125 "../src/parser.y"
                                                 { (yyval.e) = push(push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), (yyvsp[0].e)); }
#line 3502 "parser.c"
    break;

  case 178:
#line 275 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("+"), LINE, n_add, (yyvsp[-1].e), NUMBER); }
#line 3508 "parser.c"
    break;

  case 179:
#line 276 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("/"), LINE, n_div, (yyvsp[-1].e), NUMBER); }
#line 3514 "parser.c"
    break;

  case 180:
#line 277 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("*"), LINE, n_mul, (yyvsp[-1].e), NUMBER); }
#line 3520 "parser.c"
    break;

  case 181:
#line 278 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("-"), LINE, n_sub, (yyvsp[-1].e), NUMBER); }
#line 3526 "parser.c"
    break;

  case 182:
#line 282 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("="), LINE, n_eq, (yyvsp[-1].e), NUMBER); }
#line 3532 "parser.c"
    break;

  case 183:
#line 283 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup(">"), LINE, n_gt, (yyvsp[-1].e), NUMBER); }
#line 3538 "parser.c"
    break;

  case 184:
#line 284 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup(">="), LINE, n_gte, (yyvsp[-1].e), NUMBER); }
#line 3544 "parser.c"
    break;

  case 185:
#line 285 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("<"), LINE, n_lt, (yyvsp[-1].e), NUMBER); }
#line 3550 "parser.c"
    break;

  case 186:
#line 286 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("<="), LINE, n_lte, (yyvsp[-1].e), NUMBER); }
#line 3556 "parser.c"
    break;

  case 187:
#line 287 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("<>"), LINE, n_neq, (yyvsp[-1].e), NUMBER); }
#line 3562 "parser.c"
    break;

  case 188:
#line 291 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("if"), LINE, n_if, (yyvsp[-1].e), NUMBER); }
#line 3568 "parser.c"
    break;

  case 189:
#line 292 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("if"), LINE, n_if, (yyvsp[-1].e), NUMBER); }
#line 3574 "parser.c"
    break;

  case 190:
#line 293 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("if"), LINE, n_if, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3580 "parser.c"
    break;

  case 191:
#line 294 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("select"), LINE, n_select, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3586 "parser.c"
    break;

  case 192:
#line 295 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("until"), LINE, n_until, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3592 "parser.c"
    break;

  case 193:
#line 296 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("while"), LINE, n_while, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3598 "parser.c"
    break;

  case 194:
#line 297 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("trace"), LINE, n_trace, NULL, NUMBER); }
#line 3604 "parser.c"
    break;

  case 195:
#line 298 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("retrace"), LINE, n_retrace, NULL, NUMBER); }
#line 3610 "parser.c"
    break;

  case 196:
#line 302 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("___astraw"), LINE, n_astraw, NULL, NUMBER); }
#line 3616 "parser.c"
    break;

  case 197:
#line 303 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("___asbraw"), LINE, n_asbraw, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3622 "parser.c"
    break;

  case 198:
#line 304 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("___asbeval"), LINE, n_asbeval, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3628 "parser.c"
    break;

  case 199:
#line 305 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("___eval"), LINE, n_eval, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3634 "parser.c"
    break;

  case 200:
#line 306 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("___options"), LINE, n_options, NULL, NUMBER); }
#line 3640 "parser.c"
    break;

  case 201:
#line 310 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("execute"), LINE, n_execute, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3646 "parser.c"
    break;

  case 202:
#line 311 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("execute"), LINE, n_execute, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3652 "parser.c"
    break;

  case 203:
#line 312 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("execute"), LINE, n_execute, push((yyvsp[-2].e), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3658 "parser.c"
    break;

  case 204:
#line 313 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("execute"), LINE, n_execute, (yyvsp[-1].e), NUMBER); }
#line 3664 "parser.c"
    break;

  case 205:
#line 314 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("rexx"), LINE, n_rexx, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3670 "parser.c"
    break;

  case 206:
#line 315 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("rexx"), LINE, n_rexx, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3676 "parser.c"
    break;

  case 207:
#line 316 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("rexx"), LINE, n_rexx, push((yyvsp[-2].e), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3682 "parser.c"
    break;

  case 208:
#line 317 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("rexx"), LINE, n_rexx, (yyvsp[-1].e), NUMBER); }
#line 3688 "parser.c"
    break;

  case 209:
#line 318 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("run"), LINE, n_run, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3694 "parser.c"
    break;

  case 210:
#line 319 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("run"), LINE, n_run, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3700 "parser.c"
    break;

  case 211:
#line 320 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("run"), LINE, n_run, push((yyvsp[-2].e), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3706 "parser.c"
    break;

  case 212:
#line 321 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("run"), LINE, n_run, (yyvsp[-1].e), NUMBER); }
#line 3712 "parser.c"
    break;

  case 213:
#line 325 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("abort"), LINE, n_abort, (yyvsp[-1].e), NUMBER); }
#line 3718 "parser.c"
    break;

  case 214:
#line 326 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exit"), LINE, n_exit, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3724 "parser.c"
    break;

  case 215:
#line 327 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exit"), LINE, n_exit, push((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3730 "parser.c"
    break;

  case 216:
#line 328 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exit"), LINE, n_exit, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3736 "parser.c"
    break;

  case 217:
#line 329 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exit"), LINE, n_exit, (yyvsp[-1].e), NUMBER); }
#line 3742 "parser.c"
    break;

  case 218:
#line 330 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exit"), LINE, n_exit, NULL, NUMBER); }
#line 3748 "parser.c"
    break;

  case 219:
#line 331 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("onerror"), LINE, n_procedure, push(new_contxt(),
                                                        new_custom(strdup("@onerror"), LINE, NULL, (yyvsp[-1].e))), DANGLE); }
#line 3755 "parser.c"
    break;

  case 220:
#line 333 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("reboot"), LINE, n_reboot, NULL, NUMBER); }
#line 3761 "parser.c"
    break;

  case 221:
#line 334 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("trap"), LINE, n_trap, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3767 "parser.c"
    break;

  case 222:
#line 338 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("copyfiles"), LINE, n_copyfiles, (yyvsp[-1].e), NUMBER); }
#line 3773 "parser.c"
    break;

  case 223:
#line 339 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("copylib"), LINE, n_copylib, (yyvsp[-1].e), NUMBER); }
#line 3779 "parser.c"
    break;

  case 224:
#line 340 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("delete"), LINE, n_delete, merge((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3785 "parser.c"
    break;

  case 225:
#line 341 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("delete"), LINE, n_delete, merge((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3791 "parser.c"
    break;

  case 226:
#line 342 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("delete"), LINE, n_delete, merge((yyvsp[-2].e), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3797 "parser.c"
    break;

  case 227:
#line 343 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("delete"), LINE, n_delete, (yyvsp[-1].e), NUMBER); }
#line 3803 "parser.c"
    break;

  case 228:
#line 344 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exists"), LINE, n_exists, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3809 "parser.c"
    break;

  case 229:
#line 345 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exists"), LINE, n_exists, merge(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3815 "parser.c"
    break;

  case 230:
#line 346 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("exists"), LINE, n_exists, merge(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3821 "parser.c"
    break;

  case 231:
#line 347 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("fileonly"), LINE, n_fileonly, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 3827 "parser.c"
    break;

  case 232:
#line 348 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("foreach"), LINE, n_foreach, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3833 "parser.c"
    break;

  case 233:
#line 349 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makeassign"), LINE, n_makeassign, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3839 "parser.c"
    break;

  case 234:
#line 350 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makeassign"), LINE, n_makeassign, (yyvsp[-1].e), NUMBER); }
#line 3845 "parser.c"
    break;

  case 235:
#line 351 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makeassign"), LINE, n_makeassign, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3851 "parser.c"
    break;

  case 236:
#line 352 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makeassign"), LINE, n_makeassign, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3857 "parser.c"
    break;

  case 237:
#line 353 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makedir"), LINE, n_makedir, merge(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3863 "parser.c"
    break;

  case 238:
#line 354 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makedir"), LINE, n_makedir, merge(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3869 "parser.c"
    break;

  case 239:
#line 355 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makedir"), LINE, n_makedir, merge(push(new_contxt(), (yyvsp[-2].e)), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3875 "parser.c"
    break;

  case 240:
#line 356 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("makedir"), LINE, n_makedir, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3881 "parser.c"
    break;

  case 241:
#line 357 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("protect"), LINE, n_protect, merge((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3887 "parser.c"
    break;

  case 242:
#line 358 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("protect"), LINE, n_protect, (yyvsp[-1].e), NUMBER); }
#line 3893 "parser.c"
    break;

  case 243:
#line 359 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("protect"), LINE, n_protect, merge(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3899 "parser.c"
    break;

  case 244:
#line 360 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("protect"), LINE, n_protect, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3905 "parser.c"
    break;

  case 245:
#line 361 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("startup"), LINE, n_startup, merge(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 3911 "parser.c"
    break;

  case 246:
#line 362 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("startup"), LINE, n_startup, merge(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3917 "parser.c"
    break;

  case 247:
#line 363 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("startup"), LINE, n_startup, merge(push(new_contxt(), (yyvsp[-2].e)), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 3923 "parser.c"
    break;

  case 248:
#line 364 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("startup"), LINE, n_startup, merge(push(new_contxt(), new_symref(strdup("@app-name"), LINE)), (yyvsp[-1].e)), NUMBER); }
#line 3929 "parser.c"
    break;

  case 249:
#line 365 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("textfile"), LINE, n_textfile, (yyvsp[-1].e), NUMBER); }
#line 3935 "parser.c"
    break;

  case 250:
#line 366 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("tooltype"), LINE, n_tooltype, (yyvsp[-1].e), NUMBER); }
#line 3941 "parser.c"
    break;

  case 251:
#line 367 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("transcript"), LINE, n_transcript, (yyvsp[-1].e), NUMBER); }
#line 3947 "parser.c"
    break;

  case 252:
#line 368 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("rename"), LINE, n_rename, merge((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3953 "parser.c"
    break;

  case 253:
#line 369 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("rename"), LINE, n_rename, (yyvsp[-1].e), NUMBER); }
#line 3959 "parser.c"
    break;

  case 254:
#line 373 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("complete"), LINE, n_complete, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 3965 "parser.c"
    break;

  case 255:
#line 374 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("debug"), LINE, n_debug, (yyvsp[-1].e), NUMBER); }
#line 3971 "parser.c"
    break;

  case 256:
#line 375 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("debug"), LINE, n_debug, NULL, NUMBER); }
#line 3977 "parser.c"
    break;

  case 257:
#line 376 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("message"), LINE, n_message, merge((yyvsp[-1].e), (yyvsp[-2].e)), NUMBER); }
#line 3983 "parser.c"
    break;

  case 258:
#line 377 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("message"), LINE, n_message, merge((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 3989 "parser.c"
    break;

  case 259:
#line 378 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("message"), LINE, n_message, push(merge((yyvsp[-3].e), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 3995 "parser.c"
    break;

  case 260:
#line 379 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("message"), LINE, n_message, (yyvsp[-1].e), NUMBER); }
#line 4001 "parser.c"
    break;

  case 261:
#line 380 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("user"), LINE, n_user, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4007 "parser.c"
    break;

  case 262:
#line 381 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("welcome"), LINE, n_welcome, (yyvsp[-1].e), NUMBER); }
#line 4013 "parser.c"
    break;

  case 263:
#line 382 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("welcome"), LINE, n_welcome, NULL, NUMBER); }
#line 4019 "parser.c"
    break;

  case 264:
#line 383 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("working"), LINE, n_working, (yyvsp[-1].e), NUMBER); }
#line 4025 "parser.c"
    break;

  case 265:
#line 384 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("working"), LINE, n_working, NULL, NUMBER); }
#line 4031 "parser.c"
    break;

  case 266:
#line 388 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("AND"), LINE, n_and, (yyvsp[-1].e), NUMBER); }
#line 4037 "parser.c"
    break;

  case 267:
#line 389 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("BITAND"), LINE, n_bitand, (yyvsp[-1].e), NUMBER); }
#line 4043 "parser.c"
    break;

  case 268:
#line 390 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("BITNOT"), LINE, n_bitnot, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4049 "parser.c"
    break;

  case 269:
#line 391 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("BITOR"), LINE, n_bitor, (yyvsp[-1].e), NUMBER); }
#line 4055 "parser.c"
    break;

  case 270:
#line 392 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("BITXOR"), LINE, n_bitxor, (yyvsp[-1].e), NUMBER); }
#line 4061 "parser.c"
    break;

  case 271:
#line 393 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("NOT"), LINE, n_not, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4067 "parser.c"
    break;

  case 272:
#line 394 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("IN"), LINE, n_in, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 4073 "parser.c"
    break;

  case 273:
#line 395 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("OR"), LINE, n_or, (yyvsp[-1].e), NUMBER); }
#line 4079 "parser.c"
    break;

  case 274:
#line 396 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("shiftleft"), LINE, n_shiftleft, (yyvsp[-1].e), NUMBER); }
#line 4085 "parser.c"
    break;

  case 275:
#line 397 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("shiftright"), LINE, n_shiftright, (yyvsp[-1].e), NUMBER); }
#line 4091 "parser.c"
    break;

  case 276:
#line 398 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("XOR"), LINE, n_xor, (yyvsp[-1].e), NUMBER); }
#line 4097 "parser.c"
    break;

  case 277:
#line 402 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("closemedia"), LINE, n_closemedia, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4103 "parser.c"
    break;

  case 278:
#line 403 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("effect"), LINE, n_effect, merge((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 4109 "parser.c"
    break;

  case 279:
#line 404 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("setmedia"), LINE, n_setmedia, (yyvsp[-1].e), NUMBER); }
#line 4115 "parser.c"
    break;

  case 280:
#line 405 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("setmedia"), LINE, n_setmedia, push((yyvsp[-2].e), (yyvsp[-1].e)), NUMBER); }
#line 4121 "parser.c"
    break;

  case 281:
#line 406 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("showmedia"), LINE, n_showmedia, merge(merge((yyvsp[-3].e), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 4127 "parser.c"
    break;

  case 282:
#line 410 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("database"), LINE, n_database, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4133 "parser.c"
    break;

  case 283:
#line 411 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("database"), LINE, n_database, (yyvsp[-1].e), STRING); }
#line 4139 "parser.c"
    break;

  case 284:
#line 412 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("earlier"), LINE, n_earlier, (yyvsp[-1].e), NUMBER); }
#line 4145 "parser.c"
    break;

  case 285:
#line 413 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getassign"), LINE, n_getassign, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4151 "parser.c"
    break;

  case 286:
#line 414 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getassign"), LINE, n_getassign, (yyvsp[-1].e), STRING); }
#line 4157 "parser.c"
    break;

  case 287:
#line 415 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getdevice"), LINE, n_getdevice, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4163 "parser.c"
    break;

  case 288:
#line 416 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getdiskspace"), LINE, n_getdiskspace, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4169 "parser.c"
    break;

  case 289:
#line 417 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getdiskspace"), LINE, n_getdiskspace, (yyvsp[-1].e), NUMBER); }
#line 4175 "parser.c"
    break;

  case 290:
#line 418 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getenv"), LINE, n_getenv, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4181 "parser.c"
    break;

  case 291:
#line 419 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getsize"), LINE, n_getsize, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4187 "parser.c"
    break;

  case 292:
#line 420 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getsum"), LINE, n_getsum, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4193 "parser.c"
    break;

  case 293:
#line 421 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getversion"), LINE, n_getversion, NULL, NUMBER); }
#line 4199 "parser.c"
    break;

  case 294:
#line 422 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getversion"), LINE, n_getversion, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4205 "parser.c"
    break;

  case 295:
#line 423 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("getversion"), LINE, n_getversion, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 4211 "parser.c"
    break;

  case 296:
#line 424 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("iconinfo"), LINE, n_iconinfo, (yyvsp[-1].e), NUMBER); }
#line 4217 "parser.c"
    break;

  case 297:
#line 425 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("querydisplay"), LINE, n_querydisplay, (yyvsp[-1].e), NUMBER); }
#line 4223 "parser.c"
    break;

  case 298:
#line 429 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("procedure"), LINE, n_procedure, push(new_contxt(), new_custom((yyvsp[-3].s), LINE, (yyvsp[-2].e), (yyvsp[-1].e))), NUMBER); }
#line 4229 "parser.c"
    break;

  case 299:
#line 430 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("procedure"), LINE, n_procedure, push(new_contxt(), new_custom((yyvsp[-2].s), LINE, (yyvsp[-1].e), NULL)), NUMBER); }
#line 4235 "parser.c"
    break;

  case 300:
#line 431 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("procedure"), LINE, n_procedure, push(new_contxt(), new_custom((yyvsp[-2].s), LINE, NULL, (yyvsp[-1].e))), NUMBER); }
#line 4241 "parser.c"
    break;

  case 301:
#line 432 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("procedure"), LINE, n_procedure, push(new_contxt(), new_custom((yyvsp[-1].s), LINE, NULL, NULL)), NUMBER); }
#line 4247 "parser.c"
    break;

  case 302:
#line 433 "../src/parser.y"
                                                 { (yyval.e) = new_cusref((yyvsp[-2].s), LINE, (yyvsp[-1].e)); }
#line 4253 "parser.c"
    break;

  case 303:
#line 434 "../src/parser.y"
                                                 { (yyval.e) = new_cusref((yyvsp[-1].s), LINE, NULL); }
#line 4259 "parser.c"
    break;

  case 304:
#line 438 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askbool"), LINE, n_askbool, NULL, NUMBER); }
#line 4265 "parser.c"
    break;

  case 305:
#line 439 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askbool"), LINE, n_askbool, (yyvsp[-1].e), NUMBER); }
#line 4271 "parser.c"
    break;

  case 306:
#line 440 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askchoice"), LINE, n_askchoice, (yyvsp[-1].e), NUMBER); }
#line 4277 "parser.c"
    break;

  case 307:
#line 441 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askdir"), LINE, n_askdir, NULL, STRING); }
#line 4283 "parser.c"
    break;

  case 308:
#line 442 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askdir"), LINE, n_askdir, (yyvsp[-1].e), STRING); }
#line 4289 "parser.c"
    break;

  case 309:
#line 443 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askdisk"), LINE, n_askdisk, (yyvsp[-1].e), NUMBER); }
#line 4295 "parser.c"
    break;

  case 310:
#line 444 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askfile"), LINE, n_askfile, NULL, STRING); }
#line 4301 "parser.c"
    break;

  case 311:
#line 445 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askfile"), LINE, n_askfile, (yyvsp[-1].e), STRING); }
#line 4307 "parser.c"
    break;

  case 312:
#line 446 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("asknumber"), LINE, n_asknumber, NULL, NUMBER); }
#line 4313 "parser.c"
    break;

  case 313:
#line 447 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("asknumber"), LINE, n_asknumber, (yyvsp[-1].e), NUMBER); }
#line 4319 "parser.c"
    break;

  case 314:
#line 448 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askoptions"), LINE, n_askoptions, (yyvsp[-1].e), NUMBER); }
#line 4325 "parser.c"
    break;

  case 315:
#line 449 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askstring"), LINE, n_askstring, NULL, STRING); }
#line 4331 "parser.c"
    break;

  case 316:
#line 450 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("askstring"), LINE, n_askstring, (yyvsp[-1].e), STRING); }
#line 4337 "parser.c"
    break;

  case 317:
#line 454 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("cat"), LINE, n_cat, (yyvsp[-1].e), STRING); }
#line 4343 "parser.c"
    break;

  case 318:
#line 455 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("expandpath"), LINE, n_expandpath, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4349 "parser.c"
    break;

  case 319:
#line 456 "../src/parser.y"
                                                 { (yyval.e) = new_native((yyvsp[-2].s), LINE, n_fmt, (yyvsp[-1].e), STRING); }
#line 4355 "parser.c"
    break;

  case 320:
#line 457 "../src/parser.y"
                                                 { (yyval.e) = new_native((yyvsp[-1].s), LINE, n_fmt, NULL, STRING); }
#line 4361 "parser.c"
    break;

  case 321:
#line 458 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("pathonly"), LINE, n_pathonly, push(new_contxt(), (yyvsp[-1].e)), STRING); }
#line 4367 "parser.c"
    break;

  case 322:
#line 459 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("patmatch"), LINE, n_patmatch, (yyvsp[-1].e), NUMBER); }
#line 4373 "parser.c"
    break;

  case 323:
#line 460 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("strlen"), LINE, n_strlen, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4379 "parser.c"
    break;

  case 324:
#line 461 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("substr"), LINE, n_substr, (yyvsp[-1].e), STRING); }
#line 4385 "parser.c"
    break;

  case 325:
#line 462 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("substr"), LINE, n_substr, push((yyvsp[-2].e), (yyvsp[-1].e)), STRING); }
#line 4391 "parser.c"
    break;

  case 326:
#line 463 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("tackon"), LINE, n_tackon, (yyvsp[-1].e), STRING); }
#line 4397 "parser.c"
    break;

  case 327:
#line 467 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("set"), LINE, n_set, (yyvsp[-1].e), DANGLE); }
#line 4403 "parser.c"
    break;

  case 328:
#line 468 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("symbolset"), LINE, n_symbolset, (yyvsp[-1].e), DANGLE); }
#line 4409 "parser.c"
    break;

  case 329:
#line 469 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("symbolval"), LINE, n_symbolval, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4415 "parser.c"
    break;

  case 330:
#line 473 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("openwbobject"), LINE, n_openwbobject, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4421 "parser.c"
    break;

  case 331:
#line 474 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("openwbobject"), LINE, n_openwbobject, merge(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e)), NUMBER); }
#line 4427 "parser.c"
    break;

  case 332:
#line 475 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("openwbobject"), LINE, n_openwbobject, merge(push(new_contxt(), (yyvsp[-1].e)), (yyvsp[-2].e)), NUMBER); }
#line 4433 "parser.c"
    break;

  case 333:
#line 476 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("openwbobject"), LINE, n_openwbobject, merge(push(new_contxt(), (yyvsp[-2].e)), merge((yyvsp[-3].e), (yyvsp[-1].e))), NUMBER); }
#line 4439 "parser.c"
    break;

  case 334:
#line 477 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("showwbobject"), LINE, n_showwbobject, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4445 "parser.c"
    break;

  case 335:
#line 478 "../src/parser.y"
                                                 { (yyval.e) = new_native(strdup("closewbobject"), LINE, n_closewbobject, push(new_contxt(), (yyvsp[-1].e)), NUMBER); }
#line 4451 "parser.c"
    break;

  case 336:
#line 482 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("all"), OPT_ALL, NULL); }
#line 4457 "parser.c"
    break;

  case 337:
#line 483 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("append"), OPT_APPEND, (yyvsp[-1].e)); }
#line 4463 "parser.c"
    break;

  case 338:
#line 484 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("assigns"), OPT_ASSIGNS, NULL); }
#line 4469 "parser.c"
    break;

  case 339:
#line 485 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("back"), OPT_BACK, (yyvsp[-1].e)); }
#line 4475 "parser.c"
    break;

  case 340:
#line 486 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("choices"), OPT_CHOICES, (yyvsp[-1].e)); }
#line 4481 "parser.c"
    break;

  case 341:
#line 487 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("command"), OPT_COMMAND, (yyvsp[-1].e)); }
#line 4487 "parser.c"
    break;

  case 342:
#line 488 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("compression"), OPT_COMPRESSION, NULL); }
#line 4493 "parser.c"
    break;

  case 343:
#line 489 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("confirm"), OPT_CONFIRM, (yyvsp[-1].e)); }
#line 4499 "parser.c"
    break;

  case 344:
#line 490 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("confirm"), OPT_CONFIRM, NULL); }
#line 4505 "parser.c"
    break;

  case 345:
#line 491 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("default"), OPT_DEFAULT, push(new_contxt(), (yyvsp[-1].e))); }
#line 4511 "parser.c"
    break;

  case 346:
#line 492 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("delopts"), OPT_DELOPTS, (yyvsp[-1].e)); }
#line 4517 "parser.c"
    break;

  case 347:
#line 493 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("delopts"), OPT_DELOPTS, push(new_contxt(), new_symref(strdup("@null"), LINE))); }
#line 4523 "parser.c"
    break;

  case 348:
#line 494 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("dest"), OPT_DEST, push(new_contxt(), (yyvsp[-1].e))); }
#line 4529 "parser.c"
    break;

  case 349:
#line 495 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("disk"), OPT_DISK, NULL); }
#line 4535 "parser.c"
    break;

  case 350:
#line 496 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("files"), OPT_FILES, NULL); }
#line 4541 "parser.c"
    break;

  case 351:
#line 497 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("fonts"), OPT_FONTS, NULL); }
#line 4547 "parser.c"
    break;

  case 352:
#line 498 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("getdefaulttool"), OPT_GETDEFAULTTOOL, push(new_contxt(), (yyvsp[-1].e))); }
#line 4553 "parser.c"
    break;

  case 353:
#line 499 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("getposition"), OPT_GETPOSITION, (yyvsp[-1].e)); }
#line 4559 "parser.c"
    break;

  case 354:
#line 500 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("getstack"), OPT_GETSTACK, push(new_contxt(), (yyvsp[-1].e))); }
#line 4565 "parser.c"
    break;

  case 355:
#line 501 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("gettooltype"), OPT_GETTOOLTYPE, (yyvsp[-1].e)); }
#line 4571 "parser.c"
    break;

  case 356:
#line 502 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("help"), OPT_HELP, (yyvsp[-1].e)); }
#line 4577 "parser.c"
    break;

  case 357:
#line 503 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("help"), OPT_HELP, push(new_contxt(), new_symref(strdup("@null"), LINE))); }
#line 4583 "parser.c"
    break;

  case 358:
#line 504 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("infos"), OPT_INFOS, NULL); }
#line 4589 "parser.c"
    break;

  case 359:
#line 505 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("include"), OPT_INCLUDE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4595 "parser.c"
    break;

  case 360:
#line 506 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("newname"), OPT_NEWNAME, push(new_contxt(), (yyvsp[-1].e))); }
#line 4601 "parser.c"
    break;

  case 361:
#line 507 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("newpath"), OPT_NEWPATH, NULL); }
#line 4607 "parser.c"
    break;

  case 362:
#line 508 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("nogauge"), OPT_NOGAUGE, NULL); }
#line 4613 "parser.c"
    break;

  case 363:
#line 509 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("noposition"), OPT_NOPOSITION, NULL); }
#line 4619 "parser.c"
    break;

  case 364:
#line 510 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("noreq"), OPT_NOREQ, NULL); }
#line 4625 "parser.c"
    break;

  case 365:
#line 511 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("pattern"), OPT_PATTERN, push(new_contxt(), (yyvsp[-1].e))); }
#line 4631 "parser.c"
    break;

  case 366:
#line 512 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("prompt"), OPT_PROMPT, (yyvsp[-1].e)); }
#line 4637 "parser.c"
    break;

  case 367:
#line 513 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("quiet"), OPT_QUIET, NULL); }
#line 4643 "parser.c"
    break;

  case 368:
#line 514 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("range"), OPT_RANGE, (yyvsp[-1].e)); }
#line 4649 "parser.c"
    break;

  case 369:
#line 515 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("safe"), OPT_SAFE, NULL); }
#line 4655 "parser.c"
    break;

  case 370:
#line 516 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("setdefaulttool"), OPT_SETDEFAULTTOOL, push(new_contxt(), (yyvsp[-1].e))); }
#line 4661 "parser.c"
    break;

  case 371:
#line 517 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("setposition"), OPT_SETPOSITION, (yyvsp[-1].e)); }
#line 4667 "parser.c"
    break;

  case 372:
#line 518 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("setstack"), OPT_SETSTACK, push(new_contxt(), (yyvsp[-1].e))); }
#line 4673 "parser.c"
    break;

  case 373:
#line 519 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("settooltype"), OPT_SETTOOLTYPE, (yyvsp[-1].e)); }
#line 4679 "parser.c"
    break;

  case 374:
#line 520 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("settooltype"), OPT_SETTOOLTYPE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4685 "parser.c"
    break;

  case 375:
#line 521 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("source"), OPT_SOURCE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4691 "parser.c"
    break;

  case 376:
#line 522 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("source"), OPT_SOURCE, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e))); }
#line 4697 "parser.c"
    break;

  case 377:
#line 523 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("swapcolors"), OPT_SWAPCOLORS, NULL); }
#line 4703 "parser.c"
    break;

  case 378:
#line 524 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("optional"), OPT_OPTIONAL, (yyvsp[-1].e)); }
#line 4709 "parser.c"
    break;

  case 379:
#line 525 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("optional"), OPT_OPTIONAL, push(new_contxt(), new_symref(strdup("@null"), LINE))); }
#line 4715 "parser.c"
    break;

  case 380:
#line 526 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("resident"), OPT_RESIDENT, NULL); }
#line 4721 "parser.c"
    break;

  case 381:
#line 527 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("override"), OPT_OVERRIDE, push(new_contxt(), (yyvsp[-1].e))); }
#line 4727 "parser.c"
    break;

  case 382:
#line 528 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("dynopt"), OPT_DYNOPT, push(push(new_contxt(), (yyvsp[-2].e)), (yyvsp[-1].e))); }
#line 4733 "parser.c"
    break;

  case 383:
#line 529 "../src/parser.y"
                                                 { (yyval.e) = new_option(strdup("dynopt"), OPT_DYNOPT, push(push(push(new_contxt(), (yyvsp[-3].e)), (yyvsp[-2].e)), (yyvsp[-1].e))); }
#line 4739 "parser.c"
    break;


#line 4743 "parser.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (scanner, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (scanner, yymsgp);
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
                      yytoken, &yylval, scanner);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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
                  yystos[yystate], yyvsp, scanner);
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
  yyerror (scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, scanner);
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
#line 531 "../src/parser.y"

