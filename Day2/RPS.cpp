#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

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

        switch (hands[1])
        {
        case 'X':
            if(hands[0] == 'A') score += 4;
            if(hands[0] == 'B') score += 1;
            if(hands[0] == 'C') score += 7;
            break;
        case 'Y':

            break;
        case 'Z':
            
            break;
        default:
            break;
        }
    }
    return 0;
}