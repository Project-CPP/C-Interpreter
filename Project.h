using namespace std;


int WriteToProject(string ProcessInput)
{
	ofstream WriteToTheProject("Project.cppi", ios::app);
	WriteToTheProject << ProcessInput;
	return 0;
}


int LaunchProject()
{
	ShellExecute(NULL, L"open", L"CPP_Interpreter_Project_Output.exe", NULL, NULL, SW_SHOWNORMAL); // Start Project Output Program.
	ShellExecute(NULL, L"open", L"calc.exe", NULL, NULL, SW_NORMAL);// Start Calculator
	return 0;
}