using namespace std;

        	vector<int> Int;
		vector<string> Name;

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

int CheckForIntAfterMath(string ProcessInput)
{
	size_t i = 0;
while (i < Name.size())
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
		i++;
}
	return 0;
}
