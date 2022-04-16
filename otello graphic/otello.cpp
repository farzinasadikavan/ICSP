#include "graphics.h"
#include <stdio.h>
#include "function.h"

int main() {
	int choice;
	int turn = 0;
	char table[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			table[i][j] = '.';
			table[3][3] = 'B';
			table[4][4] = 'B';
			table[4][3] = 'W';
			table[3][4] = 'W';
		}
	}

	initwindow(1000, 1000, "OTELLO");

	while (cheking(table, turn) == 1) {
		choice = printgraphic(table,&turn);
		input(&turn, table, choice);

	}
}