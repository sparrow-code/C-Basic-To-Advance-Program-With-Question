#include <stdio.h>
/*
1 ==> An integer constant must have at least one digit.
2 ==> It must not have a decimal point.
3 ==> It can either be positive or negative.
4 ==> No commas or blanks are allowed within an integer constant.
5 ==> If no sign precedes an integer constant, it is assumed to be positive.
6 ==> The allowable range for integer constants is -32768 to 32767
*/

// Syntax => const dataType varName = Value ; For All
// Syntax For Integer ==> const int a = 34;
int main() {
    const int a = 156;
    printf("Integer Constant %d", a);
    return 0;
}