// Native C++ Libraries
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// C++ Interpreter Libraries
#include <Console.h>

using namespace std;

int main()
{
	RESTART:
	string input = "";
	getline(cin, input);
	goto RESTART;
}
