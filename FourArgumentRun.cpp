
#include "FourArgumentRun.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;




void IVargumentRun(int argCee, string yksi, string kaksi, string kolme)
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
    int occurance = -2;
    int lineNumb = -2;
    int reverseSearch = -2;
    int ignoreCase = -2;


    yksi.erase(0, 2);

    lineNumb = (yksi.find("l"));
    if (lineNumb != -1)
    {
        lineNumb = 1;
    }

    occurance = (yksi.find("o"));
    if (occurance != -1)
    {
        occurance = 1;
    }

    reverseSearch = (yksi.find("r"));
    if (reverseSearch != -1)
    {
        reverseSearch = 1;
    }

    ignoreCase = (yksi.find("i"));
    if (ignoreCase != -1)
    {
        ignoreCase = 1;
    }
    
    if (ignoreCase == 1)
        ignoreCaseRUN(kaksi, kolme, occurance, lineNumb, reverseSearch, ignoreCase);

    else
        normalCaseRUN(kaksi, kolme, occurance, lineNumb, reverseSearch, ignoreCase);



}




