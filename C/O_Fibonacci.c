#include<stdio.h>
int fib(int n);


int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",fib(n));

return 0;
}


// int fib(int n)
// {
//     int f[n];
//     f[0]=0;
//     f[1]=1;
//     for(int i=2;i<n;i++)
//     {
//         f[i]=f[i-1]+f[i-2];
//     }

//     return f[n-1];
// }



int fib(int n)
{
   // recursion

    if(n==1) return 0;
    else if(n==2) return 1;
    else return fib(n-1)+fib(n-2);
}