/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    RW_CREATE = 258,
    RW_DROP = 259,
    RW_TABLE = 260,
    RW_TABLES = 261,
    RW_SHOW = 262,
    RW_DESC = 263,
    RW_INDEX = 264,
    RW_LOAD = 265,
    RW_SET = 266,
    RW_HELP = 267,
    RW_PRINT = 268,
    RW_EXIT = 269,
    RW_SELECT = 270,
    RW_FROM = 271,
    RW_WHERE = 272,
    RW_INSERT = 273,
    RW_DELETE = 274,
    RW_UPDATE = 275,
    RW_AND = 276,
    RW_INTO = 277,
    RW_VALUES = 278,
    T_EQ = 279,
    T_LT = 280,
    T_LE = 281,
    T_GT = 282,
    T_GE = 283,
    T_NE = 284,
    T_EOF = 285,
    NOTOKEN = 286,
    T_INT = 287,
    T_REAL = 288,
    T_STRING = 289,
    T_NULL = 290,
    T_QSTRING = 291,
    T_SHELL_CMD = 292
  };
#endif
/* Tokens.  */
#define RW_CREATE 258
#define RW_DROP 259
#define RW_TABLE 260
#define RW_TABLES 261
#define RW_SHOW 262
#define RW_DESC 263
#define RW_INDEX 264
#define RW_LOAD 265
#define RW_SET 266
#define RW_HELP 267
#define RW_PRINT 268
#define RW_EXIT 269
#define RW_SELECT 270
#define RW_FROM 271
#define RW_WHERE 272
#define RW_INSERT 273
#define RW_DELETE 274
#define RW_UPDATE 275
#define RW_AND 276
#define RW_INTO 277
#define RW_VALUES 278
#define T_EQ 279
#define T_LT 280
#define T_LE 281
#define T_GT 282
#define T_GE 283
#define T_NE 284
#define T_EOF 285
#define NOTOKEN 286
#define T_INT 287
#define T_REAL 288
#define T_STRING 289
#define T_NULL 290
#define T_QSTRING 291
#define T_SHELL_CMD 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 47 "parse.y" /* yacc.c:1909  */

    int ival;
    CompOp cval;
    float rval;
    char *sval;
    NODE *n;

#line 136 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
