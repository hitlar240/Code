//no return + no parameter
#include<stdio.h>

void sum(void);

int main()
{
    //sum(2, 3); //error
    sum(); 

return 0;
}


void sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);

//return; //function returns/terminates here

    int sum = a + b;
    printf("%d\n",sum);

//return;
}