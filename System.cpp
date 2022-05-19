#include <iostream>
using namespace std;
#include "Menu.h"
#include <map>
#include <vector>
map<string, string> flight;
map<string, string> rest;
vector<string> dataFlightID;
vector<string> dataFlightCode;

int main() {
	Menu run;
	run.getMenu();
	return 0;
}