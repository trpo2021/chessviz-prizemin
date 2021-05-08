#include <iostream>
#include <libchessviz/checkMoveQueen.h>
int checkMoveQueen(
        char ch[][8],
        int int_start1,
        int start2,
        int finish2,
        int int_finish1,
        int BorW)
{
    const int min = -1, max = 8;
    if ((ch[start2][int_start1] == 'Q' && BorW % 2 == 0)
        || (ch[start2][int_start1] == 'q' && BorW % 2 == 1)) {
        if (start2 > finish2 && int_start1 > int_finish1 && finish2 > min
            && finish2 < max) {
            if (start2 - finish2 == int_start1 - int_finish1) {
                for (int i = start2 - 1, j = int_start1 - 1; i > finish2;
                     --i, --j) {
                    if (ch[i][j] != 32) {
                        return 0;
                    }
                }
                return 1;
            }
        }
        if (start2 > finish2 && int_start1 < int_finish1 && finish2 > min
            && finish2 < max) {
            if (start2 - finish2 == int_finish1 - int_start1) {
                for (int i = start2 - 1, j = int_start1 + 1; i > finish2;
                     --i, ++j) {
                    if (ch[i][j] != 32) {
                        return 0;
                    }
                }
                return 1;
            }
        }
        if (start2 < finish2 && int_start1 < int_finish1 && finish2 > min
            && finish2 < max) {
            if (finish2 - start2 == int_finish1 - int_start1) {
                for (int i = start2 + 1, j = int_start1 + 1; i < finish2;
                     ++i, ++j) {
                    if (ch[i][j] != 32) {
                        return 0;
                    }
                }
                return 1;
            }
        }
        if (start2 < finish2 && int_start1 > int_finish1 && finish2 > min
            && finish2 < max) {
            if (finish2 - start2 == int_start1 - int_finish1) {
                for (int i = start2 + 1, j = int_start1 - 1; i < finish2;
                     ++i, --j) {
                    if (ch[i][j] != 32) {
                        return 0;
                    }
                }
                return 1;
            }
        }
        // horizontal moves
        if (start2 == finish2 && (int_finish1 > min && int_finish1 < max)) {
            if (int_start1 < int_finish1) {
                for (int i = int_start1 + 1; i < int_finish1; ++i) {
                    if (ch[start2][i] != 32) {
                        return 0;
                    }
                }
            }
            // left move
            if (int_start1 > int_finish1) {
                for (int i = int_start1 - 1; i > int_finish1; --i) {
                    if (ch[start2][i] != 32) {
                        return 0;
                    }
                }
            }
            return 1;
        }

        // vertical moves
        if (int_start1 == int_finish1 && (finish2 > min && finish2 < max)) {
            if (start2 > finish2) {
                for (int i = start2 - 1; i > finish2; --i) {
                    if (ch[i][int_start1] != 32) {
                        return 0;
                    }
                }
            }
            // down move
            if (start2 < finish2) {
                for (int i = start2 + 1; i < finish2; ++i) {
                    if (ch[i][int_start1] != 32) {
                        return 0;
                    }
                }
            }
            return 1;
        }
    }
    return 0;
}
