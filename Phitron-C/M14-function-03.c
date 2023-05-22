//no return + parameter
#include<stdio.h>

void sum(int, int);

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    sum(x, y);

return 0;
}


void sum(int a, int b)
{
    int sum = a + b;

//return; //function returns/terminates here

    printf("%d\n",sum);
    
//return;
}