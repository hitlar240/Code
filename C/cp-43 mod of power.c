#include <stdio.h>
#include <math.h>

int main()
{
   int i,t,m,a,b,c;

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d %d %d",&a,&b,&c);

    m=1;

//double pow(double a, double b)
//not using pow() as it returns double type value
//arithmetic operations can yield wrong ans because of precision value

    //for(i=1;i<=b;i++) //a^b
    while(b--) // b times (b-- to 0)
        m=(m*a)%c;
//optimization ???

//(a^b)%c
    printf("Result = %d\n",m);

}
return 0;
}
