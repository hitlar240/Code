#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int d = 0;
    //int pd=0, sd=0;
    for(int i=0; i<n; i++)
    {
        // pd+=a[i][i];
        // sd+=a[i][n-1-i];

        d+=a[i][i] - a[i][n-1-i];
    }

    // int d = pd - sd;
    if(d < 0)
        printf("%d\n",-d);
    else
        printf("%d\n",d);


return 0;
}