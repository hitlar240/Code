#include<stdio.h>

int main()
{
//for(initialization; condition; increment)

    int i,k;

    //for(i=1;i<=10;i++)
    //for(i=1;i<11;i++)
    for(i=1;i!=11;i++) //increasing by 1
    {
        printf("i=%d\n",i);
    }



    //for (int j=10;j>=1;j--)
    //for (int j=10;j>0;j--)
    for (int j=10;j!=0;j--) //decreasing by 1
    {
        printf("j=%d\n",j);
    }



    for(k=1;k<=10;k*=2) //incrementing exponentially by power of 2
    //for(k=1;k<11;k*=2)
    //for(k=1;k!=11;k*=2) //buffer overflow!
    {
        printf("k=%d\n",k);
    }



    //for(int l=100;l>=1;l/=2)
    //for(int l=100;l>0;l/=2)
    for(int l=100;l!=0;l/=2) //decreasing exponentially by power of -2
    {
        printf("l=%d\n",l);
    }

//for( initalizations,..,..; condition; increments,..,.. )
    for (i=0,k=1024; i<=10; i++,k/=2)
    {
        printf("i=%d\tk=%d\n",i,k);
    }

return 0;
}
