#include "Temperature.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	Temperature myTemperature;
	int count;
	float temperature;
	float stars;

	ifstream inFile;
	inFile.open("Temperatures.dat");

	cout << "Temperatures for 24 hours:" << endl;
	cout << setw(6) << "-30" << setw(9) << "0" << setw(10) << "30" << setw(10) << "60" << setw(10) << "90" << setw(10) << "120" << endl;

	if (!inFile) {
		cout << "Error opening file";
		return 1111;
	}
	
	while (inFile >> temperature) {
		myTemperature.setTemperature(temperature);
		myTemperature.tempChart();
	}
	if (!inFile.eof()) {
		cout << "Error reading from file";
		return 9999;
	}

	inFile.close();
	return 0;
}