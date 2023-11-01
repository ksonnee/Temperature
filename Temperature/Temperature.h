#ifndef Temperature_h
#define Temperature_h
#include <iostream>
#include <string>

using namespace std;

class Temperature
{
public:
	Temperature();
	~Temperature();

	void setTemperature(int temperature_);

	void tempChart();

private:

	int count;
	int temperature;
};

#endif Temperature_h