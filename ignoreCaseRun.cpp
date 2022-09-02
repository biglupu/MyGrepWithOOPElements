#include "ignoreCaseRun.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;

string lower_string(string str)
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    return str;
}


void ignoreCaseRUN(string two, string three, int O, int L, int R, int I)

{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    int found = 0;
    int unfound = 0;
    string line;
    int count = 1;
    bool printed = 0;
    string lowerCLine;
    string lowerCSearch_W;


    search_w = two;
    filename = three;

    try {
        inputFile.open(filename);
        if (inputFile) {
            inputFile.close();
        }
        else
        {
            throw 401;
        }
    }
    catch (int f)
    {
        cout << "\nFile not found, Error: " << f << ", seizing operations\n";
        cout << "List of errors specified under \"Acronyms\" in documentation";
        return;
    }


    inputFile.open(filename);

    if (inputFile)

    {
        while (getline(inputFile, line))
        {
            lowerCLine = lower_string(line);       
            lowerCSearch_W = lower_string(search_w);

            if (R != 1)
            {

                if (lowerCLine.find(lowerCSearch_W) != -1)
                {
                    if (printed == 0)
                    {
                        cout << "\nString \"" << search_w << "\" found on the lines:\n";
                        printed = 1;
                    }
                    if (L == 1)
                    {
                        cout << count << ": ";
                    }
                    cout << line << endl;
                    count++;
                    found++;

                }
                else
                    count++;

            }
            if (R == 1)
            {

                if (lowerCLine.find(lowerCSearch_W) == -1)
                {
                    if (printed == 0)
                    {
                        cout << "\nString \"" << search_w << "\" not present on the lines:\n";
                        printed = 1;
                    }
                    if (L == 1)
                    {
                        cout << count << ": ";
                    }
                    cout << line << endl;
                    count++;
                    unfound++;


                }
                else
                    count++;

            }
        }

        inputFile.close();

        if (R == 1)
        {
            found = count - unfound - 1;
            // -1 koska ensimmäinen rivi on rivi numero 1, eikä rivi numero 0. 
            
        }
        if (O == 1)
        {
            if (found > 0)
            {
                if (R != 1)
                    cout << "Occurrences of lines containing \"" << search_w << "\" : " << found;
                else
                {
                    cout << "Occurrences of lines containing \"" << search_w << "\" : " << found;
                    cout << "\nOccurrences of lines NOT containing \"" << search_w << "\" : " << unfound;

                }


            }
            else
                cout << "Word \"" << search_w << "\" not found in file: " << filename;
        }
    }


    else
        cout << "Error, couldn't read file: " << filename;

}