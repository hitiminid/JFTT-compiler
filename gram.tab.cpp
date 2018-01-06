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




/* Copy the first part of user declarations.  */
#line 1 "gram.ypp" /* yacc.c:339  */


  #include <cstdlib>
  #include <iostream>
  #include <algorithm>
  #include <cstring>
  #include <string>
  #include <map>
  #include <stack>
  #include <vector>
  #include <stdio.h>
  #include <stdlib.h>

  extern "C" int yylex();
  extern "C" int yyparse();

  extern int yylineno;

  /*===================================================*/
  /*                      CONSTANTS                    */
  /*===================================================*/

  #define NUMBER_OF_LAST_RESERVED_MEMORY_INDEX 10
  #define ARRAY_INDEX_OFFSET 1
  #define JUMP_PLACEHOLDER_ADDRESS -3000
  #define ELSE_PLACEHOLDER_ADDRESS -5000

  /*===================================================*/
  /*                      VARIABLES                    */
  /*===================================================*/

  long long currentMemoryIndex = NUMBER_OF_LAST_RESERVED_MEMORY_INDEX;
  long long numberOfCommands   = 0;

  long long currentArrayAddress;


  long long equationElementAddress;
  long long firstElementAddress;
  long long secondElementAddress;
  long long arrayIdentifierAddress;
  long long firstArrayIdentifierAddress;
  long long arrayIndexOfFirstElement;


  std::string variableNameGlobal;
  std::string firstElementName;

  bool isDebugOn = false;

  long long currentArrayIndex;
  long long currentArrayIndex_assign;
  long long currentArrayAssignAddress;

  long long iteratorsAddress;


  std::string valueFormat1;
  std::string valueFormat2;
  std::string expressionType[2];
  std::string expressionType2[2];

  std::string assignExpressionType[2];

  /*===================================================*/
  /*                     STRUCTURES                    */
  /*===================================================*/
  std::vector<std::string> currentlyUsedIterators;
	std::vector<std::string> commandsVector;
  std::map<std::string, long long> variablesAddressesMap;
  std::map<std::string, bool> initializedVariablesMap;
  std::map<std::string, long long> arraysMap;
  std::stack<std::pair<int, int>> jumpStack;
  std::stack<int> returnStack;
  std::stack<int> elseStack;
  std::stack<long long> forStack;


  /*===================================================*/
  /*                      FUNCTIONS                    */
  /*===================================================*/

  void yyerror (char* msg);

  void declareAVariable(std::string name);
  void declareAnArray(std::string name, long long arraySize);

  bool isVariableDeclared(std::map<std::string, long long> *mapToSearch, std::string name);
  bool isVariableInitialized(std::map<std::string, bool>* initializedMap, std::string variableName);


  void displayMap(std::map<std::string, int>* mapToDisplay);
  void displayInitializedMap(std::map<std::string, bool>* map);
  void displayCommandVector(std::vector<std::string>* commandsVector);

  void pushCodeWithAddress(std::string opCode, long long number);
  void pushCode(std::string opCode);

  void generateNumber(std::string);
  long long computeRequiredMemoryCell(std::string variableName, long long currentArrayIndex);

  std::string determineDataType(std::string, std::string);
  void changeJumpValue();

  void changeJumpValue(long long value);
  void changeJumpValueForLoop();
  void changeElseValue(long long value);

  void setEquationAttributes();

  std::vector<long long> getBinaryRepresentation(long long decimalNumber);

  void performMultiplicationWithNumber(std::string, long long);
  void performMultiplication();

  void performMODOrDIV();

  void computeElementsForEQAndNEQ(
     std::string firstType,  long long firstElementAddress,  std::string firstElementName,  long long arrayIndexOfFirstElement,  long long firstArrayIdentifierAddress,
     std::string secondType, long long secondElementAddress, std::string secondElementName, long long arrayIndexOfSecondElement, long long secondArrayIdentifierAddress);

   void performDataAssignForDIVAndMOD(
     std::string firstType,  long long firstElementAddress,  std::string firstElementName,  long long arrayIndexOfFirstElement, long long firstArrayIdentifierAddress,
     std::string secondType, long long secondElementAddress, std::string secondElementName, long long currentArrayIndex,        long long secondArrayIdentifierAddress);

   void finish();



#line 196 "gram.tab.cpp" /* yacc.c:339  */

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
   by #include "gram.tab.hpp".  */
#ifndef YY_YY_GRAM_TAB_HPP_INCLUDED
# define YY_YY_GRAM_TAB_HPP_INCLUDED
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
    VAR = 258,
    BEG = 259,
    END = 260,
    IF = 261,
    THEN = 262,
    ELSE = 263,
    ENDIF = 264,
    WHILE = 265,
    DO = 266,
    ENDWHILE = 267,
    FOR = 268,
    FROM = 269,
    TO = 270,
    ENDFOR = 271,
    DOWNTO = 272,
    READ = 273,
    WRITE = 274,
    ASSGN = 275,
    EQ = 276,
    NEQ = 277,
    GT = 278,
    GE = 279,
    LT = 280,
    LE = 281,
    ADD = 282,
    SUB = 283,
    MUL = 284,
    DIV = 285,
    MOD = 286,
    num = 287,
    PID = 288,
    SEM = 289,
    LEFT_BR = 290,
    RIGHT_BR = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 131 "gram.ypp" /* yacc.c:355  */

    char* string;
    long long num;

#line 278 "gram.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 293 "gram.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
       2,     2,    39,    38,     2,    37,     2,    40,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   153,   153,   157,   160,   164,   167,   168,   171,   171,
     234,   237,   241,   234,   257,   261,   261,   269,   298,   463,
     269,   501,   530,   693,   501,   734,   773,   821,   843,   843,
     996,   996,  1169,  1169,  1351,  1351,  1393,  1393,  1435,  1435,
    1476,  1476,  1516,  1516,  1702,  1702,  1879,  1879,  2051,  2051,
    2209,  2214,  2230,  2248,  2282
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "BEG", "END", "IF", "THEN",
  "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "FOR", "FROM", "TO",
  "ENDFOR", "DOWNTO", "READ", "WRITE", "ASSGN", "EQ", "NEQ", "GT", "GE",
  "LT", "LE", "ADD", "SUB", "MUL", "DIV", "MOD", "num", "PID", "SEM",
  "LEFT_BR", "RIGHT_BR", "'-'", "'+'", "'*'", "'/'", "'%'", "$accept",
  "program", "vdeclarations", "commands", "command", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "expression",
  "$@12", "$@13", "$@14", "$@15", "$@16", "condition", "$@17", "$@18",
  "$@19", "$@20", "$@21", "$@22", "value", "identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    45,    43,    42,
      47,    37
};
# endif

#define YYPACT_NINF -33

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-33)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       7,   -33,    18,    -2,   -33,   121,   -32,    -9,   -33,    -6,
      -3,    -9,     2,     1,   -33,   -33,     9,   -33,    28,    59,
     -33,    -9,    25,    12,    14,    -4,   -33,   -33,    23,    13,
     121,    31,    33,    35,    30,    36,    39,    45,    -9,   -33,
     -33,    40,    41,    -9,   -33,     3,    -9,    -9,    -9,    -9,
      -9,    -9,   121,     0,   -33,   -33,    44,   117,   -33,    49,
     -33,   -33,   -33,   -33,   -33,   -33,    32,   -33,   -33,   -33,
      48,    38,    57,    58,    60,   -33,   -33,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,   121,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   121,    81,    82,    97,   -33,   -33,   -33,   121,
     121,    99,   110,   -33,   -33
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     1,     0,     3,     0,    15,     0,
       0,     0,    52,     0,     7,     8,     0,    50,     0,    38,
      51,     0,     0,     0,     0,     0,     2,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     4,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    53,     0,    27,    14,     0,
      39,    41,    43,    45,    47,    49,     0,    17,    21,     9,
       0,     0,     0,     0,     0,    11,    16,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    22,    29,    31,    33,
      35,    37,    12,     0,     0,     0,    19,    23,    13,     0,
       0,     0,     0,    20,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -33,   -33,   -33,   -26,   -12,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,    86,   -33,   -33,   -33,   -33,   -33,   -33,    21,
      -5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    13,    14,    28,    59,    84,    95,    21,
      77,    93,    99,    78,    94,   100,    56,    70,    71,    72,
      73,    74,    18,    31,    32,    33,    34,    35,    36,    19,
      20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      15,    27,     5,    16,    45,    23,    26,     7,    15,     7,
       1,     8,    58,     8,     9,    67,     9,    68,     4,    10,
      11,    10,    11,    17,    12,    15,    66,    22,    41,    42,
      12,     6,    24,    27,    12,    30,    12,    25,     7,    38,
      15,    29,     8,    43,    76,     9,    39,    15,    40,    44,
      10,    11,    46,    49,    27,    47,    52,    75,    92,    53,
      48,    15,    50,    51,    57,    12,    80,    60,    61,    62,
      63,    64,    65,   101,   102,    79,    54,    55,    69,    15,
      27,   -40,   -44,   -48,   -42,   -46,    81,    15,    82,    27,
      27,    83,    96,    97,    15,    15,    15,    15,    85,    86,
      87,    88,    89,    90,    91,     7,    98,    37,     0,     8,
       0,     0,     9,     0,     0,   103,     7,    10,    11,     0,
       8,     0,     0,     9,     0,     0,   104,     7,    10,    11,
       0,     8,    12,     0,     9,     0,     0,     0,     0,    10,
      11,     0,     0,    12,   -28,   -30,   -32,   -34,   -36,     0,
       0,     0,     0,     0,    12
};

