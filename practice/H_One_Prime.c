#include<stdio.h>
#include<math.h>

int prime(int);

int main()
{
    int n;
    scanf("%d",&n);

    if(prime(n) == 1)
        printf("YES\n");
    else
        printf("NO\n");

return 0;
}


int prime(int n)
{
    // int p=1;
    if(n!=2 && n%2==0)
        return 0;
    else
    {
        for(int i=3; i<=sqrt(n); i+=2)
            if(n%i == 0)
            {
                return 0;
                //break;
            }

    }

return 1;
}