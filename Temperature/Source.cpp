#include "Temperature.h"
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

Temperature::Temperature()
{
	temperature = 0;
	count = 0;
};

Temperature::~Temperature()
{
};

void Temperature::setTemperature(int temperature_)
{
	temperature = temperature_;
};


void Temperature::tempChart()
{
	cout << setw(3) << temperature;
	int tempDiv3 = temperature / 3;
	for (int i = -30 / 3; i <= 120 / 3; i++) {
		if (i == 0) {
			cout << "|";
		}
		else if (tempDiv3 < 0 && i >= tempDiv3 && i < 0) {
			cout << '*';
		}
		else if (tempDiv3 > 0 && i <= tempDiv3 && i > 0) {
			cout << "*";
		}
		else {
			cout << " ";
		}
	}
	cout << endl;
}