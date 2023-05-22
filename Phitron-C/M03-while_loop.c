#include<stdio.h>

int main()
{
    int i=1;

    while(i<=10)
    {
        //i++; //increasing brfore

        printf("i=%d\n",i);

        i++; //increasing after
    }


//do-while loop

    //initial value i=10+1

    do
    {
        i--;
        printf("i=%d\n",i);
        //i--;
    }
    while(i!=0); // ';'

return 0;
}
