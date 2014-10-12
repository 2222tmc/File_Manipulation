// Yahtzee_trial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	string initials = " ", initials_match, all_score, holding_initials, create_out;

	int player_score = 0, count = 0, flag = 1, ho_score = 0, new_score;

	ifstream in_score;
	ofstream out_score;

	in_score.open("highScore.txt");
	out_score.open("tempscore.txt");

	cout << "your initials please: ";
	cin >> initials;
	cout << endl;
	

	while (!in_score.eof())
	{
		in_score >> holding_initials >> ho_score;
		if (initials == holding_initials)
			player_score = ho_score;
		else 
			out_score << ' ' << holding_initials << ' ' << ho_score;
	}
	
	cout << "playerr score is: " << player_score << endl;
	new_score = player_score + 56;
	cout << "new score: " << new_score << endl;

	out_score << ' ' << initials << ' ' << new_score;

	in_score.close();
	out_score.close();

	ifstream in_score;
	ofstream out_score;

	in_score.open("tempscore.txt");
	out_score.open("highScore.txt");

	while (!in_score.eof())
	{
		in_score >> holding_initials >> ho_score;
		out_score << ' ' << holding_initials << ' ' << ho_score;
	}

	out_score.close();
	in_score.close();
	
	return 0;
}

