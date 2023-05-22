#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    
    long long int a[n]; 
    for(int i=0; i<n; scanf("%lld",&a[i++]));

    for(int i=0; i<n-1; i++)
    {
        int mx = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[mx] < a[j])
                mx = j;
        }
        long long int tem = a[i];
        a[i] = a[mx];
        a[mx] = tem;
    }

    long long int s = 0;
    for(int i=0; i<k; s+=a[i++]);
    
    if(s < 0)
        s = 0; // at most k

    printf("%lld\n",s);

return 0;
}