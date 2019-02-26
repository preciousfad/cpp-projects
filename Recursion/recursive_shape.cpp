#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

void rec(unsigned);

int main()
{
	int n;
	cout << "Hello please input a positive number: ";
	cin >> n;
	rec(n);
	system("pause");
	return 0;
}


void rec(unsigned x)
{
	char c = '*';
	string str = "";
	string ast=str.append(x,c) ;
	
	if (x > 1)
	{
		cout << ast << endl;
		rec(x - 1);
	}
	cout << ast << endl;
		

}
