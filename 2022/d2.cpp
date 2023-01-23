#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>
#include "../rockPaperScissors.h"

using namespace std;

typedef vector<tuple<E_RPS, E_RPS>> RPSGame;

int part1(RPSGame &data) {
    int totalScore = 0;
    E_RPS opponent, you;
    for (auto t : data) {
        tie(opponent, you) = t;
        totalScore += play(you, opponent);
    }
    return totalScore;
}

int part2(RPSGame &data) {
    return 0;
}

int main() {
    // Read the file
    ifstream file("2022/d2.txt");
    string line;
    RPSGame data;
    while(getline(file, line)) {
        data.push_back(make_tuple(toEnum(line[0]), toEnum(line[2])));
    }

    // Print out our result
    cout << "part1: " << part1(data) << endl;
    cout << "part2: " << part2(data) << endl;
    return 0;
}