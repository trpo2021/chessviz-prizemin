#include "ctest.h"
#include "libchessviz/checkMoveKnight.h"

CTEST(checkMoveKnight, test1)
{
    // Checking the correct move of white(first)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'b';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'c';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKnight, test2)
{
    // Checking the correct move of white(first)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'g';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKnight, test3)
{
    // Checking the correct move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'c';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'N', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', ' ', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKnight, test4)
{
    // Checking the correct move of black(first)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'b';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 0;
    char finish1 = 'c';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'N', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', ' ', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKnight, test5)
{
    // Checking the correct move of black(first)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'g';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 0;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'N', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', ' ', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKnight, test6)
{
    // Checking the correct move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'h';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'n'},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'N', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', ' ', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveKnight, test7)
{
    // Checking for incorrect move of white(first)
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'g';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveKnight, test8)
{
    // Checking for incorrect move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'c';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'N', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', ' ', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveKnight, test9)
{
    // Checking for incorrect move of black(first)
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'b';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 0;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'N', ' ', ' ', ' ', 'P', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', ' ', 'P'},
               {'R', ' ', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveKnight, test10)
{
    // Checking for incorrect move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'c';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', ' ', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', 'n', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'N', ' ', ' ', ' ', 'P', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', ' ', 'P'},
               {'R', ' ', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveKnight(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}
