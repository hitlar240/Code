#include<stdio.h>
#include<math.h> // sqrt()
//#include<stdlib.h> // exit(0)

int prime(int n);


int main()
{
    int n;

printf("\nN=");scanf("%d",&n);

if (prime(n)==1)
    printf("\nPrime");
else 
    printf("\nNot Prime");

}



int prime(int a)
{
    int i;

if(a<2 || a!=2 && a%2==0)
    {//printf("\nNot Prime");exit(0);
    return 0;//prime(n) returns 0 and terminates here
    }

for (i=3;i<=sqrt(a);i+=2)
    {
        if(a%i==0)
            {//printf("\nNot Prime");exit(0);
            return 0;//prime(n) returns 0 and terminates here
            }
    }
//printf("\nPrime");
return 1;//prime(n) returns 1 and terminates here
}
