// Native C++ Libraries
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// C++ Interpreter Libraries
#include <Console.h>
#include <Varible.h>
#include <Include.h>

using namespace std;

int main()
{
	cout << "CPP Interpreter v0.1. Here you can type C++ code in the terminal and get instant feedback from it.\n\n\n";
	RESTART:
	cout << "--->";
	string input = "";
	getline(cin, input);
	ConsoleOutCheck(input);
	CheckForInt(input);
	CheckForIntAfterMath(input);
	CHECKFORIOSTREAM(input);
	getline(cin, input);
	goto RESTART;
}
