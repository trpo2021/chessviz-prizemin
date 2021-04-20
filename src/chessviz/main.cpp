#include <libchessviz/checkMovePeshka.h>
#include <libchessviz/printBoard.h>
#include <libchessviz/figureMove.h>
#include <iostream>

using namespace std;
int main()
{
	cout << "--------------------------------" << endl
		 << "| Small letters - black shapes |" << endl
		 << "|  Big letters - white shapes  |" << endl
		 << "--------------------------------" << endl;
	int start2, finish2, int_start1, int_finish1;
	char start1 = 0, t, finish1;
	int BorW = 0;

	char ch[8][8]
			= {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
			   {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
			   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
			   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
			   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
			   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
			   {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			   {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
	printBoard(ch);

	while (true) {
		if (BorW % 2 == 0) {
			cout << endl << "White's move. Enter the coordinates: " << endl;
		} else {
			cout << endl << "Black's move. Enter the coordinates: " << endl;
		}
      
	cin >> start1 >> start2 >> t >> finish1 >> finish2;
	int_start1 = start1;
	int_finish1 = finish1;
	int_start1 = (int_start1 + 3) % 10;
	int_finish1 = (int_finish1 + 3) % 10;
	start2--;
	finish2--;

	if (checkMovePeshka(ch, int_start1, start2, finish2, int_finish1, BorW)
		== 1) {
		figureMove(ch, int_start1, start2, finish2, int_finish1);
		printBoard(ch);
		BorW++;
	}
  }
     
 	return 0;
}
