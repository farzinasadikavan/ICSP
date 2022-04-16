#include<stdio.h>
#include"stdafx.h"
#include "function.h"
#include <stdlib.h>

void input(int *turn, char table[8][8],int choice) {
	int a, b, valid , k;
	k = 1;
	while (k==1) {
		if (*turn % 2 == 0) {
				printf("player 1 turn");
				int c;
				c = choice;
				b= c / 10;
				a= c % 10;
				if ((a < 8) && (b < 8) && (table[a][b] == '.')) {
					if (condition(table, a, b,* turn)) {
						table[a][b] = 'B';
						*turn=*turn+1;
					}
					board(table);
					int i, j, black = 0, white = 0;
					for (i = 0; i < 8; i++) {
						for (j = 0; j < 8; j++) {
							table[i][j];
							if (table[i][j] == 'B') {
								black++;
							}
							else if (table[i][j] == 'W') {
								white++;
							}
						}

					}
					printf("black is %d", black);
					printf("	white is %d\n", white);
					break;
				}
				else {
					printf("ENTER A CORRECT NUMBER\n");
					k = 0;
				}
			}
			else {
				printf("player 2 turn");
				int c;
				c = choice;
				b = c / 10;
				a = c % 10;
				if ((a < 8) && (b < 8) && (table[a][b] == '.')) {
					if(condition(table, a, b, *turn)){
						table[a][b] = 'W';
						*turn = *turn + 1;
					}
					board(table);
					int i, j, black = 0, white = 0;
					for (i = 0; i < 8; i++) {
						for (j = 0; j < 8; j++) {
							table[i][j];
							if (table[i][j] == 'B') {
								black++;
							}
							else if (table[i][j] == 'W') {
								white++;
							}
						}

					}
					printf("black is %d", black);
					printf("	white is %d\n", white);
					break;
				}
				else {
					printf("ENTER A CORRECT NUMBER\n");
					k = 0;
				}
			}
		}

	}
