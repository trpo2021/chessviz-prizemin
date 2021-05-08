#include <iostream>
#include <libchessviz/checkMoveBishop.h>
#include <libchessviz/checkMoveKing.h>
#include <libchessviz/checkMoveKnight.h>
#include <libchessviz/checkMovePeshka.h>
#include <libchessviz/checkMoveQueen.h>
#include <libchessviz/checkMoveRook.h>
#include <libchessviz/error.h>
#include <libchessviz/figureMove.h>
#include <libchessviz/gameprocess.h>
#include <libchessviz/printBoard.h>

using namespace std;
void gameprocess()
{
    cout << "--------------------------------" << endl
         << "| Small letters - black shapes |" << endl
         << "|  Big letters - white shapes  |" << endl
         << "--------------------------------" << endl;
    int start2, finish2, int_start1, int_finish1;
    char start1, t, finish1;
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
            figureMove(ch, int_start1, start2, int_finish1, finish2);
            printBoard(ch);
            BorW++;
        } else if (
                checkMoveRook(
                        ch, int_start1, start2, finish2, int_finish1, BorW)
                == 2) {
            figureMove(ch, int_start1, start2, int_finish1, finish2);
            printBoard(ch);
            BorW++;
        } else if (
                checkMoveKnight(
                        ch, int_start1, start2, finish2, int_finish1, BorW)
                == 1) {
            figureMove(ch, int_start1, start2, int_finish1, finish2);
            printBoard(ch);
            BorW++;
        } else if (
                checkMoveBishop(
                        ch, int_start1, start2, finish2, int_finish1, BorW)
                == 1) {
            figureMove(ch, int_start1, start2, int_finish1, finish2);
            printBoard(ch);
            BorW++;
        } else if (
                checkMoveKing(
                        ch, int_start1, start2, finish2, int_finish1, BorW)
                == 1) {
            figureMove(ch, int_start1, start2, int_finish1, finish2);
            printBoard(ch);
            BorW++;
        } else if (
                checkMoveQueen(
                        ch, int_start1, start2, finish2, int_finish1, BorW)
                == 1) {
            figureMove(ch, int_start1, start2, int_finish1, finish2);
            printBoard(ch);
            BorW++;
        } else {
            error();
        }
    }
}
