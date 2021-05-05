#include "ctest.h"
#include "libchessviz/checkMoveQueen.h"

CTEST(checkMoveQueen, test1)
{
    // Checking the correct move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'Q', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', ' ', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', ' ', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveQueen, test2)
{
    // Checking the correct move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'Q', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', ' ', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', ' ', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveQueen, test3)
{
    // Checking the correct move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'b';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'Q', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', ' ', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', ' ', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveQueen, test4)
{
    // Checking the correct move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 0;
    char finish1 = 'd';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', ' ', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveQueen, test5)
{
    // Checking the correct move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 0;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', ' ', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveQueen, test6)
{
    // Checking the correct move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', ' ', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', ' ', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', 'q', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveQueen, test7)
{
    // Checking for incorrect move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', ' ', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveQueen, test8)
{
    // Checking for incorrect move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', ' ', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveQueen, test9)
{
    // Checking for incorrect move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', ' ', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', ' ', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', 'q', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveQueen, test10)
{
    // Checking for incorrect move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'd';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'd';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 9;
    char ch[8][8]
            = {{'r', 'n', 'b', ' ', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', ' ', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', 'q', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', 'P', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'P', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', ' ', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveQueen(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}
