#include <iostream>
#include <string>

using namespace std;

class invalidMonth
{
public:
	invalidMonth()
	{
		message = "Invalid input for month";
	}
	
	string what()
	{
		return message;
	}

private:
	string message;
};
