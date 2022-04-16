#include "stdafx.h"
#include<stdio.h>
#include "function.h"
int main()
{
	char table[8][8];
	int turn=0, play=1;
	first_board(table);
	board(table);
	int a, b;
	while (cheking(table,turn)==1){
		input(&turn, table);
	}
	
}