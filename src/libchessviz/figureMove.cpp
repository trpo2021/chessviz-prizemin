#include <libchessviz/figureMove.h>

void figureMove(char ch[][8], int int_start1, int start2, int finish2, int int_finish1)
{
	char figure;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == int_start1 && i == start2) {
				figure = ch[i][j];
				ch[i][j] = ' ';
			}
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == int_finish1 && i == finish2) {
				ch[i][j] = figure;
			}
		}
	}
}
