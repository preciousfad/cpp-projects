#include <iostream>
#include<string>
#include<fstream>
#include <iomanip>

using namespace std;

struct footballPlayer
{
	string firstName;
	string lastName;
	int touchdowns;
	int passyards;
	int recieveyards;
	int rushyards;
	int catches;

};

void initialize(footballPlayer[]);
void input(footballPlayer[]);
void search(footballPlayer[], string ,string );
void printData(footballPlayer[]);
void saveData(footballPlayer[]);


int main()
{
	footballPlayer player[10];	
	initialize(player);
	

	int inval;
	string first, last;

	do
	{
		cout << "\n####### MENU SELECTION ###########"
			<< "\nHello today you will have the option to input data for 10 football players,\n"
			<< "search for the index of a player and choose to update if found, output players data,\n"
			<< "and you will have the chance to save your data into a text file.\n"
			<< "\nIf you want to enter player data press 1"
			<< "\nIf you want to view all player data press 2"
			<< "\nIf you want to search for the index of a player press 3\n"
			<< "\nIf you want to exit the menu press 0"<<endl;
		cin >> inval;
		switch (inval)
		{
		case 1:
			input(player);
			break;
		case 2:
			printData(player);
			break;
		case 3:
			cout << "\nEnter the first name of the player: ";
			cin >> first;
			cout << "\nEnter the last name of the player: ";
			cin >> last;
			search(player, first, last);
			break;
		case 0:
			cout << "THANK YOU GOODBYE" << endl;
			break;
		default:
			cout << "invalid value" << endl;
			break;
		}

	} while (inval!=0);
	

	system("pause");
	return 0;
}

void initialize(footballPlayer p[])
{
	ifstream in("football_players.txt");
	for (int i = 0; i < 10; i++) 
	{
		in>>p[i].firstName
		>>p[i].lastName
		>>p[i].touchdowns
		>>p[i].passyards
		>>p[i].rushyards
		>>p[i].recieveyards
		>>p[i].catches;
	}
}

void input(footballPlayer p[])
{

	for (int i = 0; i < 10; i++)
	{
		cout << "\nEnter data for player" [i];
		cout << "\nEnter player first name: ";
		cin >> p[i].firstName;
		cout << "\nEnter player last name: ";
		cin >> p[i].lastName;
		cout << "\nEnter number of touchdowns: ";
		cin >> p[i].touchdowns;
		cout << "\nEnter passing yards: ";
		cin >> p[i].passyards;
		cout << "\nEnter rushing yards: ";
		cin >> p[i].rushyards;
		cout << "\nEnter recieving yards: ";
		cin >> p[i].recieveyards;
		cout << "\nEnter number of catches: ";
		cin >> p[i].catches;
		
	}
	int y_n;
	cout << "\nDo you wish to save your data? Press 1 for yes and 2 for no: ";
	cin >> y_n;
	if (y_n=1)
	{
		saveData(p);
	}
}

void search(footballPlayer p[], string first, string last)
{
	bool flag = false;
	int i =0;
	while (i < 10)
	{
		if (p[i].firstName == first && p[i].lastName == last)
		{			
			int y_n;
			cout << "Your players index is: " << i
				<< "\nDo you want to update this player? Type '1' for yes or '2' for no: ";
			cin >> y_n;
			if (y_n == 1)
			{
				cout << "\nEnter data for player with index: " << i;
				cout << "\nEnter player first name: ";
				cin >> p[i].firstName;
				cout << "\nEnter player last name: ";
				cin >> p[i].lastName;
				cout << "\nEnter number of touchdowns: ";
				cin >> p[i].touchdowns;
				cout << "\nEnter passing yards: ";
				cin >> p[i].passyards;
				cout << "\nEnter rushing yards: ";
				cin >> p[i].rushyards;
				cout << "\nEnter recieving yards: ";
				cin >> p[i].recieveyards;
				cout << "\nEnter number of catches: ";
				cin >> p[i].catches;

				cout << "\nDo you wish to save your data? Press 1 for yes and 2 for no: ";
				cin >> y_n;
				if (y_n=1)
				{
					saveData(p);
				}
			}

			i++;
			flag = true;
		}
		else
			i++;
	}

	if (!flag)
	{
		cout << "\nYour player is not found\n"<<endl;
	}
	
}

void printData(footballPlayer p[])
{
	cout << "\nFirst Name" << "  Last Name" <<
		"  Touchdowns" << "  Passing Yards" << "  Rushing Yards" <<
		"  Recieving Yards" << "  Catches" << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << setw(10) << p[i].firstName << " "
			<< setw(10) << p[i].lastName << " "
			<< setw(11) << p[i].touchdowns << " "
			<< setw(13) << p[i].passyards << " "
			<< setw(14) << p[i].rushyards << " "
			<< setw(15) << p[i].recieveyards << " "
			<< setw(9) << p[i].catches << endl;
	}
}

void saveData(footballPlayer p[])
{
	ofstream out("football_players.txt");
	for (int i = 0; i < 10; i++)
	{
		
		out << p[i].firstName << " ";
		out << p[i].lastName << " ";
		out << p[i].touchdowns << " ";
		out << p[i].passyards << " ";
		out << p[i].rushyards << " ";
		out << p[i].recieveyards << " ";
		out << p[i].catches << " " << endl;

	}
}
