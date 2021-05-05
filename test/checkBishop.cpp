#include "ctest.h"
#include "libchessviz/checkMoveBishop.h"

CTEST(checkMoveBishop, test1)
{
    // Checking the correct move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'c';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 7;
    char finish1 = 'a';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveBishop, test2)
{
    // Checking the correct move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'b';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 6;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 2;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', 'n'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'B', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveBishop, test3)
{
    // Checking the correct move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'a';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'c';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 7;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', 'n'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveBishop, test4)
{
    // Checking the correct move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'c';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 0;
    char finish1 = 'h';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'n'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveBishop, test5)
{
    // Checking the correct move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'g';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 4;
    char finish1 = 'c';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 0;
    char ch[8][8]
            = {{'r', 'n', ' ', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'n'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', 'b', ' '},
               {'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveBishop, test6)
{
    // Checking the correct move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'h';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 3;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', ' ', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'n'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', 'b'},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 1
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMoveBishop, test7)
{
    // Checking for incorrect move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'h';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 3;
    char finish1 = 'f';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', ' ', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', 'n'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', 'b'},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveBishop, test8)
{
    // Checking for incorrect move of black
    int BorW = 1;
    // convert "char" into "int"
    char start1 = 'e';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 2;
    char finish1 = 'e';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', ' ', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'b', ' ', ' ', 'n'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveBishop, test9)
{
    // Checking for incorrect move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'a';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 5;
    char finish1 = 'd';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 5;
    char ch[8][8]
            = {{'r', 'n', ' ', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'b', ' ', ' ', 'n'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
               {'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMoveBishop, test10)
{
    // Checking for incorrect move of white
    int BorW = 0;
    // convert "char" into "int"
    char start1 = 'b';
    int int_start1 = (start1 + 3) % 10;
    int start2 = 4;
    char finish1 = 'b';
    int int_finish1 = (finish1 + 3) % 10;
    int finish2 = 6;
    char ch[8][8]
            = {{'r', 'n', ' ', 'q', 'k', 'b', ' ', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', 'b', ' ', ' ', 'n'},
               {' ', 'P', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', 'B', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', ' ', 'Q', 'K', 'B', 'N', 'R'}};

    // 1 or 0 ; Waiting 0
    int flag = checkMoveBishop(
            ch, int_start1, start2, finish2, int_finish1, BorW);

    ASSERT_EQUAL(0, flag);
}
