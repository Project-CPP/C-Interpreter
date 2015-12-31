#include <Include.h>

using namespace std;

int ConsoleOutCheck(string ProcessInput)
{

	// Check for iostream library.
		if (Library.iostream == false)
		{
			cout << "\nPlease include the iostream library.\n\n";
			return 0;
		}

  // CHECK FOR CONSOLE OUT.
	if (ProcessInput.substr(0,4) == "cout")
	  {
			int FirstQuotation = 0;
			int LastQuotation = 0;
			int QuotationCount = 0;
		FirstQuotation = ProcessInput.find("\"");
		if (FirstQuotation != string::npos)
		{
			 QuotationCount = 1;
		}
		FirstQuotation++;
		LastQuotation = ProcessInput.substr(FirstQuotation,9920).find("\"");
		if (LastQuotation != string::npos)
		{
			 QuotationCount = 2;
		}

    // OUTPUT FEEDBACK.
		cout << endl << ProcessInput.substr(FirstQuotation,LastQuotation) << endl << endl;
  }
}
