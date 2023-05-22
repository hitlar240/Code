#include<stdio.h>



int main()
{
    int i,t,n,r,c=0;
    //long long int f=1;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
        scanf("%d",&n);

//number of 0's = number of factor 10=2*5
//finding the number of factor(5) only as factor (2) comes more as factor to make a pair (10=2*5)
        for(i=5;i<=n;i++)
            if(i%5==0)
            {   r=i;
                //c++;
                while(1)
                { if(r%5==0)
                    {r/=5;c++;}
                  else break;
                }
            }

        printf("%d\n",c);
        c=0;

}

return 0;
}
