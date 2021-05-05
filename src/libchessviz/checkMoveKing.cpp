#include <iostream>
#include <libchessviz/checkMoveKing.h>
int checkMoveKing(
        char ch[][8],
        int int_start1,
        int start2,
        int finish2,
        int int_finish1,
        int BorW)
{
    if ((ch[start2][int_start1] == 'K' && BorW % 2 == 0)
        || (ch[start2][int_start1] == 'k' && BorW % 2 == 1)) {
        const int min = -1, max = 8;
        if (start2 + 1 == finish2 && int_start1 + 1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
        if (start2 - 1 == finish2 && int_start1 - 1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
        if (start2 == finish2 && int_start1 + 1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
        if (start2 == finish2 && int_start1 - 1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
        if (start2 + 1 == finish2 && int_start1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
        if (start2 - 1 == finish2 && int_start1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
        if (start2 - 1 == finish2 && int_start1 + 1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
        if (start2 + 1 == finish2 && int_start1 - 1 == int_finish1
            && ch[finish2][int_finish1] == 32 && finish2 > min
            && finish2 < max) {
            return 1;
        }
    }
    return 0;
}