static const yytype_int8 yycheck[] =
{
       5,    13,     4,    35,    30,    10,     5,     6,    13,     6,
       3,    10,     9,    10,    13,    15,    13,    17,     0,    18,
      19,    18,    19,    32,    33,    30,    52,    33,    32,    33,
      33,    33,    11,    45,    33,     7,    33,    35,     6,    14,
      45,    32,    10,    20,    12,    13,    34,    52,    34,    36,
      18,    19,    21,    23,    66,    22,    11,     8,    84,    38,
      25,    66,    26,    24,    43,    33,    28,    46,    47,    48,
      49,    50,    51,    99,   100,    27,    36,    36,    34,    84,
      92,    22,    23,    24,    25,    26,    29,    92,    30,   101,
     102,    31,    11,    11,    99,   100,   101,   102,    77,    78,
      79,    80,    81,    82,    83,     6,     9,    21,    -1,    10,
      -1,    -1,    13,    -1,    -1,    16,     6,    18,    19,    -1,
      10,    -1,    -1,    13,    -1,    -1,    16,     6,    18,    19,
      -1,    10,    33,    -1,    13,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    33,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    43,    44,     0,     4,    33,     6,    10,    13,
      18,    19,    33,    45,    46,    72,    35,    32,    64,    71,
      72,    51,    33,    72,    71,    35,     5,    46,    47,    32,
       7,    65,    66,    67,    68,    69,    70,    64,    14,    34,
      34,    32,    33,    20,    36,    45,    21,    22,    25,    23,
      26,    24,    11,    71,    36,    36,    58,    71,     9,    48,
      71,    71,    71,    71,    71,    71,    45,    15,    17,    34,
      59,    60,    61,    62,    63,     8,    12,    52,    55,    27,
      28,    29,    30,    31,    49,    71,    71,    71,    71,    71,
      71,    71,    45,    53,    56,    50,    11,    11,     9,    54,
      57,    45,    45,    16,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    45,    45,    47,    46,
      48,    49,    50,    46,    46,    51,    46,    52,    53,    54,
      46,    55,    56,    57,    46,    46,    46,    58,    59,    58,
      60,    58,    61,    58,    62,    58,    63,    58,    65,    64,
      66,    64,    67,    64,    68,    64,    69,    64,    70,    64,
      71,    71,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     5,     0,     2,     1,     0,     5,
       0,     0,     0,    10,     5,     0,     6,     0,     0,     0,
      12,     0,     0,     0,    12,     3,     3,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       1,     1,     1,     4,     4
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
#line 153 "gram.ypp" /* yacc.c:1646  */
    {
                  finish();
                }
#line 1456 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 157 "gram.ypp" /* yacc.c:1646  */
    {
                  declareAVariable((yyvsp[0].string));
                }
#line 1464 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 160 "gram.ypp" /* yacc.c:1646  */
    {
                  long long arraySize = atoll((yyvsp[-1].string));
                  declareAnArray((yyvsp[-3].string), arraySize);
                }
#line 1473 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 164 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1479 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 167 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1485 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 168 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1491 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 171 "gram.ypp" /* yacc.c:1646  */
    {
                expressionType[0]         = valueFormat1;
                expressionType[1]         = valueFormat2;
                assignExpressionType[0]   = expressionType[0];
                assignExpressionType[1]   = expressionType[1];
                currentArrayIndex_assign  = currentArrayIndex;
                currentArrayAssignAddress = arrayIdentifierAddress;

              }
#line 1505 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 179 "gram.ypp" /* yacc.c:1646  */
    {

                std::string variableName = (yyvsp[-4].string);
                long long addressToAssign;

                if (!isVariableDeclared(&variablesAddressesMap, variableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Variable '" << (yyvsp[-4].string) <<"' not declared!" << "\n";
                  exit(1);
                } else {

                  if(std::find(currentlyUsedIterators.begin(), currentlyUsedIterators.end(), variableName) != currentlyUsedIterators.end()) {
                    std::cerr << "Error [line "<< yylineno <<  "]: " << "Trying to modify iterator '"<< variableName << "' - this action is prohibited!\n";
                    exit(1);
                  }

                  long long variableAddress = variablesAddressesMap[variableName];

                  if (assignExpressionType[1] == "array") {

                    // std::cout << assignExpressionType[0] << " # "<< assignExpressionType[1] << "\n";
                    long long arraySize = arraysMap[variableName];

                    if (assignExpressionType[0] == "array") {

                      pushCodeWithAddress("STORE", 7);
                      pushCodeWithAddress("LOAD",  currentArrayAssignAddress);
                      pushCodeWithAddress("STORE", 8);

                      pushCodeWithAddress("LOAD",  variableAddress);
                      pushCodeWithAddress("ADD",   8);
                      pushCodeWithAddress("STORE", 1);

                      pushCodeWithAddress("LOAD",   7);
                      pushCodeWithAddress("STOREI", 1);

                    } else {

                      if (currentArrayIndex < 0 || currentArrayIndex >= arraySize) {
                        std::cerr << "Error [line "<< yylineno <<  "]: " << "IndexArrayOutOfBoundsException: array " << variableName << " has size: " << arraySize << ", tried to access index " << currentArrayIndex << "\n";
                        exit(1);
                      }
                      addressToAssign = variableAddress + currentArrayIndex_assign + 1;
                      // pushCodeWithAddress("### variableAddress", variableAddress);
                      // pushCodeWithAddress("### arrayIndex", currentArrayIndex_assign);

                      pushCodeWithAddress("STORE", addressToAssign);

                    }
                  } else {
                    initializedVariablesMap[variableName] = true;
                    addressToAssign = variableAddress;
                    pushCodeWithAddress("STORE", addressToAssign);
                  }
                }
             }
#line 1565 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 234 "gram.ypp" /* yacc.c:1646  */
    {


             }
#line 1574 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 237 "gram.ypp" /* yacc.c:1646  */
    {
               pushCodeWithAddress("JUMP", ELSE_PLACEHOLDER_ADDRESS);
               changeJumpValue();

            }
#line 1584 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 241 "gram.ypp" /* yacc.c:1646  */
    {
              elseStack.emplace(numberOfCommands);

            }
#line 1593 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 244 "gram.ypp" /* yacc.c:1646  */
    {
              std::stack<std::pair<int, int>> tempStack = jumpStack;

              for (long long i = 0; i < jumpStack.size(); i++) {
                std::pair<int,int> topElement = tempStack.top();
                tempStack.pop();
              }

              long long returnA = elseStack.top();
              elseStack.pop();
              changeElseValue(returnA);
            }
#line 1610 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 257 "gram.ypp" /* yacc.c:1646  */
    {
               changeJumpValue();
             }
#line 1618 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 261 "gram.ypp" /* yacc.c:1646  */
    {
               returnStack.emplace(numberOfCommands);
             }
#line 1626 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 263 "gram.ypp" /* yacc.c:1646  */
    {
                long long returnAddress = returnStack.top();
                returnStack.pop();
                pushCodeWithAddress("JUMP", returnAddress);
                changeJumpValue();
             }
#line 1637 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 269 "gram.ypp" /* yacc.c:1646  */
    {
               std::string iteratorsName = (yyvsp[-3].string);

               if (isVariableDeclared(&variablesAddressesMap, iteratorsName)) {
                 std::cerr << "Error [line "<< yylineno <<  "]: '"<< iteratorsName << "' has been previously used in program! \n";
                 exit(1);
               } else {
                 declareAVariable(iteratorsName);
                 declareAVariable(iteratorsName+"#1");
                 initializedVariablesMap[iteratorsName] = true;
                 currentlyUsedIterators.push_back(iteratorsName);
               }

               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);

               if (type == "number") {
                 pushCodeWithAddress("STORE", variablesAddressesMap[(yyvsp[-3].string)]);
               }
             }
#line 1672 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 298 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress                   = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName          = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               iteratorsAddress = variablesAddressesMap[(yyvsp[-5].string)];
               std::string rightIteratorsBoundName = (yyvsp[-5].string);
               rightIteratorsBoundName = rightIteratorsBoundName + "#1";
               long long secondIteratorsAddress = variablesAddressesMap[rightIteratorsBoundName];

               if (types[0] == "number" && types[1] == "number") {

                 pushCodeWithAddress("STORE", secondIteratorsAddress);

               } else if (types[0] == "number" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  secondElementAddress);
                 pushCodeWithAddress("STORE", secondIteratorsAddress);

               } else if (types[0] == "variable" && types[1] == "number") {

                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "number") {

                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);


              } else if (types[0] == "number" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD",  secondElementAddress  + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "array" && types[1] == "variable") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "array" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 1);
                pushCodeWithAddress("LOADI", 1);

                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "array" && types[1] == "number") {


                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

              } else if (types[0] == "array" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);


              } else if (types[0] == "number" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", secondIteratorsAddress);


              } else if (types[0] == "variable" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "variable" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "variable") {

                pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD", secondElementAddress);
                pushCodeWithAddress("LOAD", secondIteratorsAddress);

              } else if (types[0] == "variable" && types[1] == "variable") {

                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress);
                pushCodeWithAddress("STORE", secondIteratorsAddress);
              }
              forStack.emplace(iteratorsAddress);

            }
