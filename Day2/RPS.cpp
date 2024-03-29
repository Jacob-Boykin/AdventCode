#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// Rock Paper Scissors Strategy
int main()
{
    string hands;
    int score = 0;
    fstream file;
    file.open("hands.txt");
    /*
        X,A == Rock == 1
        Y,B == Paper == 2
        Z,C == Scissors == 3
        Lost == 0
        Draw == 3
        Win == 6
    */
    while(!(file.eof()))
    {
        getline(file, hands);

        switch (hands[2])
        {
        case 'X':
            if(hands[0] == 'A') score += 4; //Rock + Rock
            else if(hands[0] == 'B') score += 1; //Rock + Paper
            else score += 7; //Rock + Scissors
            break;
        case 'Y':
            if(hands[0] == 'A') score += 8; //Paper + Rock
            else if(hands[0] == 'B') score += 5; //Paper + Paper
            else score += 2; //Paper + Scissors
            break;
        case 'Z':
            if(hands[0] == 'A') score += 3; //Scissors + Rock
            else if(hands[0] == 'B') score += 9; //Scissors + Paper
            else score += 6; //Scissors + Scissors            
            break;
        default:
            break;
        }
    }
    cout << score;
    return 0;
}