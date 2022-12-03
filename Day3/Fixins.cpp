#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<char> rucksacks;
    vector<char> duplicates;
    vector<char> lc;
    vector<char> uc;
    fstream file;
    string line;
    string c1;
    string c2;
    bool dupe = false;
    int prio = 0;
    file.open("ruckus.txt");
    while(!(file.eof()))
    {
        dupe = false;
        getline(file, line,'\r');
        c1 = line.substr(0,line.length()/2);
        c2 = line.substr(line.length()/2);
        for(int i = 0; i < c1.length(); i++)
        {
            for(int j = 0; j < c2.length(); j++)
            {
                dupe = false;
                if(c1[i] == c2[j]) 
                {
                    duplicates.push_back(c1[i]);
                    dupe = true;
                    break;
                }
            }
            if(dupe == true)
            {
                break;
            }
        }
    }

    for(auto i : duplicates)
    {
        for(char C = 65, c = 97; C < 91, c < 123; C++, c++)
        {
            if(duplicates[i] == C)
            {
                prio += (C - 38);
            }
            else if(duplicates[i] == c)
            {
                prio += (c - 96);
            }
        }
    }
    cout << prio;
    file.close();
    return 0;
}