#line 1843 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 463 "gram.ypp" /* yacc.c:1646  */
    {
              returnStack.emplace(numberOfCommands);
              long long address = forStack.top();

              pushCodeWithAddress("LOAD", address);
              pushCodeWithAddress("SUB",  address + 1);

              pushCodeWithAddress("JZERO", numberOfCommands + 2);
              pushCodeWithAddress("JUMP",  JUMP_PLACEHOLDER_ADDRESS);

             }
#line 1859 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 473 "gram.ypp" /* yacc.c:1646  */
    {

              pushCodeWithAddress("LOAD",  forStack.top());
              pushCode("INC");
              pushCodeWithAddress("STORE", forStack.top());

              long long returnAddress = returnStack.top();
              returnStack.pop();
              pushCodeWithAddress("JUMP", returnAddress);
              changeJumpValue();
              forStack.pop();

              std::string firstIterator  = (yyvsp[-10].string);
              std::string secondIterator = (yyvsp[-10].string);
              secondIterator = secondIterator + "#1";

              variablesAddressesMap.erase(firstIterator);
              initializedVariablesMap.erase(firstIterator);

              variablesAddressesMap.erase(secondIterator);
              initializedVariablesMap.erase(secondIterator);

              std::vector<std::string>::iterator position = std::find(currentlyUsedIterators.begin(), currentlyUsedIterators.end(), firstIterator);
              if (position != currentlyUsedIterators.end()) {
                currentlyUsedIterators.erase(position);
              }
             }
#line 1891 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 501 "gram.ypp" /* yacc.c:1646  */
    {

               std::string iteratorsName = (yyvsp[-3].string);
               if (isVariableDeclared(&variablesAddressesMap, iteratorsName)) {
                 std::cerr << "[#" << yylineno << "] '" << iteratorsName << "' has been used previously in program! \n";
                 exit(1);
               } else {
                 declareAVariable(iteratorsName);
                 declareAVariable(iteratorsName+"#1");
                 initializedVariablesMap[iteratorsName] = true;
                 currentlyUsedIterators.push_back(iteratorsName);
               }

               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);

               if (type == "number") {
                 pushCodeWithAddress("STORE", variablesAddressesMap[(yyvsp[-3].string)]);
               }
             }
#line 1926 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 530 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress             = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName    = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               iteratorsAddress = variablesAddressesMap[(yyvsp[-5].string)];
               std::string rightIteratorsBoundName = (yyvsp[-5].string);
               rightIteratorsBoundName = rightIteratorsBoundName + "#1";
               long long secondIteratorsAddress = variablesAddressesMap[rightIteratorsBoundName];

               if (types[0] == "number" && types[1] == "number") {

                 pushCodeWithAddress("STORE", secondIteratorsAddress);

               } else if (types[0] == "number" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  secondElementAddress);
                 pushCodeWithAddress("STORE", secondIteratorsAddress);

               } else if (types[0] == "variable" && types[1] == "number") {

                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "number") {

                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);


              } else if (types[0] == "number" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD",  secondElementAddress  + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "array" && types[1] == "variable") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "array" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 1);
                pushCodeWithAddress("LOADI", 1);

                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "array" && types[1] == "number") {

                pushCodeWithAddress("STORE", secondIteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

              } else if (types[0] == "array" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "number" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", secondIteratorsAddress);


              } else if (types[0] == "variable" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 10);
                pushCodeWithAddress("LOADI", 10);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "variable" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", secondIteratorsAddress);

              } else if (types[0] == "arrayVar" && types[1] == "variable") {

                pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD", secondElementAddress);
                pushCodeWithAddress("LOAD", secondIteratorsAddress);

              } else if (types[0] == "variable" && types[1] == "variable") {

                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("STORE", iteratorsAddress);

                pushCodeWithAddress("LOAD",  secondElementAddress);
                pushCodeWithAddress("STORE", secondIteratorsAddress);
              }
              forStack.emplace(iteratorsAddress);

            }
#line 2095 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 693 "gram.ypp" /* yacc.c:1646  */
    {

              returnStack.emplace(numberOfCommands);
              long long address = forStack.top();

              pushCodeWithAddress("LOAD", address + 1);
              pushCodeWithAddress("SUB",  address);

              pushCodeWithAddress("JZERO", numberOfCommands + 2);
              pushCodeWithAddress("JUMP",  JUMP_PLACEHOLDER_ADDRESS);

            }
#line 2112 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 704 "gram.ypp" /* yacc.c:1646  */
    {

              pushCodeWithAddress("LOAD",  forStack.top());
              pushCodeWithAddress("JZERO", numberOfCommands + 4);
              pushCode("DEC");
              pushCodeWithAddress("STORE", forStack.top());

              long long returnAddress = returnStack.top();
              returnStack.pop();
              pushCodeWithAddress("JUMP", returnAddress);
              changeJumpValue();

              forStack.pop();

              std::string firstIterator  = (yyvsp[-10].string);
              std::string secondIterator = (yyvsp[-10].string);
              secondIterator = secondIterator + "#1";

              variablesAddressesMap.erase(firstIterator);
              initializedVariablesMap.erase(firstIterator);

              variablesAddressesMap.erase(secondIterator);
              initializedVariablesMap.erase(secondIterator);

              std::vector<std::string>::iterator position = std::find(currentlyUsedIterators.begin(), currentlyUsedIterators.end(), firstIterator);
              if (position != currentlyUsedIterators.end()) {
                currentlyUsedIterators.erase(position);
              }
             }
#line 2146 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 734 "gram.ypp" /* yacc.c:1646  */
    {

               std::string variableName = (yyvsp[-1].string);

               if (!isVariableDeclared(&variablesAddressesMap, variableName)) {
                 std::cerr << "Error [line "<< yylineno <<  "]: " << "Variable '"<< (yyvsp[-1].string) <<"' not declared! #READ" << "\n";
                 exit(1);
               } else {

                 long long variableAddress = variablesAddressesMap[variableName];
                 pushCode("ZERO");
                 pushCode("GET");

                 if (isVariableDeclared(&arraysMap, variableName)) {
                    long long requiredCell;
                    if (valueFormat1 == "number") {

                     requiredCell = computeRequiredMemoryCell(variableName, currentArrayIndex);
                     pushCodeWithAddress("STORE", requiredCell);

                   } else {

                     pushCodeWithAddress("STORE", 0);

                     pushCodeWithAddress("LOAD", variablesAddressesMap[variableName]);
                     pushCodeWithAddress("ADD",  arrayIdentifierAddress);
                     pushCodeWithAddress("STORE", 1);

                     pushCodeWithAddress("LOAD",  0);
                     pushCodeWithAddress("STOREI", 1);
                   }
                 } else {
                   long long variableAddress = variablesAddressesMap[variableName];

                   pushCodeWithAddress("STORE", variableAddress);
                   initializedVariablesMap[variableName] = true;
                 }
               }
             }
