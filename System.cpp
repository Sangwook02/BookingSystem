#include <iostream>
using namespace std;
#include "Menu.h"
#include "Airport.h"

int main() {
	Menu run;
	Airport Gimpo2("GPCJ"), Gimpo3("GPKH"), Gimpo4("GPGJ"), Gimpo5("GPDG");
	Airport Cheju1("CJGP"), Cheju3("CJKH"), Cheju4("CJGJ"), Cheju5("CJDG");
	Airport Kimhae1("KHGP"), Kimhae2("KHCJ"), Kimhae4("KHGJ"), Kimhae5("KHDG");
	Airport Gwangju1("GJGP"), Gwangju2("GJCJ"), Gwangju3("GJKH"), Gwangju5("GJDG");
	Airport Daegu1("DGGP"), Daegu2("DGCJ"), Daegu3("DGKH"), Daegu4("DGGJ");

	run.getMenu();
	return 0;
}