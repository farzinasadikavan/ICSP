#include<stdio.h>
#include"stdafx.h"
#include "function.h"
int cheking (char table [8][8],int turn){
	int i, j;
	if (turn % 2 == 0) {
		for (i = 0; i <= 8; i++) {
			for (j = 0; j <= 8; j++) {
				if (table[i][j] == '.') {
					int x = i + 1;
					while (x < 8) {
						if (table[x][j] != 'B') {
							if (table[x][j] == 'W') {
								for (x; x < 8; x++) {
									if (table[x][j] == 'B')
										return 1;
								}
							}
							if (table[x][j] == '.')
								break;
						}
						x++;
					}
				}
				if (table[i][j] == '.') {
					int x = i - 1;
					while (x > 0) {
						if (table[x][j] != 'B') {
							if (table[x][j] == 'W') {
								for (x; x < 0; x--) {
									if (table[x][j] == 'B')
										return 1;
								}
							}
							if (table[x][j] == '.')
								break;
						}
						x--;
					}
				}
				if (table[i][j] == '.') {
					int x = j - 1;
					while (x > 0) {
						if (table[i][x] != 'B') {
							if (table[i][x] == 'W') {
								for (x; x > 0; x--) {
									if (table[i][x] == 'B')
										return 1;
								}
							}
							if (table[i][x] == '.')
								break;
						}
						x--;
					}
				}
				if (table[i][j] == '.') {
					int x = j + 1;
					while (x < 8) {
						if (table[i][x] != 'B') {
							if (table[i][x] == 'W') {
								for (x; x < 8; x++) {
									if (table[i][x] == 'B')
										return 1;
								}
							}
							if (table[i][x] == '.')
								break;
						}
						x++;
					}
				}
				if (table[i][j] == '.') {
					int x = i + 1;
					int y = j + 1;
					while (x < 8, y < 8) {
						if (table[x][y] != 'B') {
							if (table[x][y] == 'W') {
								x, y;
								while (x<8, y<8) {
									if (table[x][y] == 'B')
										return 1;
									x++, y++;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x++, y++;
					}
				}
				if (table[i][j] == '.') {
					int x = i + 1;
					int y = j - 1;
					while (x < 8, y > 0) {
						if (table[x][y] != 'B') {
							if (table[x][y] == 'W') {
								x, y;
								while (x<8, y>0) {
									if (table[x][y] == 'B')
										return 1;
									x++, y--;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x++, y--;
					}
				}
				if (table[i][j] == '.') {
					int x = i - 1;
					int y = j + 1;
					while (x > 0, y < 8) {
						if (table[x][y] != 'B') {
							if (table[x][y] == 'W') {
								x, y;
								while (x>0, y<8) {
									if (table[x][y] == 'B')
										return 1;
									x--, y++;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x--, y++;
					}
				}
				if (table[i][j] == '.') {
					int x = i - 1;
					int y = j - 1;
					while (x > 0, y > 0) {
						if (table[x][y] != 'B') {
							if (table[x][y] == 'W') {
								x, y;
								while (x>0, y>0) {
									if (table[x][y] == 'B')
										return 1;
									x--, y--;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x--, y--;
					}
				}
			}
		}
		return 0;
	}
	if(turn%2==1) {
		for (i = 0; i <= 8; i++) {
			for (j = 0; j <= 8; j++) {
				if (table[i][j] == '.') {
					int x = i + 1;
					while (x < 8){
						if (table[x][j] != 'W') {
							if (table[x][j] == 'B') {
								for (x; x < 8; x++) {
									if (table[x][j] == 'W')
										return 1;
								}
							}
								if (table[x][j] == '.')
									break;
							}
						x++;
					}
				}
				if (table[i][j] == '.') {
					int x = i - 1;
					while (x > 0) {
						if (table[x][j] != 'W') {
							if (table[x][j] == 'B') {
								for (x; x < 0; x--) {
									if (table[x][j] == 'W')
										return 1;
								}
							}
							if (table[x][j] == '.')
								break;
						}
						x--;
					}
				}
				if (table[i][j] == '.') {
					int x = j - 1;
					while (x > 0) {
						if (table[i][x] != 'W') {
							if (table[i][x] == 'B') {
								for (x; x > 0; x--) {
									if (table[i][x] == 'W')
										return 1;
								}
							}
							if (table[i][x] == '.')
								break;
						}
						x--;
					}
				}
				if (table[i][j] == '.') {
					int x = j + 1;
					while (x < 8) {
						if (table[i][x] != 'W') {
							if (table[i][x] == 'B') {
								for (x; x < 8; x++) {
									if (table[i][x] == 'W')
										return 1;
								}
							}
							if (table[i][x] == '.')
								break;
						}
						x++;
					}
				}
				if (table[i][j] == '.') {
					int x = i + 1;
					int y = j + 1;
					while (x < 8,y < 8) {
						if (table[x][y] != 'W') {
							if (table[x][y] == 'B') {
								x, y;
								while(x<8,y<8) {
									if (table[x][y] == 'W') 
										return 1;
									x++, y++;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x++, y++;
					}
				}
				if (table[i][j] == '.') {
					int x = i + 1;
					int y = j - 1;
					while (x < 8, y > 0) {
						if (table[x][y] != 'W') {
							if (table[x][y] == 'B') {
								x, y;
								while (x<8, y>0) {
									if (table[x][y] == 'W')
										return 1;
									x++, y--;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x++, y--;
					}
				}
				if (table[i][j] == '.') {
					int x = i - 1;
					int y = j + 1;
					while (x > 0, y < 8) {
						if (table[x][y] != 'W') {
							if (table[x][y] == 'B') {
								x, y;
								while (x>0, y<8) {
									if (table[x][y] == 'W')
										return 1;
									x--, y++;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x--, y++;
					}
				}
				if (table[i][j] == '.') {
					int x = i - 1;
					int y = j - 1;
					while (x > 0, y > 0) {
						if (table[x][y] != 'W') {
							if (table[x][y] == 'B') {
								x, y;
								while (x>0, y>0) {
									if (table[x][y] == 'W')
										return 1;
									x--, y--;
								}
							}
							if (table[x][y] == '.')
								break;
						}
						x--, y--;
					}
				}
				}
			}
			return 0;
		}
	}
		