#line 2190 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 773 "gram.ypp" /* yacc.c:1646  */
    {

               std::string variableName = (yyvsp[-1].string);

               if (valueFormat1 == "number" && valueFormat2 == "number") {
                 pushCode("PUT");
               } else if (isVariableDeclared(&variablesAddressesMap, variableName)) {

                 long long variableAddress = variablesAddressesMap[variableName];

                 if (valueFormat2 != "array" && !isVariableInitialized(&initializedVariablesMap, variableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Variable " << variableName << " not initialized\n";
                  exit(1);
                } else {

                  if (isVariableDeclared(&arraysMap, variableName)) {
                    if (valueFormat1 == "number") {
                      long long arraySize = arraysMap[variableName];

                      if (currentArrayIndex < 0 || currentArrayIndex >= arraySize) {
                        std::cerr << "[ERROR] IndexArrayOutOfBoundsException: array " << variableName << " is size: " << arraySize << ", tried to access index " << currentArrayIndex << "\n";
                        exit(1);
                      }

                      pushCodeWithAddress("LOAD", variableAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                      pushCode("PUT");

                    } else {

                      pushCodeWithAddress("LOAD", variablesAddressesMap[variableName]);
                      pushCodeWithAddress("ADD",  arrayIdentifierAddress);
                      pushCodeWithAddress("STORE", 0);
                      pushCodeWithAddress("LOADI", 0);
                      pushCode("PUT");

                    }
                  } else {

                    pushCodeWithAddress("LOAD", variableAddress);
                    pushCode("PUT");
                  }
                }
               } else {
                 std::cerr << "Error [line "<< "]: Variable "<< (yyvsp[-1].string) <<" not declared!" << "\n";
                 exit(1);
               }
             }
#line 2242 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 821 "gram.ypp" /* yacc.c:1646  */
    {

                if (valueFormat1 == "number" && valueFormat2 == "number") {

                } else if (valueFormat1 == "variable" && valueFormat2 == "variable") {

                  pushCode("ZERO");
                  pushCodeWithAddress("LOAD", equationElementAddress);

                } else if (valueFormat1 == "number" && valueFormat2 == "array") {
                  // std::cout << "ARRAYVAR";

                  pushCodeWithAddress("LOAD", currentArrayAddress + currentArrayIndex + 1 );

                } else if (valueFormat1 == "array" && valueFormat2 == "array") {
                  // std::cout << "ARRAY";
                  pushCodeWithAddress("LOAD",  variablesAddressesMap[variableNameGlobal]);
                  pushCodeWithAddress("ADD",   arrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 10);
                  pushCodeWithAddress("LOADI", 10);
                }
              }
#line 2269 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 843 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 0);
               }
             }
#line 2291 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 860 "gram.ypp" /* yacc.c:1646  */
    {

              secondElementAddress                   = equationElementAddress;
              long long secondArrayIdentifierAddress = arrayIdentifierAddress;
              std::string secondElementName          = variableNameGlobal;

              std::string variableTypes[4];
              variableTypes[0] = expressionType[0];
              variableTypes[1] = expressionType2[0];
              variableTypes[2] = valueFormat1;
              variableTypes[3] = valueFormat2;

              std::string types[2];
              types[0] = determineDataType(variableTypes[0], variableTypes[1]);
              types[1] = determineDataType(variableTypes[2], variableTypes[3]);

              if (types[0] == "number" && types[1] == "number") {

                pushCodeWithAddress("ADD",   0);

              } else if (types[0] == "number" && types[1] == "variable") {

                pushCodeWithAddress("LOAD", secondElementAddress);
                pushCodeWithAddress("ADD",  0);

              } else if (types[0] == "variable" && types[1] == "number") {

                pushCodeWithAddress("STORE", 0);
                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("ADD",   0);

              } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("ADD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);

              } else if (types[0] == "arrayVar" && types[1] == "number") {

                pushCodeWithAddress("STORE", 0);
                pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("ADD",   0);

              } else if (types[0] == "number" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("ADD",  0);

              } else if (types[0] == "array" && types[1] == "variable") {

                pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 3);
                pushCodeWithAddress("LOADI", 3);
                pushCodeWithAddress("ADD", secondElementAddress);

              } else if (types[0] == "variable" && types[1] == "array") {

                pushCodeWithAddress("LOAD", firstElementAddress);
                pushCodeWithAddress("STORE", 0);
                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 3);
                pushCodeWithAddress("LOADI", 3);
                pushCodeWithAddress("ADD",   0);

              } else if (types[0] == "array" && types[1] == "array") {

                pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 3);
                pushCodeWithAddress("LOADI", 3);
                pushCodeWithAddress("STORE", 3);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 4);
                pushCodeWithAddress("LOADI", 4);

                pushCodeWithAddress("ADD", 3);

              } else if (types[0] == "array" && types[1] == "number") {

                pushCodeWithAddress("STORE", 0);
                pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",  arrayIdentifierAddress);
                pushCodeWithAddress("STORE", 3);
                pushCodeWithAddress("LOADI", 3);
                pushCodeWithAddress("ADD", 0);

              } else if (types[0] == "array" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 3);
                pushCodeWithAddress("LOADI", 3);
                pushCodeWithAddress("ADD", secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);

              } else if (types[0] == "number" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 3);
                pushCodeWithAddress("LOADI", 3);

                pushCodeWithAddress("ADD", 0);

              } else if (types[0] == "arrayVar" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("STORE", 0);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 3);
                pushCodeWithAddress("LOADI", 3);
                pushCodeWithAddress("ADD",   0);

              } else if (types[0] == "variable" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", firstElementAddress);
                pushCodeWithAddress("ADD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);

              } else if (types[0] == "arrayVar" && types[1] == "variable") {

                pushCodeWithAddress("LOAD", firstElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("ADD",  secondElementAddress);

              } else if (types[0] == "variable" && types[1] == "variable") {

                pushCodeWithAddress("LOAD", firstElementAddress);
                pushCodeWithAddress("STORE", 0);
                pushCodeWithAddress("LOAD", secondElementAddress);
                pushCodeWithAddress("ADD", 0);

              }
             }
#line 2432 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 996 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 0);
               }

             }
#line 2455 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 1013 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress                   = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName          = variableNameGlobal;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);


               if (types[0] == "number" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOAD",  0);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "number" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOAD",  0);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "variable" && types[1] == "number") {

                  pushCodeWithAddress("STORE", 1);
                  pushCodeWithAddress("LOAD",  firstElementAddress);
                  pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("SUB",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "arrayVar" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOAD",  firstElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "number" && types[1] == "arrayVar") {

                 pushCodeWithAddress("STORE", 0);
                 pushCodeWithAddress("SUB",   secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "array" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("SUB",   secondElementAddress);

               } else if (types[0] == "array" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 1);

                 pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 0);
                 pushCodeWithAddress("LOADI", 0);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "array" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 0);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   arrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("SUB",   0);

               } else if (types[0] == "array" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 0);
                 pushCodeWithAddress("LOADI", 0);
                 pushCodeWithAddress("SUB", secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "number" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 1);

                 pushCodeWithAddress("LOAD",  0);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "variable" && types[1] == "array") {

                 pushCodeWithAddress("LOAD", firstElementAddress);
                 pushCodeWithAddress("STORE", 0);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 1);

                 pushCodeWithAddress("LOAD",  0);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "arrayVar" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 1);

                 pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "variable" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD",  firstElementAddress);
                 pushCodeWithAddress("STORE", 0);
                 pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOAD",  0);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "arrayVar" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  secondElementAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOAD",  firstElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("STORE", 0);
                 pushCodeWithAddress("LOAD",  0);
                 pushCodeWithAddress("SUB",   1);

               } else if (types[0] == "variable" && types[1] == "variable") {
                pushCodeWithAddress("LOAD",  firstElementAddress);
                pushCodeWithAddress("STORE", 0);
                pushCodeWithAddress("LOAD",  secondElementAddress);
                pushCodeWithAddress("STORE", 1);
                pushCodeWithAddress("LOAD",  0);
                pushCodeWithAddress("SUB",  1);

               }
             }
#line 2616 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 1169 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }

             }
#line 2639 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 1186 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress                   = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName          = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               if (types[0] == "number" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);
                 performMultiplicationWithNumber((yyvsp[-3].string), 3);

               } else if (types[0] == "number" && types[1] == "variable") {

                  performMultiplicationWithNumber((yyvsp[-3].string), secondElementAddress);

               } else if (types[0] == "variable" && types[1] == "number") {

                  performMultiplicationWithNumber((yyvsp[0].string), firstElementAddress);

                } else if (types[0] == "number" && types[1] == "arrayVar") {

                  performMultiplicationWithNumber((yyvsp[-3].string), secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

                } else if (types[0] == "arrayVar" && types[1] == "number") {

                  performMultiplicationWithNumber((yyvsp[0].string), firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);

                } else if (types[0] == "number" && types[1] == "array") {
                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 1);
                  pushCodeWithAddress("LOADI", 1);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplicationWithNumber((yyvsp[-3].string), 3);

                } else if (types[0] == "array" && types[1] == "number") {

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                  pushCodeWithAddress("ADD",   arrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 1);
                  pushCodeWithAddress("LOADI", 1);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplicationWithNumber((yyvsp[0].string), 3);

                } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {
                  pushCodeWithAddress("LOAD", firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD", secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "array" && types[1] == "variable") {

                  pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                  pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 3);
                  pushCodeWithAddress("LOADI", 3);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD", secondElementAddress);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "array" && types[1] == "array") {

                  pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                  pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 3);
                  pushCodeWithAddress("LOADI", 3);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 3);
                  pushCodeWithAddress("LOADI", 3);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "array" && types[1] == "arrayVar") {

                  pushCodeWithAddress("LOAD", variablesAddressesMap[firstElementName]);
                  pushCodeWithAddress("ADD",  firstArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 3);
                  pushCodeWithAddress("LOADI", 3);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD", secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "variable" && types[1] == "array") {

                  pushCodeWithAddress("LOAD", firstElementAddress);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 3);
                  pushCodeWithAddress("LOADI", 3);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "arrayVar" && types[1] == "array") {

                  pushCodeWithAddress("LOAD", firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 3);
                  pushCodeWithAddress("LOADI", 3);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "variable" && types[1] == "arrayVar") {

                  pushCodeWithAddress("LOAD", firstElementAddress);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD", secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "arrayVar" && types[1] == "variable") {

                  pushCodeWithAddress("LOAD", firstElementAddress  + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD", secondElementAddress);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();

                } else if (types[0] == "variable" && types[1] == "variable") {

                  pushCodeWithAddress("LOAD",  firstElementAddress);
                  pushCodeWithAddress("STORE", 2);

                  pushCodeWithAddress("LOAD", secondElementAddress);
                  pushCodeWithAddress("STORE", 3);

                  performMultiplication();
                }
             }
