#include <iostream>
using namespace std;

int main()
{
	double mass, density, volume,f;
	cout << "Hello please enter mass in grams";  
	cin >> mass;
	cout << "now enter the density in grams per cubic meter, to calculate the volume";
	cin >> density;
	volume = mass / density;
	cout << "The calculated Volume is" << volume;
	cin >> f;
	return 0;
}
