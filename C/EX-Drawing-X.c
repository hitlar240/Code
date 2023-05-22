#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i=0;i<n;i++)//row
    {
        for (int j=0;j<n;j++)//column
        {

            if(i==n/2 && j==n/2)
                printf("X");
            else if(i==j)
                printf("\\");
            else if(i+j==n-1)
                printf("/");
            else
                printf("*");

        }//column
        printf("\n");
    }//row


return 0;
}