#line 2809 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 1351 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }

             }
#line 2832 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 1368 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress                   = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName          = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               performDataAssignForDIVAndMOD(
                 types[0], firstElementAddress,  firstElementName,  arrayIndexOfFirstElement, firstArrayIdentifierAddress,
                 types[1], secondElementAddress, secondElementName, currentArrayIndex,        secondArrayIdentifierAddress);

               performMODOrDIV();
               pushCodeWithAddress("LOAD", 5);

             }
#line 2862 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 1393 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }
             }
#line 2884 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 1409 "gram.ypp" /* yacc.c:1646  */
    {
               secondElementAddress             = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName    = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               performDataAssignForDIVAndMOD(
                 types[0], firstElementAddress,  firstElementName,  arrayIndexOfFirstElement, firstArrayIdentifierAddress,
                 types[1], secondElementAddress, secondElementName, currentArrayIndex,        secondArrayIdentifierAddress);

               performMODOrDIV();

               pushCodeWithAddress("LOAD", 4);
             }
#line 2913 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 1435 "gram.ypp" /* yacc.c:1646  */
    {
                expressionType[0]  = valueFormat1;
                expressionType2[0] = valueFormat2;

                firstElementAddress         = equationElementAddress;
                arrayIndexOfFirstElement    = currentArrayIndex;
                firstElementName            = variableNameGlobal;
                firstArrayIdentifierAddress = arrayIdentifierAddress;

                std::string variableTypes[4];
                variableTypes[0] = expressionType[0];
                variableTypes[1] = expressionType2[0];
                std::string type = determineDataType(variableTypes[0], variableTypes[1]);
                if (type == "number") {
                  pushCodeWithAddress("STORE", 2);
                }

              }
#line 2936 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 1452 "gram.ypp" /* yacc.c:1646  */
    {

                secondElementAddress             = equationElementAddress;
                long long secondArrayIdentifierAddress = arrayIdentifierAddress;
                std::string secondElementName    = variableNameGlobal;
                long long arrayIndexOfSecondElement    = currentArrayIndex;

                std::string variableTypes[4];
                variableTypes[0] = expressionType[0];
                variableTypes[1] = expressionType2[0];
                variableTypes[2] = valueFormat1;
                variableTypes[3] = valueFormat2;

                std::string types[2];
                types[0] = determineDataType(variableTypes[0], variableTypes[1]);
                types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               computeElementsForEQAndNEQ(
                 types[0], firstElementAddress,  firstElementName,  arrayIndexOfFirstElement,  firstArrayIdentifierAddress,
                 types[1], secondElementAddress, secondElementName, arrayIndexOfSecondElement, secondArrayIdentifierAddress);

                pushCodeWithAddress("JZERO", numberOfCommands + 2);
                pushCodeWithAddress("JUMP",  JUMP_PLACEHOLDER_ADDRESS);
              }
#line 2965 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 1476 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }
             }
#line 2987 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 1492 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress                   = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName          = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               computeElementsForEQAndNEQ(
                 types[0], firstElementAddress,  firstElementName,  arrayIndexOfFirstElement,  firstArrayIdentifierAddress,
                 types[1], secondElementAddress, secondElementName, arrayIndexOfSecondElement, secondArrayIdentifierAddress);

               pushCodeWithAddress("JZERO", JUMP_PLACEHOLDER_ADDRESS);

             }
#line 3016 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 1516 "gram.ypp" /* yacc.c:1646  */
    {

               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }
             }
#line 3039 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 1533 "gram.ypp" /* yacc.c:1646  */
    {
               secondElementAddress             = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName    = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               if (types[0] == "number" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", 2);
                 pushCode("INC");
                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "number" && types[1] == "variable") {

                pushCodeWithAddress("LOAD", 2);
                pushCode("INC");

                pushCodeWithAddress("SUB", secondElementAddress);

               } else if (types[0] == "variable" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", firstElementAddress);
                 pushCode("INC");

                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD",  firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);
                 pushCode("INC");
                 pushCodeWithAddress("SUB",   secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "arrayVar" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);
                 pushCode("INC");
                 pushCodeWithAddress("SUB", 3);


               } else if (types[0] == "number" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", 2);
                 pushCode("INC");
                 pushCodeWithAddress("SUB",   secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "array" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCode("INC");

                 pushCodeWithAddress("SUB", secondElementAddress);



               } else if (types[0] == "array" && types[1] == "array") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCode("INC");

                 pushCodeWithAddress("SUB",   3);

               } else if (types[0] == "array" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCode("INC");

                 pushCodeWithAddress("SUB",   3);


               } else if (types[0] == "array" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCode("INC");

                 pushCodeWithAddress("SUB", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "number" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  2);
                 pushCode("INC");
                 pushCodeWithAddress("SUB", 3);

               } else if (types[0] == "variable" && types[1] == "array") {

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 1);
                  pushCodeWithAddress("LOADI", 1);
                  pushCodeWithAddress("STORE", 3);

                  pushCodeWithAddress("LOAD", firstElementAddress);
                  pushCode("INC");
                  pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "arrayVar" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                 pushCode("INC");

                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "variable" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", firstElementAddress);
                 pushCode("INC");

                 pushCodeWithAddress("SUB",  secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "arrayVar" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
                 pushCode("INC");

                 pushCodeWithAddress("SUB",  secondElementAddress);

               } else if (types[0] == "variable" && types[1] == "variable") {
                 pushCodeWithAddress("LOAD", firstElementAddress);
                 pushCode("INC");

                 pushCodeWithAddress("SUB", secondElementAddress);
               }

               pushCodeWithAddress("JZERO", numberOfCommands + 2);
               pushCodeWithAddress("JUMP",  JUMP_PLACEHOLDER_ADDRESS);
             }
#line 3213 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 1702 "gram.ypp" /* yacc.c:1646  */
    {

               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }
             }
#line 3236 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 1719 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress                   = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName          = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               if (types[0] == "number" && types[1] == "number") {

                 pushCode("INC");
                 pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "number" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCode("INC");
                 pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "variable" && types[1] == "number") {

                 pushCode("INC");
                 pushCodeWithAddress("SUB", firstElementAddress);

               } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                 pushCode("INC");

                 pushCodeWithAddress("SUB",  firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "arrayVar" && types[1] == "number") {

                 pushCode("INC");
                 pushCodeWithAddress("SUB", firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "number" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                pushCode("INC");

                pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "array" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCode("INC");
                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "array" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 1);
                pushCodeWithAddress("LOADI", 1);
                pushCodeWithAddress("STORE", 3);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 1);
                pushCodeWithAddress("LOADI", 1);
                pushCode("INC");

                pushCodeWithAddress("SUB",   3);

               } else if (types[0] == "array" && types[1] == "number") {

                 pushCode("INC");
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 4);

                 pushCodeWithAddress("LOAD",  3);
                 pushCodeWithAddress("SUB",   4);

               } else if (types[0] == "array" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                 pushCode("INC");
                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "number" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCode("INC");

                 pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "variable" && types[1] == "array") {

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 1);
                  pushCodeWithAddress("LOADI", 1);
                  pushCode("INC");

                  pushCodeWithAddress("SUB",  firstElementAddress);

               } else if (types[0] == "arrayVar" && types[1] == "array") {

                 pushCodeWithAddress("LOAD", variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",  secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCode("INC");

                 pushCodeWithAddress("SUB", firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "variable" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                pushCode("INC");
                pushCodeWithAddress("SUB", firstElementAddress);

               } else if (types[0] == "arrayVar" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCode("INC");
                 pushCodeWithAddress("SUB", firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "variable" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCode("INC");
                 pushCodeWithAddress("SUB",  firstElementAddress);

               }

               pushCodeWithAddress("JZERO", numberOfCommands + 2);
               pushCodeWithAddress("JUMP",  JUMP_PLACEHOLDER_ADDRESS);

             }
#line 3401 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 1879 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }
              }
#line 3423 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 1895 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress             = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName    = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               if (types[0] == "number" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", 2);
                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "number" && types[1] == "variable") {


                pushCodeWithAddress("LOAD", firstElementAddress);

                pushCodeWithAddress("SUB", secondElementAddress);

               } else if (types[0] == "variable" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", firstElementAddress);

                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD",  firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("SUB",   secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "arrayVar" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("SUB", 3);


               } else if (types[0] == "number" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", 2);
                 pushCodeWithAddress("SUB",   secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "array" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);

                 pushCodeWithAddress("SUB", secondElementAddress);

               } else if (types[0] == "array" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);

                 pushCodeWithAddress("SUB",   3);

               } else if (types[0] == "array" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);

                 pushCodeWithAddress("SUB",   3);

               } else if (types[0] == "array" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);

                 pushCodeWithAddress("SUB", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "number" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  2);
                 pushCodeWithAddress("SUB", 3);

               } else if (types[0] == "variable" && types[1] == "array") {

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 1);
                  pushCodeWithAddress("LOADI", 1);
                  pushCodeWithAddress("STORE", 3);

                  pushCodeWithAddress("LOAD", firstElementAddress);
                  pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "arrayVar" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "variable" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", firstElementAddress);
                 pushCodeWithAddress("SUB",  secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "arrayVar" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

                 pushCodeWithAddress("SUB",  secondElementAddress);


               } else if (types[0] == "variable" && types[1] == "variable") {
                 pushCodeWithAddress("LOAD", firstElementAddress);
                 pushCodeWithAddress("SUB", secondElementAddress);
               }

               pushCodeWithAddress("JZERO", numberOfCommands + 2);
               pushCodeWithAddress("JUMP",  JUMP_PLACEHOLDER_ADDRESS);
             }
