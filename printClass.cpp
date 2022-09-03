#include "printClass.h"
using namespace std;

Documentation::Documentation()
{

}


void Documentation::setParameter(string Parameter)
{
	mYksi = Parameter;
	argumentCheck(mYksi);

}

void Documentation::argumentCheck(string mYksi)
{
	bool runError = true;
	int status = 0;
	for (int i = 0; i < 4; i++)
	{

		if (info[i] == mYksi)
		{
			status = printInfo();
			runError = false;
		}
	}


	for (int i = 0; i < 10; i++)
	{
		if (help[i] == mYksi)
		{
			status = printHelp();
			runError = false;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (acronyms[i] == mYksi)
		{
			status = printAcronyms();
			runError = false;
		}
	}

	if (runError == true)
	{	
			cout << "\nUnspecified term, seizing operations";
			cout << "\nError 105";
			cout << "\nPlease input a valid term\nInput \"help\", \"options\" or \"acronyms\" for instructions" << endl;
			return;
	}

	if (status == 1)
		MoreDocumentation();


}

void Documentation::MoreDocumentation()
{
	int check;
	bool virhe;
	system("CLS");
	cout << "Please specify the topic\n";
	cout << "Input 1 for document \"Info\" \n";
	cout << "Input 2 for document \"Help\"  \n";
	cout << "Input 3 for document \"Acronyms\"  \n";
	cout << "Input 4 to seize operations and exit\n";
	
	do
	{
		virhe = false;
		cin >> check;
		if ((cin.fail()) || check < 1 || check > 4)
		{
			cout << "Error 203, please input again" << endl;
			virhe = true;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (virhe);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (check == 1)
	{
		mYksi = "info";
		argumentCheck(mYksi);
	}
	else if (check == 2)
	{
		mYksi = "help";
		argumentCheck(mYksi);
	}
	else if (check == 3)
	{
		mYksi = "acronyms";
		argumentCheck(mYksi);
	}
	else if (check == 4)
		return;
	
}



