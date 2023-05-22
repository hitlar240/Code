#include <stdio.h>
int main()
// (cond.) ? block1 : block2    (if ture, then block1 else block2)
{
    int time=17;
    (time < 18) ? printf("Good day.") : printf("Good evening.");
}
