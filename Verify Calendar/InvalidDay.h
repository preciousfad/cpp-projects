#include <iostream>
#include <string>

using namespace std;

class invalidDay
{
public:
	invalidDay()
	{
		message = "Invalid input for day";
	}
	
	string what()
	{
		return message;
	}

private:
	string message;

};
