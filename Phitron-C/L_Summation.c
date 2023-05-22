#include<stdio.h>

long long int rec(long long int ar[], int n, int i)
{
    if(i == n)
        return 0;

    return ar[i] + rec(ar, n, i+1);

}

// int rec(int ar[], int n, int i, int s)
// {
//     if(i == n)
//     return s;
    
//     // printf("i=%d a=%d s=%d\n",i,ar[i],s);

//     rec(ar, n, i+1, s+ar[i]);

// }

int main()
{
    int n;
    scanf("%d",&n);

    long long int a[n];
    for(int i=0; i<n; scanf("%lld",&a[i++]));

    printf("%lld\n",rec(a,n,0));
    // printf("%d\n",rec(a,n,0,0));

return 0;
}