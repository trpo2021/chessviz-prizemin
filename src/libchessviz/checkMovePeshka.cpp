#include <iostream>
#include <libchessviz/checkMovePeshka.h>

using namespace std;
int checkMovePeshka(
        char ch[][8],
        int int_start1,
        int start2,
        int finish2,
        int int_finish1,
        int BorW)
{
    if (ch[start2][int_start1] == 'P' && BorW % 2 == 0) {
        if (start2 == 6) {
            if (finish2 < (start2 - 2) || int_start1 != int_finish1
                || ch[finish2][int_finish1] != 32) {
                cout << "Error, Please enter the correct move!\n";
                return 0;
            }
            return 1;
        } else {
            if (finish2 < (start2 - 1) || int_start1 != int_finish1
                || ch[finish2][int_finish1] != 32) {
                cout << "Error, Please enter the correct move!\n";
                return 0;
            }
            return 1;
        }
    } else if (ch[start2][int_start1] == 'p' && BorW % 2 == 1) {
        if (start2 == 1) {
            if (finish2 > (start2 + 2) || int_start1 != int_finish1
                || ch[finish2][int_finish1] != 32) {
                cout << "Error, Please enter the correct move!\n";
                return 0;
            }
            return 1;
        } else {
            if (finish2 > (start2 + 1) || int_start1 != int_finish1
                || ch[finish2][int_finish1] != 32) {
                cout << "Error, Please enter the correct move!\n";
                return 0;
            }
            return 1;
        }
    } else {
        cout << "Error, Please enter the correct move!\n";
        return 0;
    }
