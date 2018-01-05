/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

union YYSTYPE
{
#line 130 "gram.ypp" /* yacc.c:1909  */

    char* string;
    long long num;

#line 96 "gram.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_TAB_HPP_INCLUDED  */
