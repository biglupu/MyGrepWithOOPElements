#pragma once
#include <iostream>
#include <string>
#include "print.h"


using namespace std;

class Documentation {
public:
	Documentation();
	void argumentCheck(string mYksi);
	void MoreDocumentation();
	void setParameter(string Parameter);

private:
	string mYksi;
	const string info[4] = {"i","info","who","maker"};
	const string help[10] = { "help","Help","HELP","H","h","options","o","opt","Options","O" };
	const string acronyms[5] = { "A", "a", "ac", "AC", "acronyms" };
};