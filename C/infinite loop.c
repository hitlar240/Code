#include<stdio.h>

int main()
{
    int i=0;

    //for( ; ; )
    for( ; ;i++)
    {
        printf("\n%d",i);
        if(i==10) break;//break the loop
    }


    //while(i--) //loop terminates when i==0
    //while(i++)
    while(1)
    {
        printf("\n%d",i);
        if(i==20) break;//break the loop
        i++;//
    }
return 0;
}
