/*     

	Author: Jaocb Muncy / Project-CPP.
	Date: 4/2/2016.
	Purpose: This header is used to handle what C++ code is allowed by having it included as a preprocessor directive. 
	This is because of the native way C++ would be written in a compiler.
	
*/


#ifndef INCLUDE_H
#define INCLUDE_H


using namespace std;


/* Initialize LibrarySwitch. This is used to check if the user has included the library which contains the functions they
are wanting to use. Please note that the default boolean values are set to false unless the user defines the library to be in their 
program using the preprocessor directive (#include <>)
*/
struct LibrarySwitch
{
	bool cstdlib = false;
	bool csignal = false;
	bool csetjmp = false;
	bool cstdarg = false;
	bool typeinfo = false;
	bool type_traits = false;
	bool bitset = false;
	bool functional = false;
	bool utility = false;
	bool ctime = false;
	bool chrono = false;
	bool cstddef = false;
	bool initalizer_list = false;
	bool tuple = false;
	bool _new_ = false;
	bool memory = false;
	bool scoped_allocator = false;
	bool climits = false;
	bool cfloat = false;
	bool cstdint = false;
	bool cinttypes = false;
	bool limits = false;
	bool exception = false;
	bool stdexcept = false;
	bool cassert = false;
	bool system_error = false;
	bool cerrno = false;
	bool cctype = false;
	bool cwtype = false;
	bool cstring = false;
	bool cwchar = false;
	bool string = false;
	bool vector = false;
	bool deque = false;
	bool list = false;
	bool forward_list = false;
	bool set = false;
	bool map = false;
	bool unordered_set = false;
	bool unordered_map = false;
	bool stack = false;
	bool queue = false;
	bool algorithm = false;
	bool iterator = false;
	bool cmath = false;
	bool complex = false;
	bool valarray = false;
	bool random = false; 
	bool numeric = false;
	bool ratio = false;
	bool cfenv = false;
	bool iosfwd = false;
	bool ios = false;
	bool istream = false; 
	bool ostream = false;
	bool iostream = false;
	bool fstream = false;
	bool sstream = false;
	bool strstream = false;
	bool iomanip = false;
	bool streambuf = false;
	bool cstdio = false;
	bool locale = false;
	bool clocal = false;
	bool codecvt = false;
	bool regex = false;
	bool atomic = false;
	bool thread = false;
	bool mutex = false;
	bool shared_mutex = false;
	bool future = false;
	bool condition_variable = false;
};

// Default Construct the LibrarySwitch as Library.
LibrarySwitch Library;


// IOSTREAM
int CHECKFORIOSTREAM(string ProcessInput)
{
	if (ProcessInput.find("#include <iostream>") != string::npos)
	{
		cout << "iostream is now included\n\n";
		Library.iostream = true;
	}
	return 0;
}


#endif // !INCLUDE_H
