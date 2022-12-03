#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int Calories = 0;
    string foodItem;
    int food;
    int size;
    int Max = 0;
    fstream file;
    file.open("Elf_calories.txt");
    while(!(file.eof()))
    {
        getline(file, foodItem);
        size = foodItem.size();
        cout << foodItem.size() << endl;
        if(foodItem == "\n" || foodItem == "\r")
        {
            if(Calories > Max) Max = Calories;
            Calories = 0;
        }
        else{
        food = stoi(foodItem);
        Calories += food;
        }
    }
    cout << Max;
    file.close();
    return 0;
}