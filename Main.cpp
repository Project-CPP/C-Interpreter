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
	RESTART:
	string input = "";
	ConsoleOutCheck(input);
	CheckForInt(input);
	CheckForIntAfterMath(input);
	CHECKFORIOSTREAM(input);
	getline(cin, input);
	goto RESTART;
}
