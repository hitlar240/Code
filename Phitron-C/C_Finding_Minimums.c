#include<stdio.h>
#include<limits.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int min =  INT_MAX;
    for(int i=0,j=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        if(min > a)
            min = a;
        j++;
        if(j==k || i==n-1)
        {
            printf("%d ",min);
            min =  INT_MAX;
            j=0;
        }
    }
    //printf("%d\n",min);
    

return 0;
}