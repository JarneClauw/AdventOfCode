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
