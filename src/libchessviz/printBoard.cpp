#include <libchessviz/printBoard.h>
#include <iostream>

using namespace std;
void printBoard(char ch[][8])
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << ch[i][j] << " ";
		}
		cout << endl;
	}
}
