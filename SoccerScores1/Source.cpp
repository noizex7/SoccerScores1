#include "Soccerplayers.h"

void getSize(int*);
void getData(int*, Soccerplayers*);
void display(int*, Soccerplayers*);
void totalPoints(int*, Soccerplayers*);
void pickMVP(int*, Soccerplayers*);

int main()
{

	Soccerplayers* list;
	int* size;

	size = new int;

	getSize(size);

	list = new Soccerplayers[*size];

	cout << "\n\n\n";

	getData(size, list);

	display(size, list);

	totalPoints(size, list);

	pickMVP(size, list);

	delete[] list;
	delete size;

	system("pause");

	return 0;
}

void getSize(int* aSize)
{
	cout << "Enter the amount of players in the team:\n";
	cin >> *aSize;
}

void getData(int* aSize, Soccerplayers* aList)
{
	cout << "Please enter the data for each player:";
	for (int count = 0; count < *aSize; count++)
	{
		string* name;
		int* playerNumber, * playerScored;
		bool error;

		name = new string;
		playerNumber = new int;
		playerScored = new int;

		cout << "\n\n\n\n\nEnter the name for the player in slot " << count + 1 << ":\n";
		cin >> *name;

		do
		{
			error = 0;
			cout << "Enter the player's number:\n";
			cin >> *playerNumber;
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
			cin >> *playerScored;
			if (cin.fail())
			{
				cout << "Invalid input, try again.\n";
				cin.clear();
				cin.ignore(80, '\n');
				error = 1;
			}
		} while (error);

		aList[count].setAll(*name, *playerNumber, *playerScored);

	}
}

void display(int* aSize, Soccerplayers* aList)
{
	cout << setw(30) << "Player's name" << setw(30) << "Player's Number" << setw(30) << "Points Scored by Player" << endl;

	for (int count = 0; count < *aSize; count++)
	{
		aList[count].displayData();
		cout << endl;
	}
}

void totalPoints(int* aSize, Soccerplayers* aList)
{
	int total = 0;
	for (int count = 0; count < *aSize; count++)
		total += aList[count].getPointsScored();
	cout << "The total of points scored is: " << total << endl;

}

void pickMVP(int* aSize, Soccerplayers* aList)
{
	bool flag;
	int i;
	Soccerplayers scan = *aList;
	for (i = 0; i < *aSize; i++)
	{
		if (aList[i].getPointsScored() > scan.getPointsScored())
			scan = aList[i];
	}
	cout << "\n\n\nThe MVP is " << scan.getName() << " with " << scan.getPointsScored() << " points.";
}