#include "commandCenter.h"
#include <iostream>
#include <string>



using std::cout;
using std::endl;
using std::string;


void doingStuff()
{
	zeroArgumentRun();
	
}


void doingStuff(int argCee, string yksi, string kaksi, string kolme)
{
	cout << "\nCommand line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << ", \"" << kolme << "\"" << endl << endl;

	if (yksi[0] == '-' && yksi[1] == 'o')
		IVargumentRun(argCee, yksi, kaksi, kolme);
	else
	{
		system("CLS");
		cout << "ERROR 125\nYou must specify a valid run option. \nUse \"help\" or \"acronyms\" commands to see the documentation" << endl;
	}
}

void doingStuff(int argCee, string yksi)
{
	Documentation test(yksi);
	
}



void doingStuff(int argCee, string yksi, string kaksi)
{
	cout << "Command line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << endl;
	basicRun(argCee, yksi, kaksi);


}

