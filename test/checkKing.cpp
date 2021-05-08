#include "ctest.h"
#include "libchessviz/checkMoveKing.h"

CTEST(checkMoveKing, test1)
{
    // Checking the correct move of white(move up)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'e';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 6;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test2)
{
    // Checking the correct move of white(move left)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'd';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'K', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', ' ', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test3)
{
    // Checking the correct move of white(move right)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'K', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', ' ', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test4)
{
    // Checking the correct move of white(move down)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'e';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 6;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'K', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', ' ', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test5)
{
    // Checking the correct move of black(move down)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 0;
    char finish1 = 'e';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 1;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test6)
{
    // Checking the correct move of black(move up)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'e';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 1;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', ' ', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'k', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test7)
{
    // Checking the correct move of black(move left)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'd';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', ' ', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'k', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test8)
{
    // Checking the correct move of black(move right)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', ' ', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'k', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKing, test9)
{
    // Checking for incorrect move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'g';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'K', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', ' ', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}
CTEST(checkMoveKing, test10)
{
    // Checking for incorrect move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'g';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', ' ', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'k', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag
            = checkMoveKing(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}
