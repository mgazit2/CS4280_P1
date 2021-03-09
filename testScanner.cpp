/*
 * Matan Gazit
 * CS 4280
 * 03/08/21
 *
 * testScanner.h
 */

#include "token.h"
#include "scanner.h"
#include "testScanner.h"
#include "fsa.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int test_scanner(ifstream& file) {

	token tk;

	while (tk.id != eof_tk) {

		tk = scanner(file);
		cout << "Token ID: " << tk.id << endl;
		cout << "Token Instance: " << tk.token_instance << endl;
		cout << "Line: " << tk.line << endl << endl;

	}
	
	return 0;
}
