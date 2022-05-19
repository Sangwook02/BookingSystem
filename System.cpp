#include <iostream>
using namespace std;
#include "Menu.h"
#include <map>
#include <vector>

map<string, string> flight;
map<string, string> rest;
vector<string> dataFlightID;
vector<string> dataFlightCode;

vector<string> dataRestaurantID;
vector<int> dataRestaurantTime;
vector<int> dataRestaurantTable;

int main() {
	Menu run;
	run.getMenu();
	return 0;
}