#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

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
    if (calories > maxCalories) {
        maxCalories = calories;
    }
    return maxCalories;
}

int part2(vector<string> &data) {
    priority_queue<int, vector<int>, greater<int>> maxCalories;
    int calories = 0;
    int size = 3;
    for (string line : data) {
        if (line == "") {
            maxCalories.push(calories);
            if (maxCalories.size() == size+1) {
                maxCalories.pop();
            }
            calories = 0;
        } else {
            calories += stoi(line);
        }
    }
    maxCalories.push(calories);
    maxCalories.pop();
    calories = 0;
    for (int i=0; i<size; i++) {
        calories += maxCalories.top();
        maxCalories.pop();
    }
    return calories;
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
