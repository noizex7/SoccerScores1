#include "Soccerplayers.h"
int main()
{
	Soccerplayers list[50];
	int size = 3;
	cout << "Please enter the data for each player:" << endl;
	for (int count = 0; count < size; count++)
	{
		string name;
		int playerNumber, playerScored;
		bool error;
	
		cout << "Please enter the player's name: ";
		cin >> name;
		do
		{
			error = 0;
			cout << "Enter the player's number:\n";
			cin >> playerNumber;
			if (cin.fail())
			{
				cout << "Invalid input, try again.\n";
				cin.clear();
				cin.ignore(80, '\n');
				error = 1;
			}
		} while (error);
		do
		{
			error = 0;
			cout << "Enter the points scored by the player:\n";
			cin >> playerScored;
			if (cin.fail())
			{
				cout << "Invalid input, try again.\n";
				cin.clear();
				cin.ignore(80, '\n');
				error = 1;
			}
		} while (error);
	
		list[count].setAll(name, playerNumber, playerScored);
		
	}
	cout << setw(30)<< "Player's name" << setw(30) << "Player's Number" << setw(30) << "Points Scored by Player" << endl;
	for (int count = 0; count < size; count++)
	{
		list[count].displayData();
		cout << endl;
	}
	
	
}