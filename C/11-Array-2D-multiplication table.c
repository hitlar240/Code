#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            a[i][j]=(i+1)*(j+1);
        }

    printf("\tMultiplication table\n");
    for(int i=1;i<=n;i++)
        printf("\t%d",i);
    printf("\n------------------------------------------------------------------------\n");

    for (int i=0;i<n;i++)//row
    {
        printf("%d |\t",i+1);
        for (int j=0;j<n;j++)//column
        {
            printf("%d\t",a[i][j]);
        }//column
        printf("\n");
    }//row



return 0;
}
