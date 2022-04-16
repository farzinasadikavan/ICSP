#include<stdio.h>
#include"stdafx.h"
#include<stdio.h>
#include"stdafx.h"
#include "function.h"

int condition(char table[8][8], int a, int b, int turn) {
	char themp = table[a][b];
	int i = 0;
	int j = 0;
	int c, n , y;
	int counter = 0;
	int k = 0;

	if (turn % 2 == 0) {
		if (table[a + 1][b] == 'W') {
			int x = a + 1;
			while(x<8){
				if (table[x][b] == '.') {
					counter = 0;
					break;
				}
				else if (table[x][b] == 'B') {
					break;
				}
				else
					counter++;
				x++;
			}
			if (counter != 0) {
				for (int c = a; (c < 8) && (counter >= 0); c++, counter--) {
					table[c][b] = 'B';
				}
				counter = 0;
				k++;
			}
		}
		if (table[a - 1][b] == 'W') {
			int x = a - 1;
			while(x>0){
				if (table[x][b] == '.') {
					counter = 0;
					break;
				}
				else if (table[x][b] == 'B') {
					break;
				}
				else
					counter++;
				x--;
			}
				if (counter != 0) {
					for (int c = a; c > 0 && counter >= 0; c--, counter--) {
						table[c][b] = 'B';
					}
					counter = 0;
					k++;
				}
			}
		if (table[a][b + 1] == 'W') {
			int x = b + 1;
				while(x<8) {
				if (table[a][x] == '.') {
					counter = 0;
					break;
				}
				else if (table[a][x] == 'B') {
					break;
				}
				else
					counter++;
				x++;
			}
			if (counter != 0) {
				for (int c = b; c<8 && counter >= 0; c++, counter--) {
					table[a][c] = 'B';
				}
				counter = 0;
				k++;
			}
		}
		if (table[a][b - 1] == 'W') {
			int x = b - 1;
			while (x>0){
				if (table[a][x] == '.') {
					counter = 0;
					break;
				}
				else if (table[a][x] == 'B') {
					break;
				}
				else
					counter++;
				x--;
			}
			if (counter != 0) {
				for (int c = b; c >0 && counter >= 0; c--, counter--) {
					table[a][c] = 'B';
				}
				counter = 0;
				k++;
			}
		}
		if (table[a + 1][b - 1] == 'W') {
			int x = a + 1;
			int y = b - 1;
			while (x < 8, y > 0) {
				if (table[x][y] == '.') {
					counter = 0;
					break;
				}
				else if (table[x][y] == 'B') {
					break;
				}
				else
					counter++;
				x++, y--;
			}
			if (counter != 0) {
				int c = a;
				int n = b;
				while(c < 8 && n > 0 && counter >= 0) {
					table[c][n] = 'B';
					c++, n--, counter--;
				}
				counter = 0;
				k++;
			}
		}
		if (table[a + 1][b + 1] == 'W') {
			int x = a + 1;
			int y = b + 1;
			while (x < 8, y < 8) {
				if (table[x][y] == '.') {
					counter = 0;
					break;
				}
				else if (table[x][y] == 'B') {
					break;
				}
				else
					counter++;
				x++, y++;
			}
			if (counter != 0) {
				int c = a;
				int n = b;
				while (c < 8 && n < 8 && counter >= 0) {
					table[c][n] = 'B';
					c++, n++, counter--;
				}
				counter = 0;
				k++;
			}
		}
		if (table[a - 1][b + 1] == 'W') {
			int x = a - 1;
			int y = b + 1;
			while (x > 0, y < 8) {
				if (table[x][y] == '.') {
					counter = 0;
					break;
				}
				else if (table[x][y] == 'B') {
					break;
				}
				else
					counter++;
				x--, y++;
			}
			if (counter != 0) {
				int c = a;
				int n = b;
				while (c > 0 && n < 8 && counter >= 0) {
					table[c][n] = 'B';
					c--, n++, counter--;
				}
				counter = 0;
				k++;
			}
		}
		if (table[a - 1][b - 1] == 'W') {
			int x = a - 1;
			int y = b - 1;
			while (x > 0, y > 0) {
				if (table[x][y] == '.') {
					counter = 0;
					break;
				}
				else if (table[x][y] == 'B') {
					break;
				}
				else
					counter++;
				x--, y--;
			}
			if (counter != 0) {
				int c = a;
				int n = b;
				while (c > 0 && n > 0 && counter >= 0) {
					table[c][n] = 'B';
					c--, n--, counter--;
				}
				counter = 0;
				k++;
			}
		}
		}
		else{
			if (table[a + 1][b] == 'B') {
				int x = a + 1;
				while(x<8) {
					if (table[x][b] == '.') {
						counter = 0;
						break;
					}
					else if (table[x][b] == 'W') {
						break;
					}
					else
						counter++;
					x++;
				}
				if (counter != 0) {
					for (int c = a; (c < 8) && (counter >= 0); c++, counter--) {
						table[c][b] = 'W';
					}
					counter = 0;
					k++;
				}
			}
			if (table[a - 1][b] == 'B') {
				int x = a - 1;
				while(x>0) {
					if (table[x][b] == '.') {
						counter = 0;
						break;
					}
					else if (table[x][b] == 'W') {
						break;
					}
					else
						counter++;
					x--;
				}
				if (counter != 0) {
					for (int c = a; c > 0 && counter >= 0; c--, counter--) {
						table[c][b] = 'W';
					}
					counter = 0;
					k++;
				}
			}
			if (table[a][b + 1] == 'B') {
				int x = b + 1;
				while(x<8) {
					if (table[a][x] == '.') {
						counter = 0;
						break;
					}
					else if (table[a][x] == 'W') {
						break;
					}
					else
						counter++;
					x++;
				}
				if (counter != 0) {
					for (int c = b; c<8 && counter >= 0; c++, counter--) {
						table[a][c] = 'W';
					}
					counter = 0;
					k++;
				}
			}
			if (table[a][b - 1] == 'B') {
				int x = b - 1;
				while(x>0) {
					if (table[a][x] == '.') {
						counter = 0;
						break;
					}
					else if (table[a][x] == 'W') {
						break;
					}
					else
						counter++;
					x--;
				}
				if (counter != 0) {
					for (int c = b; c > 0 && counter >= 0; c--, counter--) {
						table[a][c] = 'W';
					}
					counter = 0;
					k++;
				}
			}
			if (table[a + 1][b - 1] == 'B') {
				int x = a + 1;
				int y = b - 1;
				while (x < 8, y > 0) {
					if (table[x][y] == '.') {
						counter = 0;
						break;
					}
					else if (table[x][y] == 'W') {
						break;
					}
					else
						counter++;
					x++, y--;
				}
				if (counter != 0) {
					int c = a;
					int n = b;
					while (c < 8 && n > 0 && counter >= 0) {
						table[c][n] = 'W';
						c++, n--, counter--;
					}
					counter = 0;
					k++;
				}
			}
			if (table[a + 1][b + 1] == 'B') {
				int x = a + 1;
				int y = b + 1;
				while (x < 8, y < 8) {
					if (table[x][y] == '.') {
						counter = 0;
						break;
					}
					else if (table[x][y] == 'W') {
						break;
					}
					else
						counter++;
					x++, y++;
				}
				if (counter != 0) {
					int c = a;
					int n = b;
					while (c < 8 && n < 8 && counter >= 0) {
						table[c][n] = 'W';
						c++, n++, counter--;
					}
					counter = 0;
					k++;
				}
			}
			if (table[a - 1][b + 1] == 'B') {
				int x = a - 1;
				int y = b + 1;
				while (x > 0, y < 8) {
					if (table[x][y] == '.') {
						counter = 0;
						break;
					}
					else if (table[x][y] == 'W') {
						break;
					}
					else
						counter++;
					x--, y++;
				}
				if (counter != 0) {
					int c = a;
					int n = b;
					while (c > 0 && n < 8 && counter >= 0) {
						table[c][n] = 'W';
						c--, n++, counter--;
					}
					counter = 0;
					k++;
				}
			}
			if (table[a - 1][b - 1] == 'B') {
				int x = a - 1;
				int y = b - 1;
				while (x > 0, y > 0) {
					if (table[x][y] == '.') {
						counter = 0;
						break;
					}
					else if (table[x][y] == 'W') {
						break;
					}
					else
						counter++;
					x--, y--;
				}
				if (counter != 0) {
					int c = a;
					int n = b;
					while (c > 0 && n > 0 && counter >= 0) {
						table[c][n] = 'W';
						c--, n--, counter--;
					}
					counter = 0;
					k++;
				}
			}
	}
		return k;
	} 
