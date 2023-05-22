#include<stdio.h>

int main()
{
    int n=5;
    //scanf("%d",&n);

    int a[]={2,7,5,10,3};

    int sum=8,c=0; // c-> flag 0/1
    //scanf("%d",&sum);

//sum=8 ???
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==sum)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            break;
    }

    if(c==1)
        printf("yes\n");
    else
        printf("no\n");


return 0;
}