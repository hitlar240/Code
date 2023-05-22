#include<stdio.h>

void sum(int r, int c, int a[r][c], int b[r][c], int i, int j)
{
    if(i == r)
        return ;
    int s = a[i][j]+b[i][j];
    printf("%d ",s);

    if(j == c-1)
    {
        printf("\n"); 
        sum(r,c,a,b,i+1,0);
    }
    else
    {
        sum(r,c,a,b,i,j+1);
    }
}

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    sum(r,c,a,b,0,0);

return 0;
}