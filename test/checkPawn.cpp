#include "ctest.h"
#include "libchessviz/checkMovePeshka.h"

CTEST(checkMovePeshka, test1)
{
    //Checking the correct move of white(first)
    int BorW = 0;
    int int_start1 = 1;
    int start2 = 6;
    int int_finish1 = 1;
    int finish2 = 4;
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
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test2)
{
    //Checking the correct move of white
    int BorW = 0;
    int int_start1 = 3;
    int start2 = 4;
    int int_finish1 = 3;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', ' ', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 1
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test3)
{
    //Checking the correct move of white(eating)
    int BorW = 0;
    int int_start1 = 3;
    int start2 = 4;
    int int_finish1 = 4;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', ' ', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', 'p', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', ' ', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 1
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test4)
{
    //Checking the correct move of white(eating)
    int BorW = 0;
    int int_start1 = 3;
    int start2 = 4;
    int int_finish1 = 2;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', ' ', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'p', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', 'P', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', ' ', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 1
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test5)
{
    //Checking the correct move of black(first)
    int BorW = 1;
    int int_start1 = 5;
    int start2 = 1;
    int int_finish1 = 5;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 1
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test6)
{
    //Checking the correct move of black
    int BorW = 1;
    int int_start1 = 1;
    int start2 = 2;
    int int_finish1 = 1;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', ' ', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', 'p', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 1
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test7)
{
    //Checking the correct move of black(eating)
    int BorW = 1;
    int int_start1 = 1;
    int start2 = 2;
    int int_finish1 = 2;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', ' ', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', 'p', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', 'P', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', ' ', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 1
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test8)
{
    //Checking the correct move of black(eating)
    int BorW = 1;
    int int_start1 = 1;
    int start2 = 2;
    int int_finish1 = 0;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', ' ', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', 'p', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 1
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(1, flag);
}

CTEST(checkMovePeshka, test9)
{
    //Checking for incorrect move of white(>2)
    int BorW = 0;
    int int_start1 = 6;
    int start2 = 6;
    int int_finish1 = 6;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 0
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMovePeshka, test10)
{
    //Checking for incorrect move of white(move back)
    int BorW = 0;
    int int_start1 = 6;
    int start2 = 4;
    int int_finish1 = 6;
    int finish2 = 6;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', 'P', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', ' ', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 0
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMovePeshka, test11)
{
    //Checking for incorrect move of white(pseudo eating)
    int BorW = 0;
    int int_start1 = 6;
    int start2 = 4;
    int int_finish1 = 7;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', 'P', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', ' ', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 0
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMovePeshka, test12)
{
    //Checking for incorrect move of white(move right)
    int BorW = 0;
    int int_start1 = 6;
    int start2 = 4;
    int int_finish1 = 3;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', 'P', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', ' ', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 0
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMovePeshka, test13)
{
    //Checking for incorrect move of black(first move)
    int BorW = 1;
    int int_start1 = 1;
    int start2 = 1;
    int int_finish1 = 1;
    int finish2 = 4;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 0
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMovePeshka, test14)
{
    //Checking for incorrect move of black(move back)
    int BorW = 1;
    int int_start1 = 3;
    int start2 = 2;
    int int_finish1 = 3;
    int finish2 = 1;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 0
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(0, flag);
}

CTEST(checkMovePeshka, test15)
{
    //Checking for incorrect move of black(pseudo eating)
    int BorW = 1;
    int int_start1 = 3;
    int start2 = 2;
    int int_finish1 = 4;
    int finish2 = 3;
    char ch[8][8]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', ' ', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', 'p', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    //1 or 0 ; Waiting 0
    int flag = checkMovePeshka(
            ch,
            int_start1,
            start2,
            finish2,
            int_finish1,
            BorW);

    ASSERT_EQUAL(0, flag);
}
