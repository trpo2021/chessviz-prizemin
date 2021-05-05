#include <iostream>
#include <libchessviz/checkMoveRook.h>

int checkMoveRook(
        char ch[][8],
        int int_start1,
        int start2,
        int finish2,
        int int_finish1,
        int BorW)
{
    if ((ch[start2][int_start1] == 'R' && BorW % 2 == 0)
        || (ch[start2][int_start1] == 'r' && BorW % 2 == 1)) {
        if (finish2 < start2 && finish2 > 0 && int_start1 == int_finish1) {
            int k = 0;
            int i = start2 - 1;
            while (i > finish2) {
                if (ch[i][int_start1] == 32) {
                    k = 1;
                    i--;
                } else {
                    k = 0;
                    return 0;
                }
            }
            k++;
            return k;
        } else if (
                finish2 > start2 && finish2 < 9 && int_start1 == int_finish1) {
            int k = 0;
            int i = start2 + 1;
            while (i < finish2) {
                if (ch[i][int_start1] == 32) {
                    k = 1;
                    i++;
                } else {
                    k = 0;
                    return k;
                }
            }
            k++;
            return k;
        } else if (
                int_start1 < int_finish1 && int_finish1 < 8
                && start2 == finish2) {
            int k = 0;
            int i = int_start1 + 1;
            while (i < int_finish1) {
                if (ch[start2][i] == 32) {
                    k = 1;
                    i++;
                } else {
                    k = 0;
                    return k;
                }
            }
            k++;
            return k;
        } else if (
                int_start1 > int_finish1 && int_finish1 > -1
                && start2 == finish2) {
            int k = 0;
            int i = int_start1 - 1;
            while (i > int_finish1) {
                if (ch[start2][i] == 32) {
                    k = 1;
                    i--;
                } else {
                    k = 0;
                    return k;
                }
            }
            k++;
            return k;
        }
    }
    return 0;
}
