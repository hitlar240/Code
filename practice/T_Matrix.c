#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
            

    int md=0,sd=0;
    for(int i=0;i<n;i++)
    {
        md+=a[i][i];
        sd+=a[i][n-1-i];
    }   
    
    int d=md-sd;
    if(d<0)
        printf("%d\n",-d);
    else
        printf("%d\n",d);
    

return 0;
}