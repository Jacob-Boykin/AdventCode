#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> elfOrder(vector<int> minions)
{
    sort(minions.begin(), minions.end(), greater<int>());
    return minions;
}

void elfAdderx3(vector<int> santaSlaves)
{
    cout << santaSlaves[0] + santaSlaves[1] + santaSlaves[2];
}

int main()
{
    int Calories = 0;
    string foodItem;
    int food;
    int size;
    int Max = 0;
    vector<int> elves;
    fstream file;
    file.open("Elf_calories.txt");
    while(!(file.eof()))
    {
        getline(file, foodItem);
        size = foodItem.size();
        if(foodItem == "\n" || foodItem == "\r")
        {
            if(Calories > Max) Max = Calories;
            elves.push_back(Calories);
            Calories = 0;
        }

        else
        {
        food = stoi(foodItem);
        Calories += food;
        }
    }
    elves = elfOrder(elves);
    elfAdderx3(elves);
    file.close();
    return 0;
}