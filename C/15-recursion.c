#include<stdio.h>
// Recursion is the technique of making a function call itself
int sum(int k)
    {
     if (k>=0)
        { return k + sum(k-1);} // we recall the function sum() inside itself
     else { return 0;} // recursion terminates when k reduced to 0
    }
// sum of the first k positive integers
int main()
{
    //int i;
    //printf("n=\t");
    //scanf("%d",i);
    printf("Result=%d",sum(8));
    return 0;
}
