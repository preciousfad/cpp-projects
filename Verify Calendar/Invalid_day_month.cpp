/**************************************************************************************
Name: Precious T. Fadimiroye
Program Description: This program is for demonstrating the exception handling
					with user defined exception classes. Also accounts for leap year.
***************************************************************************************/




#include <iostream>
#include <string>

using namespace std;


class invalidDay
{
public:
	invalidDay();

	string what();

private:
	string message;

};

class invalidMonth
{
public:
	invalidMonth();
	
	string what();
	

private:
	string message;
};



string smonth(int) ;
bool leapYear(int);
bool monthDay(int, int, int) ;
int main()
 {

	int month, day, year,th;
	cout << "Hello, please enter your birthday in the format: month-day-year. \nPress enter after each entry"<<endl;
	cin >> month >> day >> year;


	try
	{
		string newMonth;	
		
		if (month < 1 || month>12) throw invalidMonth();
		if (monthDay(year,month,day) == false)
			throw invalidDay();
		newMonth = smonth(month);
		

			cout << "\n" << newMonth << ", "<<day << ", "<<year<<endl;

	cin >>th ;

	}
	
	catch (invalidDay invDay)
	{
		cout << "Error: " << invDay.what() << endl;

	}catch (invalidMonth invMonth )
	{
		cout<< "Error: "<< invMonth.what();
	}
	cin >> th;
	cin.get();
		 return 0;
 }

	 string smonth(int x) 
	 {
		 string month;
		 if (x == 1)
			 month = "January";
		 if (x == 2)
			 month = "February";
		 if (x == 3)
			 month = "March";
		 if (x == 4)
			 month = "April";
		 if (x == 5)
			 month = "May";
		 if (x == 6)
			 month = "June";
		 if (x == 7)
			 month = "July";
		 if (x == 8)
			 month = "August";
		 if (x == 9)
			 month = "September";
		 if (x == 10)
			 month = "October";
		 if (x == 11)
			 month = "November";
		 if (x == 12)
			 month = "December";
		
		 return month;

	}
	 bool leapYear(int year)
	 {
		 if (year % 400 == 0)
			 return true;
		 else if (year % 4 == 0 && year % 100 != 0)
			 return true;
		 else
			 return false;
	 }

	 bool monthDay(int year, int month, int day) 
	 {
		 if (leapYear(year) == true && month == 2 && day > 0 && day < 30)
			 return true;
		 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12
			 && day > 0 && day < 32)
			 return true;
		 else if (month == 4 || month == 6 || month == 9 || month == 11 && day > 0 && day <= 30)
			 return true;
		 else if (leapYear(year) == false && month == 2 && day > 0 && day < 29)
			 return true;
		 else
			 return false;

		

	 }

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

