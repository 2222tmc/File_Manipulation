// Yahtzee_trial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	string initials;
	string initialMatch = " ";
	string allScore;
	string holding;
	string createOut;

	int ones, twos, threes, fours, fives, sixes, threeKind, fourKind, fullHouse, 
		smallStraight, largeStraight, fiveKind, chance, upperBonus, upperTotal, 
		lowerTotal, finalTotal;

	int playerScore, count = 0;

	char x = 'r';

	ifstream inScore;
	ofstream outScore;

	inScore.open("highScore.txt");
	outScore.open("manipulateHigh.txt");
	
	//while (x == 'r')
	//{
	//	cout << "Welcome to Yahtzee"  << endl
	//		<< "Please enter your initials: ";
	//	cin >> initials;
	//	cout << endl << initials;

	//	while (initialMatch != initials)
	//	{
	//		inScore >> initialMatch >> playerScore;
	//	}

	//	cout << initialMatch <<  playerScore << endl;
	//	cout << "Enter r to restart or q to quit";
	//	cin >> x;
	//}

	while (inScore)
	{
		inScore >> holding;
		createOut = createOut + " " + holding;
		cout << createOut << endl;
		if (count > 4)
		{
			break;
		}
		count++;
	}
	outScore << createOut;
	return 0;
}

