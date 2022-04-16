#include<stdio.h>
#include"stdafx.h"
#include "function.h"


void board(char table[8][8]) {
	printf("    0    1    2    3    4    5    6    7\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", i);
		for (int j = 0; j < 8; j++) {
			printf("    %c", table[i][j]);
		}
		printf("\n\n");
	}
}