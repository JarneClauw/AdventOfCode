#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

enum E_RPS {Rock, Paper, Scissors};

/**
 * Returns the score of the game.
 * Addition of shape
 * - Rock: 1
 * - Paper: 2
 * - Scissors: 3
 * and the outcome of the game
 * - Lose: 0
 * - Draw: 3
 * - Win: 6
*/
int play(E_RPS you, E_RPS opponent);
/**
 * Determine what to play given the opponents hand and outcome.
*/
E_RPS play2(E_RPS opponent, int outcome);
E_RPS toEnum(char move);
int toInt(E_RPS move);
E_RPS fromInt(int move);

#endif