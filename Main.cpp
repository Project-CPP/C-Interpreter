// Native C++ Libraries
#include <iostream>
#include <string>

// C++ Interpreter Libraries
#include <Console.h>

using namespace std;

int main()
{
	RESTART:
	string input = "";
	getline(cin, input);
	cin.ignore();
	goto RESTART;
}
