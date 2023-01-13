#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int part1(vector<string> &data) {
    int maxCalories = 0;
    int calories = 0;
    for (string line : data) {
        if (line == "") {
            if (calories > maxCalories) {
               maxCalories = calories; 
            }
            calories = 0;
        } else {
            calories += stoi(line);
        }
    }
    return maxCalories;
}

int part2(vector<string> &data) {
    return 0;
}

int main() {
    // Read the file
    ifstream file("d1.txt");
    string line;
    vector<string> data;
    while(getline(file, line)) {
        data.push_back(line);
    }

    cout << "part1: " << part1(data) << endl;
    cout << "part2: " << part2(data) << endl;
    return 0;
}
