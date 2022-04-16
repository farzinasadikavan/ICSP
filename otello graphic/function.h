#pragma once
void board(char table[8][8]);
void first_board(char table[8][8]);
void input(int *turn, char table[8][8],int choice);
int condition(char table[8][8], int a, int b, int turn);
int cheking(char table[8][8], int turn);
int printgraphic(char table[8][8], int *turn);