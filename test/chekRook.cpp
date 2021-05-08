#include "ctest.h"
#include "libchessviz/checkMoveRook.h"

CTEST(checkMoveRook, test1)
{
    // Checking the correct move of white(horizontal right)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'a';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'g';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'R', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {' ', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test2)
{
    // Checking the correct move of white(horizontal left)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', 'p', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'R', ' ', ' ', 'N'},
               {' ', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test3)
{
    // Checking the correct move of white(vertical up)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'e';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', 'p', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'R', ' ', ' ', 'N'},
               {' ', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test4)
{
    // Checking the correct move of white(vertical down)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'h';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 4;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 7;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', 'p', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', ' ', ' ', 'P'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R'},
               {' ', ' ', ' ', ' ', ' ', 'N', ' ', ' '},
               {'R', 'P', 'P', 'P', 'P', 'P', 'P', ' '},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', ' '}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test5)
{
    // Checking the correct move of black(horizontal left)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'h';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 3;
    char finish1 = 'b';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', ' '},
               {'p', 'p', ' ', 'p', 'p', 'p', 'p', ' '},
               {' ', ' ', 'p', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', ' ', ' ', 'r'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'p'},
               {' ', ' ', ' ', ' ', ' ', 'N', ' ', ' '},
               {'R', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test6)
{
    // Checking the correct move of black(horizontal right)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'a';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 3;
    char finish1 = 'd';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 3;
    char ch[8][8]
            = {{' ', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {' ', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', 'p', ' ', ' ', 'n', ' ', ' '},
               {'r', ' ', ' ', ' ', ' ', ' ', ' ', 'P'},
               {'p', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', 'N', ' ', ' '},
               {'R', 'P', 'P', 'P', 'P', 'P', 'P', ' '},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test7)
{
    // Checking the correct move of black(vertical up)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'a';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 3;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 0;
    char ch[8][8]
            = {{' ', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {' ', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', 'p', ' ', ' ', 'n', ' ', ' '},
               {'r', ' ', ' ', ' ', ' ', ' ', ' ', 'P'},
               {'p', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', 'N', ' ', ' '},
               {'R', 'P', 'P', 'P', 'P', 'P', 'P', ' '},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test8)
{
    // Checking the correct move of black(vertical down)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'b';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'b';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{' ', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {' ', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', 'r', 'p', ' ', ' ', 'n', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P'},
               {'p', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', 'N', ' ', ' '},
               {'R', 'P', 'P', 'P', 'P', 'P', 'P', ' '},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "2"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(2, flag);
}

CTEST(checkMoveRook, test9)
{
    // Checking for incorrect move of white(outside the chessboard)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'h';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 9;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {' ', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', 'p', ' ', ' ', 'n', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P'},
               {'p', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', 'N', ' ', ' '},
               {'R', 'P', 'P', 'P', 'P', 'P', 'P', ' '},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "0"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveRook, test10)
{
    // Checking for incorrect move of white(diagonal move)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'a';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 6;
    char finish1 = 'c';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {' ', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', 'p', ' ', ' ', 'n', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P'},
               {'p', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', 'N', ' ', ' '},
               {'R', 'P', 'P', 'P', 'P', 'P', 'P', ' '},
               {' ', 'N', 'B', 'Q', 'K', 'B', ' ', 'R'}};

    // 2 or 1 ; Waiting "0"
    int flag
            = checkMoveRook(ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}
