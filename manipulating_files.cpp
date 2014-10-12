#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void copyfile();

int main()
{
            string hold_initials;
    int hold_score;

    ifstream in_score;
    ofstream out_score;

    in_score.open("highScore.txt");
    out_score.open("scoreTemp.txt");

    while (1 == 1)
    {
        in_score >> hold_initials >> hold_score;
        if (hold_initials == "sentinel")
        {
            out_score << ' ' << hold_initials;
            break;
        }
        out_score << ' ' << hold_initials << ' ' << hold_score + 11;

    }

    in_score.close();
    out_score.close();

    copyfile();
}

void copyfile()
{
    string hold_initials;
    int hold_score;

    ifstream in_score;
    ofstream out_score;

    in_score.open("scoreTemp.txt");
    out_score.open("highScore.txt");

    while (1 == 1)
    {
        in_score >> hold_initials >> hold_score;
        if (hold_initials == "sentinel")
        {
            out_score << ' ' << hold_initials;
            break;
        }
        out_score << ' ' << hold_initials << ' ' << hold_score;

    }

    in_score.close();
    out_score.close();
}
