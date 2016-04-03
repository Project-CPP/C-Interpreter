/*     

	Author: Jaocb Muncy / Project-CPP.
	Date: 4/2/2016.
	Purpose: This header is used to handle user input when needing to use the console. This will handle console out and console
	in when needed by the user. This will also check if you included your library that is needed for your functions to work.
	
*/
	
#include <Include.h>

using namespace std;


// Check to see if the user is trying to console out.
int ConsoleOutCheck(string ProcessInput)
{

	// Check to see if the preprocessor directive is included with the name iostream library. If not, tell the user to include it.
		if (Library.iostream == false)
		{
			cout << "\nPlease include the iostream library.\n\n";
			return 0;
		}

  // Check for cout function when user inputs infomation into the terminal.
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

    // Output feedback.
		cout << endl << ProcessInput.substr(FirstQuotation,LastQuotation) << endl << endl;
  }
}
