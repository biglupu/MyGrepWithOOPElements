#include <iostream>
#include "print.h"
#include <limits>


using namespace std;

int printInfo()

{
	system("CLS");
	cout << "This software was made by Jonne Välimäki\n";
	int operation;
	bool virhe;

	
	do
	{
		virhe = false;
		cout << "\nInput 1 to browse the documentation or 2 to close the program: \n \n";
		cin >> operation;
		if ((cin.fail()) || operation < 1 || operation > 2)
		{
			cout << "Error, please input again" << endl;
			virhe = true;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (virhe);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (operation == 1)
		return 1;
}

int printHelp()
{
	int operation;
	bool virhe;
	system("CLS");
	cout << "DOCUMENTATION OF OPTIONS AND BASIC OPERATIONS\n\n";


	cout << "Here is an an example of run without arguments: \n";
	cout << "\nmygrep.exe\n\n";
	cout << "\"Give a string from which to search for: Erkki Hietalahti\n\"";
	cout << "\"Give search string : rkkk\n";
	cout << "\"rkki \"found in \"Erkki Hietalahti\" in position 1";

	cout << "\n\nAn example of run without alterations to the basic operations\n";
	cout << "mygrep.exe Search_Word Search_File.txt\n" << endl;
	cout << "Will look for lines with the word specified in the search terms" << endl;
	cout << "Will only display lines if they match Search_Word, case sensitive" << endl;
	cout << "To get the list of run options and operational acronyms, input \"help\", \"o\" or \"options\" " << endl;
	cout << "Note that this program is meant to be used with English alphabets and won't support non-ASCII letters" << endl;
	cout << "If an otherwise valid argument contains extra letters\n";
	cout << "For example instead of \"-oli\" you were to write \"-olit\", and since \"t\" is not defined, the program will interpet it as \"-oli\"";

	cout << "Seize operations or return to set new parameters\n\n";


	cout << "\nOther than the \"info\", \"acronyms\"  and \"help\" -functions, operational acronyms" << endl;
	cout << "start with \"-o\" to clarify that it's a run option." << endl;
	cout << "When refering to for example LINENUMBER command, which is writen as \"-ol\"" << endl;
	cout << "the document will refer to it as \"l\", with the \"-o\" being implied\n" << endl;
	cout << "Example use of LINENUMBER -function writen on the terminal: ";
	cout << "\nmygrep.exe -ol Search_Word Search_File.txt" << endl;
	cout << "will display the line number where the Search_Word was found";
	cout << endl;
	cout << endl;
	cout << "List of run options specified under \"Acronyms\"" << endl;

	do
	{
		virhe = false;
		cout << "\nInput 1 to continue browsing the documentation or 2 to close the program: \n \n";
		cin >> operation;
		if ((cin.fail()) || operation < 1 || operation > 2)
		{
			cout << "Error, please input again" << endl;
			virhe = true;
			cin.clear();
			cin.ignore(80, '\n'); 
		}
	} while (virhe);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (operation == 1)
		return 1;

}

int printAcronyms()
{
	int operation;
	bool virhe;
	system("CLS");
	cout << "LIST AND CLARIFICATION OF ACRONYMS\n\n";

	cout << "HELP: \"h\", \"help\", \"HELP\"";
	cout << "\nTutorial documentation on the program\n";
	cout << endl;
	cout << "Basic commands to run the program";

	cout << "LINE NUMBER: \"l\" " << endl;
	cout << "OCCURANCES: \"o\" " << endl;
	cout << "REVERSE SEARCH: \"r\" " << endl;
	cout << "IGNORE CASE: \"i\" " << endl;



	cout << "List of errors\n\n";
	cout << "Errors 100-200, unspecified run argument\n";
	cout << "Errors 200-300, input not one of the given choices\n";
	cout << "Errors 400-403, tried to run to program with a file that could not be open";
	cout << "Error 500-600, wrong amount of arguments";

	do
	{
		virhe = false;
		cout << "\n\nInput 1 to continue browsing the documentation or 2 to close the program: \n \n";
		cin >> operation;
		if ((cin.fail()) || operation < 1 || operation > 2)
		{
			cout << "Error, please input again" << endl;
			virhe = true;
			cin.clear();
			cin.ignore(80, '\n'); 
		}
	} while (virhe);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (operation == 1)
		return 1;

}

