#include<stdio.h>
int main()
{
    int a,b,c;
    for (a=1;a<=3;a++)
    {
        for (b=1;b<=3;b++)
        {//if (b==a)continue;
        //if (b!=a)
            for (c=1;c<=3;c++)
            {//if (c==b||c==a)continue;
            //if(c!=b&&c!=a)
            if (a!=b&&b!=c&&c!=a)
            printf("\n%d,%d,%d",a,b,c);
            }
        }
    }
}
