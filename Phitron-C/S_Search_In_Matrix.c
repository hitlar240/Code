#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int x;
    scanf("%d",&x);

    int c = 0; // flag
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            // printf("%d\n",a[i][j]);
            if(x == a[i][j])
            {
                c = 1; break;
            }
        }
        if(c == 1)
            break;
    }

    if(c == 1)
        printf("will not take number\n");
    else
        printf("will take number\n");
        
return 0;
}