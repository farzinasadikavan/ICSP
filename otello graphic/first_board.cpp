
#include<stdio.h>
#include"stdafx.h"
#include "function.h"




void first_board(char table[8][8]) {

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			table[i][j] = '.';
			table[3][3] = 'B';
			table[4][4] = 'B';
			table[4][3] = 'W';
			table[3][4] = 'W';
		}
	}
}