#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TEXTLEN 512	// Length of symbols in input
#define NSYMBOLS 1024 // number of symbol table entries

// Token Types
enum {
	TOKEN_EOF,
	TOKEN_PLUS, TOKEN_MINUS,
	TOKEN_ASTAR, TOKEN_SLASH,

	TOKEN_EQUALS, // ==
	TOKEN_NE, // !=

	TOKEN_LT, TOKEN_GT, //  <, >
	TOKEN_LE, TOKEN_GE, //  <=, >=

	TOKEN_INTLIT, // interger literal. この場合は構造体tokenのintvalueに値が入る
	TOKEN_SEMI, // ;
	TOKEN_ASSIGN, // =
	TOKEN_IDENT, // hoge

	// keywords
	TOKEN_PRINT,
	TOKEN_INT
};

// Token structure
struct token {
	int token;
	int intvalue;
};
