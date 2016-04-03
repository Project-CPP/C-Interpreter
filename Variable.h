/*     
	Author: Jaocb Muncy / Project-CPP.
	Date: 4/2/2016.
	Purpose: This header is used to integrate varible names and values in the program. 
	This would be used for integers, strings, vectors, arrays, chars, doubles and floats.
	
*/


using namespace std;

		// Add vectors to keep track of integer names and values.
        	vector<int> Int;
		vector<string> Name;


// Check to see if the user inputs a integer into the program.
int CheckForInt(string ProcessInput)
{
	if (ProcessInput.substr(0, 3) == "int")
	{
		int EqualLocation;
		int SemicolonLocation;
		stringstream Number;
		stringstream StringName;
		int FinalNumber;
		string FinalName;
		EqualLocation = ProcessInput.find("=");
		EqualLocation++;
		SemicolonLocation = ProcessInput.find(";");
		Number << ProcessInput.substr(EqualLocation, SemicolonLocation);
		Number >> FinalNumber;
		StringName << ProcessInput.substr(4, EqualLocation);
		StringName >> FinalName;
		cout << FinalName << " = " << FinalNumber << "\n\n";
		Int.push_back(FinalNumber);
		Name.push_back(FinalName);
	}

// Check to see if the user uses console out to print a integer to the screen.
int CheckForIntAfterMath(string ProcessInput)
{
	for(size_t i = 0; i < name.size(); i++)
		{
			if (ProcessInput.find("cout") != string::npos)
				{
					if (ProcessInput.find("<<") != string::npos) 
						{
							if (ProcessInput.find(Name[i]) != string::npos)
								{
									cout << Int[i] << endl << endl;
								}
						}
				}
		}
 return 0;
}
