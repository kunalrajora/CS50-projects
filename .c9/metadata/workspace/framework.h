{"filter":false,"title":"framework.h","tooltip":"/framework.h","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":59,"column":24},"action":"insert","lines":["#define _XOPEN_SOURCE 500","","#include <cs50.h>","#include <stdio.h>","#include <stdlib.h>","#include <unistd.h>","#include <time.h>","","","/*","* Clears screen using ANSI escape sequences.","*/","","void","clear(void);","","/*"," * Greets player."," */","","void","greet(void);","","/*"," * Check whether the current board layout is solvable."," */","","int","solvable(int d, int **board);","","/*"," * Initializes the game's board with tiles numbered 1 through d*d - 1"," * (i.e., fills 2D array with values but does not actually print them).  "," */","","void","init(int d, int **board, int *SET_SEED, int MAX_TRIES);","","/* "," * Prints the board in its current state."," */","","void","draw(int d, int **board);","","/* "," * If tile borders empty space, moves tile and returns true, else"," * returns false. "," */","","bool","move(int tile, int d, int **board);","","/*"," * Returns true if game is won (i.e., board is in winning configuration), "," * else false."," */","","bool","won(int d, int **board);"],"id":1}]]},"ace":{"folds":[],"scrolltop":728.5,"scrollleft":0,"selection":{"start":{"row":59,"column":24},"end":{"row":59,"column":24},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":44,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1456630545095,"hash":"2ed7c226f9b0e96be3f6c7070dd14e8eb499091c"}