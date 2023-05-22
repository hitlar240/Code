#include<stdio.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int t = a;
        a = b;
        b = t%b;
        //printf("a=%d b=%d\n",a,b);
    }

return a;
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d\n",gcd(a,b));
    //printf("%d\n",lcm(a,b));

return 0;
}