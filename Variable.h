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
	return 0;
}
