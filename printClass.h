#pragma once
#include <iostream>
#include <string>
#include "print.h"
//#include "basicRun.h"

using std::string;

class Documentation {
public:
	Documentation(string mYksi);
	void argumentCheck(string mYksi);
	void MoreDocumentation();

private:
	string mYksi;
	const string info[4] = {"i","info","who","maker"};
	const string help[10] = { "help","Help","HELP","H","h","options","o","opt","Options","O" };
	const string acronyms[5] = { "A", "a", "ac", "AC", "acronyms" };
};