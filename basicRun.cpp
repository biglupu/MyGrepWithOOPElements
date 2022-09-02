#include <iostream>
#include <fstream>
#include "basicRun.h"

using namespace std;




void zeroArgumentRun()
{

    string sen, sub;
    int position;
    cout << "You have entered no command line arguments\n";


    cout << "\nEnter the Sentence" << endl;
    getline(cin, sen);

    cout << "Enter string to find" << endl;
    cin >> sub;

    position = (sen.find(sub));
    if (position == -1)
        cout << "Not found";
    else
        cout << "Found in position " << position;

    cout << "\n\nThis is the most basic operation of the Grep -tool\n";
    cout << "To see the documentation, run the program again. \nInput \"help\" or \"acronyms\" ";
    cout << "on the command line when running this program.\n\n";
}



void basicRun(int argCee, string yksi, string kaksi)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    bool found = 0;
    string line;
    search_w = yksi;
    filename = kaksi;

    bool printed = 0;

    try {
        inputFile.open(filename);
        if (inputFile) {
            inputFile.close();
        }
        else
        {
            throw 400;
        }
    }
    catch (int f)
    {
        cout << "\nFile not found, Error: " << f << ", seizing operations\n";
        cout << "List of errors specified under \"Acronyms\" in documentation";
        return;
    }



    if (argCee > 1)
    {



        inputFile.open(filename);
        if (inputFile)
        {
            while (getline(inputFile, line))
            {

                if (line.find(search_w) != -1)
                {
                    if (printed == 0)
                    {
                        cout << "\nString \"" << search_w << "\" found on the lines:\n";
                        printed = 1;
                    }
                    cout << line << endl;

                    found = 1;

                }


            }

            if (found == 0)
            {
                cout << "Word \"" << search_w << "\" not found in file: " << filename;
            }

            inputFile.close();
        }
        else
            cout << "Error, couldn't read file: " << filename;
    }
}