#line 3583 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 2051 "gram.ypp" /* yacc.c:1646  */
    {
               expressionType[0]  = valueFormat1;
               expressionType2[0] = valueFormat2;

               firstElementAddress         = equationElementAddress;
               arrayIndexOfFirstElement    = currentArrayIndex;
               firstElementName            = variableNameGlobal;
               firstArrayIdentifierAddress = arrayIdentifierAddress;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               std::string type = determineDataType(variableTypes[0], variableTypes[1]);
               if (type == "number") {
                 pushCodeWithAddress("STORE", 2);
               }
             }
#line 3605 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 2067 "gram.ypp" /* yacc.c:1646  */
    {

               secondElementAddress             = equationElementAddress;
               long long secondArrayIdentifierAddress = arrayIdentifierAddress;
               std::string secondElementName    = variableNameGlobal;
               long long arrayIndexOfSecondElement    = currentArrayIndex;

               std::string variableTypes[4];
               variableTypes[0] = expressionType[0];
               variableTypes[1] = expressionType2[0];
               variableTypes[2] = valueFormat1;
               variableTypes[3] = valueFormat2;

               std::string types[2];
               types[0] = determineDataType(variableTypes[0], variableTypes[1]);
               types[1] = determineDataType(variableTypes[2], variableTypes[3]);

               if (types[0] == "number" && types[1] == "number") {

                 pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "number" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "variable" && types[1] == "number") {

                 pushCodeWithAddress("SUB", firstElementAddress);

               } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("SUB",  firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "arrayVar" && types[1] == "number") {

                 pushCodeWithAddress("SUB", firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "number" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "array" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "array" && types[1] == "array") {

                pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 1);
                pushCodeWithAddress("LOADI", 1);
                pushCodeWithAddress("STORE", 3);

                pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                pushCodeWithAddress("STORE", 1);
                pushCodeWithAddress("LOADI", 1);

                pushCodeWithAddress("SUB",   3);

               } else if (types[0] == "array" && types[1] == "number") {

                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 4);

                 pushCodeWithAddress("LOAD",  3);
                 pushCodeWithAddress("SUB",   4);

               } else if (types[0] == "array" && types[1] == "arrayVar") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
                 pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);
                 pushCodeWithAddress("STORE", 3);

                 pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                 pushCodeWithAddress("SUB",  3);

               } else if (types[0] == "number" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);

                 pushCodeWithAddress("SUB", 2);

               } else if (types[0] == "variable" && types[1] == "array") {

                  pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                  pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                  pushCodeWithAddress("STORE", 1);
                  pushCodeWithAddress("LOADI", 1);

                  pushCodeWithAddress("SUB",  firstElementAddress);

               } else if (types[0] == "arrayVar" && types[1] == "array") {

                 pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
                 pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
                 pushCodeWithAddress("STORE", 1);
                 pushCodeWithAddress("LOADI", 1);

                 pushCodeWithAddress("SUB", firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "variable" && types[1] == "arrayVar") {

                pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
                pushCodeWithAddress("SUB", firstElementAddress);

               } else if (types[0] == "arrayVar" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD",  secondElementAddress);
                 pushCodeWithAddress("SUB", firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

               } else if (types[0] == "variable" && types[1] == "variable") {

                 pushCodeWithAddress("LOAD", secondElementAddress);
                 pushCodeWithAddress("SUB",  firstElementAddress);
               }

               pushCodeWithAddress("JZERO", numberOfCommands + 2);
               pushCodeWithAddress("JUMP",  JUMP_PLACEHOLDER_ADDRESS);

             }
#line 3751 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 2209 "gram.ypp" /* yacc.c:1646  */
    {
                generateNumber((yyvsp[0].string));
                valueFormat1 = "number";
                valueFormat2 = "number";
             }
#line 3761 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 2214 "gram.ypp" /* yacc.c:1646  */
    {
               std::string variableName = (yyvsp[0].string);

               if (!isVariableDeclared(&variablesAddressesMap, variableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Variable '" << variableName << "' is not declared! \n";
                  exit(1);
               } else {
                if(valueFormat2 != "array" && !isVariableInitialized(&initializedVariablesMap, variableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Variable '" << variableName << "' is declared but not initialized!\n";
                  exit(1);
                } else {

                }
               }
             }
#line 3781 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 2230 "gram.ypp" /* yacc.c:1646  */
    {
              valueFormat1 = "variable";
              valueFormat2 = "variable";
              std::string variableName = (yyvsp[0].string);
              variableNameGlobal = (yyvsp[0].string);

              if (!isVariableDeclared(&variablesAddressesMap, variableName)) {
                std::cerr << "Error [line "<< yylineno <<  "]: " << " variable '" << variableName << "' is not declared! \n";
                exit(1);
              } else {
                if (isVariableDeclared(&arraysMap, variableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Inappropriate use of '" << variableName <<"'! \n";
                  exit(1);
                }

                equationElementAddress = variablesAddressesMap[(yyvsp[0].string)];
              }
            }
#line 3804 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 2248 "gram.ypp" /* yacc.c:1646  */
    {

              std::string variableName             = (yyvsp[-3].string);
              std::string arrayAddressVariableName = (yyvsp[-1].string);


              if (!isVariableDeclared(&variablesAddressesMap, variableName)) {
                std::cerr << "Error [line "<< yylineno <<  "]: " << "variable '" << variableName << "' is not declared! \n";
                exit(1);
              } else {

                if (!isVariableDeclared(&arraysMap, variableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Inappropriate use of '" << variableName << "'! \n";
                  exit(1);
                }

                if (!isVariableDeclared(&variablesAddressesMap, arrayAddressVariableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Trying to access array '"<< variableName << "' index via variable '" << arrayAddressVariableName << "' which is not declared! \n";
                  exit(1);
                }

                if (!isVariableInitialized(&initializedVariablesMap, arrayAddressVariableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Trying to access array '"<< variableName << "' index via variable '" << arrayAddressVariableName << "' which is not initialized! \n";
                  exit(1);
                }

                valueFormat1            = "array";
                valueFormat2            = "array";
                variableNameGlobal      = (yyvsp[-3].string);
                equationElementAddress  = variablesAddressesMap[(yyvsp[-3].string)];
                arrayIdentifierAddress  = variablesAddressesMap[(yyvsp[-1].string)]; // is only an address of a variable, not a value!!!
              }

           }
#line 3843 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 2282 "gram.ypp" /* yacc.c:1646  */
    {

              std::string variableName = (yyvsp[-3].string);

              if (!isVariableDeclared(&variablesAddressesMap, variableName)) {
                std::cerr << "Error [line "<< yylineno <<  "]: "  << "variable '" << variableName << "' is not declared! \n";
                exit(1);
              } else {

                if (!isVariableDeclared(&arraysMap, variableName)) {
                  std::cerr << "Error [line "<< yylineno <<  "]: " << "Inappropriate use of '" << variableName << "'! \n";
                  exit(1);
                }

                valueFormat1 = "number";
                valueFormat2 = "array";

                variableNameGlobal = (yyvsp[-3].string);
                currentArrayIndex = atoll((yyvsp[-1].string));

                currentArrayAddress     = variablesAddressesMap[(yyvsp[-3].string)];
                equationElementAddress  = variablesAddressesMap[(yyvsp[-3].string)];
                long long searchedIndex = variablesAddressesMap[(yyvsp[-3].string)] + currentArrayIndex;
                arrayIdentifierAddress  = variablesAddressesMap[(yyvsp[-1].string)]; // is only an address of a variable, not a value!!!
              }
             }
#line 3874 "gram.tab.cpp" /* yacc.c:1646  */
    break;


#line 3878 "gram.tab.cpp" /* yacc.c:1646  */
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
#line 2309 "gram.ypp" /* yacc.c:1906  */


void declareAVariable(std::string name) {
  if (!isVariableDeclared(&variablesAddressesMap, name)) {
    currentMemoryIndex++;
    variablesAddressesMap[name] = currentMemoryIndex;
    initializedVariablesMap[name] = false;

  } else {
    std::cerr << "Error [line "<< yylineno <<  "]: "  << "Variable '" << name << "' already declared!" << "\n";
    exit(1);
  }
}

void displayArraySizesMap(std::map<std::string, long long>* arraySizesMap) {
  for(auto elem : *arraySizesMap) {
     std::cout << elem.first << " " << elem.second << "\n";
  }
}

void declareAnArray(std::string name, long long arraySize) {
  if (!isVariableDeclared(&variablesAddressesMap, name)) {

    currentMemoryIndex++;

    long long arrayStartPoint = ++currentMemoryIndex;
    generateNumber(std::to_string(arrayStartPoint));
    pushCodeWithAddress("STORE", --arrayStartPoint);

    currentMemoryIndex = currentMemoryIndex - 1;
    variablesAddressesMap[name] = currentMemoryIndex; // the beggining of an array
    arraysMap[name] = arraySize;
    currentMemoryIndex =  currentMemoryIndex + arraySize; //without the first one

  } else {
    std::cerr << "Error [line "<< yylineno <<  "]: " << "Array " << name << " already defined!" << "\n";
    exit(1);
  }
}

bool isVariableDeclared(std::map<std::string, long long> *mapToSearch, std::string name) {
  if ( (*mapToSearch).find(name) == (*mapToSearch).end() ) {
    return false;
  } else {
    return true;
  }
}

void finish() {
  pushCode("HALT");
  displayCommandVector(&commandsVector);
}

void displayMap(std::map<std::string, int>* mapToDisplay) {
  for(auto elem : *mapToDisplay) {
     std::cout << elem.first << " " << elem.second << "\n";
  }
}

void displayInitializedMap(std::map<std::string, bool>* map) {
  for(auto elem : *map) {
     std::cout << elem.first << " " << elem.second << "\n";
  }
}

bool isVariableInitialized(std::map<std::string, bool>* initializedMap, std::string variableName) {
  if ( (*initializedMap).find(variableName) == (*initializedMap).end() ) { // not found
    return false;
  } else { // found
    if ((*initializedMap)[variableName] == true) { //initialized
      return true;
    } else { // not initialized
      return false;
    }
  }
}

void displayCommandVector(std::vector<std::string> *commands) {
  long long vectorSize = commands->size();
  for (long long i=0; i < vectorSize; i++) {
    std::cout << commands->at(i) << "\n";
  }
}

/*===================================================*/
/*                 GENERATING CODE                   */
/*===================================================*/

void pushCode(std::string opCode) {
  commandsVector.push_back(opCode);
  numberOfCommands++;
}

void pushCodeWithAddress(std::string opCode, long long number) {
  std::string space = " ";
  std::string whole = opCode + space + std::to_string(number);
  commandsVector.push_back(whole);
  if (opCode == "JUMP" ) {
    if (number == JUMP_PLACEHOLDER_ADDRESS) {
      std::pair<int, int> newJumpPosition = std::make_pair(numberOfCommands, numberOfCommands);
      jumpStack.emplace(newJumpPosition);
    } else if (number == ELSE_PLACEHOLDER_ADDRESS) {
      elseStack.emplace(numberOfCommands);
    }
  } else if (opCode == "JZERO" && number == JUMP_PLACEHOLDER_ADDRESS) {
    std::pair<int, int> newJumpPosition = std::make_pair(numberOfCommands, numberOfCommands);
    jumpStack.emplace(newJumpPosition);
  }
  numberOfCommands++;
}

void performMultiplicationWithNumber(std::string number, long long variableAddress) {

  std::vector<long long> binaryRepresentationStack;
  long long decimalNumber  = std::stoi(number);

  binaryRepresentationStack = getBinaryRepresentation(decimalNumber);
  pushCode("ZERO");

  long long binaryNumberLength = binaryRepresentationStack.size();

  for(long long i = 0; i < binaryNumberLength; i++) {
    if (binaryRepresentationStack[i] == 1) {
      pushCodeWithAddress("ADD", variableAddress);
    }
    if (i < binaryNumberLength -1) {
      pushCode("SHL");
    }
  }
}

void computeElementsForEQAndNEQ(
   std::string firstType,  long long firstElementAddress,  std::string firstElementName,  long long arrayIndexOfFirstElement,  long long firstArrayIdentifierAddress,
   std::string secondType, long long secondElementAddress, std::string secondElementName, long long arrayIndexOfSecondElement, long long secondArrayIdentifierAddress) {

    std::string types[2];
    types[0] = firstType;
    types[1] = secondType;

  if (types[0] == "number" && types[1] == "number") {

    pushCodeWithAddress("STORE", 3);
    pushCodeWithAddress("LOAD",  2);
    pushCodeWithAddress("SUB",   3);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", 3);
    pushCodeWithAddress("SUB",  2);

    pushCodeWithAddress("ADD",   0);

  } else if (types[0] == "number" && types[1] == "variable") {

    //checking a - b
    pushCodeWithAddress("LOAD",  2);
    pushCodeWithAddress("SUB",   secondElementAddress);
    pushCodeWithAddress("STORE", 0);
    pushCodeWithAddress("LOAD", secondElementAddress);
    pushCodeWithAddress("SUB",  2);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "variable" && types[1] == "number") {

    pushCodeWithAddress("STORE", 3);
    pushCodeWithAddress("LOAD",  firstElementAddress);
    pushCodeWithAddress("SUB",   3);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", 3);
    pushCodeWithAddress("SUB",  firstElementAddress);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {
    // compute a - b
    pushCodeWithAddress("LOAD",  firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB",   secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 0);

    //compute b - a
    pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB",  firstElementAddress  + arrayIndexOfFirstElement  + ARRAY_INDEX_OFFSET);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "arrayVar" && types[1] == "number") {

    pushCodeWithAddress("STORE", 3);

    pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB",   3);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", 3);
    pushCodeWithAddress("SUB",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "number" && types[1] == "arrayVar") {

    pushCodeWithAddress("LOAD",  2);
    pushCodeWithAddress("SUB",   secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB", 2);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "array" && types[1] == "variable") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);

    pushCodeWithAddress("STORE", 3);
    pushCodeWithAddress("LOAD",  3);

    pushCodeWithAddress("SUB",   secondElementAddress);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", secondElementAddress);
    pushCodeWithAddress("SUB",  3);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "array" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);

    pushCodeWithAddress("STORE", 3);

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 2);
    pushCodeWithAddress("LOADI", 2);
    pushCodeWithAddress("STORE", 4);

    pushCodeWithAddress("LOAD",  3);
    pushCodeWithAddress("SUB",   4);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", 4);
    pushCodeWithAddress("SUB",  3);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "array" && types[1] == "number") {

    pushCodeWithAddress("STORE", 4);

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);

    pushCodeWithAddress("STORE", 3);
    pushCodeWithAddress("LOAD",  3);

    pushCodeWithAddress("SUB",   4);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", 4);
    pushCodeWithAddress("SUB",  3);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "array" && types[1] == "arrayVar") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);
    pushCodeWithAddress("LOAD",  3);
    pushCodeWithAddress("SUB",  secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB",  3);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "number" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);

    pushCodeWithAddress("LOAD",  2);
    pushCodeWithAddress("SUB",   3);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD",  3);
    pushCodeWithAddress("SUB",   2);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "variable" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);

    pushCodeWithAddress("LOAD",  firstElementAddress);
    pushCodeWithAddress("SUB",   3);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD",  3);
    pushCodeWithAddress("SUB",   firstElementAddress);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "arrayVar" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);

    pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB",   3);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD",  3);
    pushCodeWithAddress("SUB",   firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "variable" && types[1] == "arrayVar") {

    pushCodeWithAddress("LOAD", firstElementAddress);
    pushCodeWithAddress("SUB",  secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", secondElementAddress + arrayIndexOfSecondElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB",  firstElementAddress);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "arrayVar" && types[1] == "variable") {

    pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("SUB",   secondElementAddress);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD", secondElementAddress);
    pushCodeWithAddress("SUB",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);

    pushCodeWithAddress("ADD", 0);

  } else if (types[0] == "variable" && types[1] == "variable") {

    pushCodeWithAddress("LOAD",  firstElementAddress);
    pushCodeWithAddress("SUB",   secondElementAddress);
    pushCodeWithAddress("STORE", 0);

    pushCodeWithAddress("LOAD",  secondElementAddress);
    pushCodeWithAddress("SUB",   firstElementAddress);

    pushCodeWithAddress("ADD", 0);
  }
}

void performMultiplication() {
  /*
  [2] - a
  [3] - b
  [4] - c
  */

  pushCode("ZERO");
  pushCodeWithAddress("STORE", 4);

  long long loop = numberOfCommands;
  pushCodeWithAddress("LOAD",  3);

  pushCodeWithAddress("JZERO", numberOfCommands + 14);

  pushCodeWithAddress("LOAD", 3);
  pushCodeWithAddress("JODD", numberOfCommands + 2);
  /* if b % 2 == 1 */
  pushCodeWithAddress("JUMP", numberOfCommands + 4);

  pushCodeWithAddress("LOAD",  4);
  pushCodeWithAddress("ADD",   2);
  pushCodeWithAddress("STORE", 4);
  /* c = c + a; */

  pushCodeWithAddress("LOAD", 3);
  pushCode("SHR");
  pushCodeWithAddress("STORE", 3);
  /* b = b / 2; */

  pushCodeWithAddress("LOAD", 2);
  pushCode("SHL");
  pushCodeWithAddress("STORE", 2);
  /* a = a * 2; */

  pushCodeWithAddress("JUMP", loop);
  pushCodeWithAddress("LOAD", 4);
}

std::vector<long long> getBinaryRepresentation(long long decimalNumber) {
  std::vector<long long> binaryRepresentationStack;

  while(decimalNumber > 0) {
    if (decimalNumber % 2 == 0) {
      binaryRepresentationStack.insert(binaryRepresentationStack.begin(), 0);
    } else {
      binaryRepresentationStack.insert(binaryRepresentationStack.begin(), 1);
    }
    decimalNumber = decimalNumber / 2;
  }
  return binaryRepresentationStack;
}

void generateNumber(std::string number) {

  std::vector<long long> binaryRepresentationStack;
  long long decimalNumber2 = std::stoi(number);
  long long decimalNumber  = std::stoi(number);

  binaryRepresentationStack = getBinaryRepresentation(decimalNumber);

  pushCode("ZERO");

  long long binaryNumberLength = binaryRepresentationStack.size();

  for(long long i = 0; i < binaryNumberLength; i++) {
    if (binaryRepresentationStack[i] == 1) {
      pushCode("INC");
    }
    if (i < binaryNumberLength -1) {
      pushCode("SHL");
    }
  }
}

void performDataAssignForDIVAndMOD(
  std::string firstType,  long long firstElementAddress,  std::string firstElementName,  long long arrayIndexOfFirstElement, long long firstArrayIdentifierAddress,
  std::string secondType, long long secondElementAddress, std::string secondElementName, long long currentArrayIndex,        long long secondArrayIdentifierAddress) {

  std::string types[2];
  types[0] = firstType;
  types[1] = secondType;

  if (types[0] == "number" && types[1] == "number") {

    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "number" && types[1] == "variable") {

    pushCodeWithAddress("LOAD", secondElementAddress);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "variable" && types[1] == "number") {

    pushCodeWithAddress("STORE", 3);

    pushCodeWithAddress("LOAD",  firstElementAddress);
    pushCodeWithAddress("STORE", 2);

  } else if (types[0] == "arrayVar" && types[1] == "arrayVar") {

    pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "arrayVar" && types[1] == "number") {

    pushCodeWithAddress("STORE", 3);
    pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 2);

  } else if (types[0] == "number" && types[1] == "arrayVar") {

    pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "array" && types[1] == "variable") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD", secondElementAddress);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "array" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "array" && types[1] == "number") {

    pushCodeWithAddress("STORE", 3);

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 2);

  } else if (types[0] == "array" && types[1] == "arrayVar") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[firstElementName]);
    pushCodeWithAddress("ADD",   firstArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",   secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "number" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "variable" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  firstElementAddress);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "arrayVar" && types[1] == "array") {

    pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",  variablesAddressesMap[secondElementName]);
    pushCodeWithAddress("ADD",   secondArrayIdentifierAddress);
    pushCodeWithAddress("STORE", 1);
    pushCodeWithAddress("LOADI", 1);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "variable" && types[1] == "arrayVar") {

    pushCodeWithAddress("LOAD",  firstElementAddress);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",  secondElementAddress + currentArrayIndex + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "arrayVar" && types[1] == "variable") {

    pushCodeWithAddress("LOAD",  firstElementAddress + arrayIndexOfFirstElement + ARRAY_INDEX_OFFSET);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",  secondElementAddress);
    pushCodeWithAddress("STORE", 3);

  } else if (types[0] == "variable" && types[1] == "variable") {

    pushCodeWithAddress("LOAD",  firstElementAddress);
    pushCodeWithAddress("STORE", 2);

    pushCodeWithAddress("LOAD",  secondElementAddress);
    pushCodeWithAddress("STORE", 3);
  }
}

