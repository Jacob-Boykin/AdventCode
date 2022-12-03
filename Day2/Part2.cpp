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
        // you have to choose X to draw
            score += 1;
            break;
        case 'Y':
        //you have to choose X to lose
            score += 5;
            break;
        case 'Z':
        // You have to choose X to win
            score += 9;
            break;
        default:
            break;
        }
    }
    cout << score;
    return 0;
}