#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void getIn(double& speed, double& temp);
void windChill(double speed, double temp, double& wChill);

int main()
{
	double speed, temp, wChill;
	getIn(speed, temp);
	windChill(speed, temp, wChill);
	
	cout <<"The windchill is  "<< wChill<< endl;
	system("pause ");
	return 0;
}

void getIn(double& speed, double& temp)
{
	cout << "enter wind speed in miles per hour";
	cin >> speed;
	cout << "enter temperature in fahrenheit";
	cin >> temp;
}

void windChill(double speed, double temp, double& wChill)
{	
	 wChill = 35.74 + (0.6215*temp)- (35.75*pow(speed, 0.16)) + (0.4275*temp*pow(speed, 0.16));
}