void performMODOrDIV() {

  pushCodeWithAddress("LOAD", 3);
  pushCodeWithAddress("JZERO", numberOfCommands + 39);
  pushCodeWithAddress("STORE", 7);
  /* aux = b */

  pushCode("ZERO");
  pushCodeWithAddress("STORE", 5);
  pushCodeWithAddress("STORE", 6);

  pushCodeWithAddress("LOAD",  2);
  pushCodeWithAddress("STORE", 4);

  long long computeN = numberOfCommands;
  pushCodeWithAddress("LOAD",  7);
  pushCode("SHL");
  pushCodeWithAddress("STORE", 7);
  /* aux = aux << 1; */

  pushCodeWithAddress("LOAD",  6);
  pushCode("INC");
  pushCodeWithAddress("STORE", 6);
  /* n++; */

  pushCodeWithAddress("LOAD",  7);
  pushCodeWithAddress("SUB",   2);

  pushCodeWithAddress("JZERO", computeN);

  long long secondLoop = numberOfCommands;

  pushCodeWithAddress("LOAD",  6);
  pushCodeWithAddress("JZERO", numberOfCommands + 21);
  /*n > 0 */

  pushCodeWithAddress("LOAD",  7);
  pushCode("SHR");
  pushCodeWithAddress("STORE", 7);
  /* aux = aux >> 1 */

  pushCodeWithAddress("LOAD",  6);
  pushCode("DEC");
  pushCodeWithAddress("STORE", 6);
  /* n-- */

  pushCodeWithAddress("LOAD",  5);
  pushCode("SHL");
  pushCodeWithAddress("STORE", 5);
  /* q = q << 1; */

  pushCodeWithAddress("LOAD",  7);
  pushCodeWithAddress("SUB",   4);
  pushCodeWithAddress("JZERO", numberOfCommands + 2);
  pushCodeWithAddress("JUMP",  numberOfCommands + 7);
  /* if (r >= aux) */

  pushCodeWithAddress("LOAD",  4);
  pushCodeWithAddress("SUB",   7);
  pushCodeWithAddress("STORE", 4);
  /* r = r - aux; */

  pushCodeWithAddress("LOAD",  5);
  pushCode("INC");
  pushCodeWithAddress("STORE", 5);

  pushCodeWithAddress("JUMP", secondLoop);
}

