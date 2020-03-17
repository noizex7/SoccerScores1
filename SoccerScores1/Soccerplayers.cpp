#include "Soccerplayers.h"

Soccerplayers::Soccerplayers()
{
	setAll("N/A", 1, 1);
}

Soccerplayers::Soccerplayers(string name, int number, int score)
{
	setAll(name, number, score);
}

void Soccerplayers::setName(string n)
{
	playerName = n;
}

string Soccerplayers::getName() const
{
	return playerName;
}

void Soccerplayers::setPlayerNumber(int n)
{
	if (n < 0)
		playerNumber = 1;
	playerNumber = n;
}

int Soccerplayers::getPlayerNumber() const
{
	return playerNumber;
}

void Soccerplayers::setPointsScored(int p)
{
	if (p < 0)
		pointsScored = 1;
	pointsScored = p;
}

int Soccerplayers::getPointsScored() const
{
	return pointsScored;
}

void Soccerplayers::setAll(string aPlayerName, int aPlayerNumber, int aPointsScored)
{
	setName(aPlayerName);
	setPlayerNumber(aPlayerNumber);
	setPointsScored(aPointsScored);
}

void Soccerplayers::displayData()
{
	cout << setw(30) << getName() << setw(30) << getPlayerNumber() << setw(30) << getPointsScored();
}

Soccerplayers::~Soccerplayers()
{
}