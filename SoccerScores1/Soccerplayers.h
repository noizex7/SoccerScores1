#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Soccerplayers
{
private:
	string playerName;
	int playerNumber;
	int pointsScored;
public:
	Soccerplayers();
	Soccerplayers(string, int, int);
	void setName(string);
	string getName()const;
	void setPlayerNumber(int);
	int getPlayerNumber()const;
	void setPointsScored(int);
	int getPointsScored()const;
	void setAll(string, int, int);
	void displayData();
	~Soccerplayers();
};