/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_TCPKALI_EXPR_Y_H_INCLUDED
# define YY_YY_TCPKALI_EXPR_Y_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     TOK_ws = 258,
     TOK_raw = 259,
     TOK_ws_opcode = 260,
     TOK_ws_reserved_flag = 261,
     TOK_global = 262,
     TOK_connection = 263,
     TOK_ptr = 264,
     TOK_uid = 265,
     TOK_regex = 266,
     TOK_ellipsis = 267,
     string_token = 268,
     class_range_token = 269,
     repeat_range_token = 270,
     quoted_string = 271,
     filename = 272,
     integer = 273
   };
#endif
/* Tokens.  */
#define END 0
#define TOK_ws 258
#define TOK_raw 259
#define TOK_ws_opcode 260
#define TOK_ws_reserved_flag 261
#define TOK_global 262
#define TOK_connection 263
#define TOK_ptr 264
#define TOK_uid 265
#define TOK_regex 266
#define TOK_ellipsis 267
#define string_token 268
#define class_range_token 269
#define repeat_range_token 270
#define quoted_string 271
#define filename 272
#define integer 273



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 21 "tcpkali_expr_y.y"

    tk_expr_t   *tv_expr;
    tregex      *tv_regex;
    long         tv_long;
    struct {
        char  *buf;
        size_t len;
    } tv_string;
    struct {
        unsigned char from;
        unsigned char to;
    } tv_class_range;
    struct {
        unsigned char from;
        unsigned char to;
    } tv_repeat_range;
    enum ws_frame_opcode tv_opcode;
    char  tv_char;


/* Line 2058 of yacc.c  */
#line 116 "tcpkali_expr_y.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (tk_expr_t **param);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_TCPKALI_EXPR_Y_H_INCLUDED  */
