/*
 * Matan Gazit
 * CS4280
 * 03/08/21
 * 
 * token.h
 */

#ifndef TOKEN_H
#define TOKEN_H

#include <string>

using namespace std; // for readability

enum tokenID {
	//Standard Tokens
	ident_tk; // identifier token
	num_tk; // number token
	unders_tk; // underscore
	eof_tk; // end of file token

	//Keyword Tokens
	begin_tk;
	end_tk;
	whole_tk;
	loop_tk;
	void_tk;
	getter_tk;
	outter_tk;
	exit_tk;
	main_tk;
	if_tk;
	then_tk;
	assign_tk;
	data_tk;
	proc_tk;

	//Operator Tokens
	equals_tk;
	greater_than_tk;
	less_than_tk;
	equality_tk;
	colon_tk;
	assignment_tk;
	plus_tk;
	minus_tk;
	mult_tk;
	div_tk;
	mod_tk;
	dot_tk;
	l_paren_tk;
	r_paren_tk;
	comma_tk;
	l_curly_tk;
	r_curly_tk;
	semi_colon_tk;
	l_square_tk;
	r_square_tk;
};

const string tokenNames[] = {
	"Identifier", "Number",
	"End of file", "Begin-KW",
	"End-KW", "Whole-KW",
	"Loop-KW", "Void-KW",
	"Getter-KW", "Outter-KW",
	"Exit-KW", "Main-KW",
	"If-KW", "Then-KW",
	"Assign-KW", "Data-KW",
	"Proc-KW", "Equals-OP",
	"Greater-Than-OP", "Less-Than-OP",
	"Equality-OP", "Colon-OP",
	"Assignment-OP", "Plus-OP",
	"Minus-OP", "Mult-OP",
	"Div-OP", "Mod-OP",
	"Dot-OP", "L-Paren-OP",
	"R-Paren-OP", "Comma-OP",
	"L-Curly-OP", "R-Curly-OP",
	"Semi-Colon-OP", "L-Square-OP",
	"R-Square-OP", "Unders-KW"
};

typedef struct token {
	tokenID id;
	string tokenInstance;
	int line;
} token;
	
#endif
