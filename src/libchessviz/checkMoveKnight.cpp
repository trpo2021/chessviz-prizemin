#include <iostream>
#include <libchessviz/checkMoveKnight.h>

int checkMoveKnight(
        char ch[][8],
        int int_start1,
        int start2,
        int finish2,
        int int_finish1,
        int BorW)
{
    const int min = -1, max = 8;
    if (((ch[start2][int_start1] == 'N' && BorW % 2 == 0)
         || (ch[start2][int_start1] == 'n' && BorW % 2 == 1))
        && finish2 > min && finish2 < max) {
        if (int_start1 == int_finish1 + 1 && start2 == finish2 - 2
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
        if (int_start1 == int_finish1 + 2 && start2 == finish2 - 1
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
        if (int_start1 == int_finish1 + 2 && start2 == finish2 + 1
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
        if (int_start1 == int_finish1 + 1 && start2 == finish2 + 2
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
        if (int_start1 == int_finish1 - 1 && start2 == finish2 + 2
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
        if (int_start1 == int_finish1 - 2 && start2 == finish2 + 1
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
        if (int_start1 == int_finish1 - 2 && start2 == finish2 - 1
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
        if (int_start1 == int_finish1 - 1 && start2 == finish2 - 2
            && ch[finish2][int_finish1] == 32) {
            return 1;
        }
    }
    return 0;
}
