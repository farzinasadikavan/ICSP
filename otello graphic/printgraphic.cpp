#include "graphics.h"
#include <stdio.h>

int printgraphic(char table[8][8], int *turn) {
	int i, j, vorodi, x, y;
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(150, 150, 1);
	setcolor(BLUE);
	rectangle(50, 50, 850, 850);
	setfillstyle(SOLID_FILL, LIGHTCYAN);
	floodfill(52, 52, BLUE);
	setcolor(BLACK);
	for (i = 150; i < 800; i += 100) {
		line(i, 50, i, 850);
		line(50, i, 850, i);
	}

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (table[i][j] == 'W') {
				setcolor(WHITE);
				circle((i + 1) * 100, (j + 1) * 100, 40);
				setfillstyle(SOLID_FILL, WHITE);
				floodfill((i + 1) * 100, (j + 1) * 100, WHITE);

			}
			else if (table[i][j] == 'B') {
				setcolor(BLACK);
				circle((i + 1) * 100, (j + 1) * 100, 40);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill((i + 1) * 100, (j + 1) * 100, BLACK);
			}
		}
	}

	x = 100;
	y = 100;
	setcolor(RED);
	for (i = 40; i < 46; i++) {
		circle(x, y, i);
	}

	int black = 0;
	int white = 0;
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

	char arr[100];
	settextstyle(3, 0, 3);
	sprintf(arr,"black is %d",black);
	setbkcolor(LIGHTGREEN);
	outtextxy(50, 880, arr);
	sprintf(arr, "white is %d", white);
	outtextxy(150, 880, arr);
	settextstyle(3, 0, 5);
	outtextxy(400, 5,"otello");
	if (*turn % 2 == 0) {	
		outtextxy(300, 880, "turn BLACK");
	}
	else {
		outtextxy(300, 880, "turn WHITE");
	}

	



	char h;
	h = 0;
	while (h != ' ') {
		h = getchar();
		if (h == 's') {
			y = y + 100;
			if (y < 850 && x < 850 && y>0 && x>0) {
				setcolor(RED);
				for (i = 40; i < 46; i++) {
					circle(x, y, i);
				}
				setcolor(LIGHTCYAN);
				for (i = 40; i < 46; i++) {
					circle(x, y - 100, i);
				}

			}
			else {
				y = y - 100;
			}
		}
		else if (h == 'w') {
			y = y - 100;
			if (y < 850 && x < 850 && y>0 && x>0) {
				setcolor(RED);
				for (i = 40; i < 46; i++) {
					circle(x, y, i);
				}
				setcolor(LIGHTCYAN);
				for (i = 40; i < 46; i++) {
					circle(x, y + 100, i);
				}
			}
			else {
				y = y + 100;
			}
		}
		else if (h == 'd') {
			x = x + 100;
			if (y < 850 && x < 850 && y>0 && x>0) {
				setcolor(RED);
				for (i = 40; i < 46; i++) {
					circle(x, y, i);
				}
				setcolor(LIGHTCYAN);
				for (i = 40; i < 46; i++) {
					circle(x - 100, y, i);
				}
			}
			else {
				x = x - 100;
			}
		}
		else if (h == 'a') {
			x = x - 100;
			if (y < 850 && x < 850 && y>0 && x>0) {
				setcolor(RED);
				for (i = 40; i < 46; i++) {
					circle(x, y, i);
				}
				setcolor(LIGHTCYAN);
				for (i = 40; i < 46; i++) {
					circle(x + 100, y, i);
				}
			}
			else {
				x = x + 100;
			}
		}
	}
	vorodi = ((y-100) / 10)+((x-100)/100);
	return vorodi;
}