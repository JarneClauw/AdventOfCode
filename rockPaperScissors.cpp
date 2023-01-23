#include "rockPaperScissors.h"

/**
 * PUBLIC FUNCTIONS
*/
int play(E_RPS you, E_RPS opponent) {
    int score = toInt(you);
    int status = (toInt(you)-toInt(opponent)+3)%3;
    switch(status) {
        // Draw
        case 0:
            score += 3;
            break;
        // Win
        case 1:
            score += 6;
            break;
        // Lose
        case 2:
            break;
    }
    return score;
}

E_RPS play2(E_RPS opponent, int outcome) {
    int status = (toInt(opponent) + outcome)%3;
    if (status == 0) {
        status = 3;
    }
    return fromInt(status);
}

E_RPS toEnum(char move) {
    E_RPS e;
    switch(move) {
        case 'A':
        case 'X':
            e = Rock;
            break;
        case 'B':
        case 'Y':
            e = Paper;
            break;
        case 'C':
        case 'Z':
            e = Scissors;
            break;
    }
    return e;
}

int toInt(E_RPS move) {
    int i;
    switch(move) {
        case Rock:
            i = 1;
            break;
        case Paper:
            i = 2;
            break;
        case Scissors:
            i = 3;
            break;
    }
    return i;
}

E_RPS fromInt(int move) {
    E_RPS e;
    switch(move) {
        case 1:
            e = Rock;
            break;
        case 2:
            e = Paper;
            break;
        case 3:
            e = Scissors;
            break;
    }
    return e;
}
