#include<stdio.h>


int main()
{
    int t,i,d;
    float f;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
    scanf("%f",&f);

    d=0;

    while(f>1)
    {
        f/=2;
        d++;
    }


    printf("%d days\n",d);

}
return 0;
}