void changeJumpValue() {
  std::string placeholder = std::to_string(JUMP_PLACEHOLDER_ADDRESS);
  long long jumpStackSize = jumpStack.size();

  std::pair<int,int> topElement = jumpStack.top();
  jumpStack.pop();
  long long destinationAddress = topElement.first;
  long long destinationValue   = numberOfCommands;

  long long finishIndex                    = commandsVector[destinationAddress].length() - placeholder.length(); // JUMP_-3000, usuwam 5 ostatnich znaków i mam JUMP_[   ]
  std::string address                = std::to_string(destinationValue);
  commandsVector[destinationAddress] = commandsVector[destinationAddress].substr(0, finishIndex) + address;
}

void changeElseValue(long long value) {
  std::string placeholder = std::to_string(JUMP_PLACEHOLDER_ADDRESS);

  if (elseStack.size() > 0) {
    long long topElement = elseStack.top();
    elseStack.pop();
    long long destinationAddress = topElement;
    long long destinationValue   = value;

    long long finishIndex                    = commandsVector[destinationAddress].length() - placeholder.length(); // JUMP_-3000, usuwam 5 ostatnich znaków i mam JUMP_[   ]
    std::string address                = std::to_string(destinationValue);
    commandsVector[destinationAddress] = commandsVector[destinationAddress].substr(0, finishIndex) + address;
  }
}

std::string determineDataType(std::string a, std::string b) {
  if (a == "number" && b == "number") {
    return "number";
  } else if(a == "variable" && b == "variable") {
    return "variable";
  } else if(a == "array" && b == "array") {
    return "array";
  } else {
    return "arrayVar"; //array with a number e.g. a[1]
  }
}

long long computeRequiredMemoryCell(std::string variableName, long long currentArrayIndex) {

  long long startingIndex = variablesAddressesMap[variableName];
  long long searchedIndex = startingIndex + currentArrayIndex;
  return searchedIndex + ARRAY_INDEX_OFFSET;
}

void freeAll() {

}

int main() {
  yyparse();
  return 0;
}

void yyerror (char *msg) {
    std::cerr << "Error [line "<< yylineno <<  "]: Syntax error!\n";
    exit(1);
}
