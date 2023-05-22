#include<stdio.h>
#include<string.h>

int shorted_up(int a[],int n);
int shorted_down(int a[],int n);

int main()
{
    int i,t,n,a[20],d;

    scanf("%d",&t);


while(t--)
{
    scanf("%d",&n);

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);


        if(a[0]>a[1])
            d=shorted_down(a,n);
        else
            d=shorted_up(a,n);


        if(d==1)
            printf("YES\n");
        else
            printf("NO\n");
}



return 0;
}






int shorted_up(int a[],int n)
{
     for(int i=0;i<n-1;i++)
            if(a[i]>a[i+1])
                return 0;
            else continue;

    return 1;
}


int shorted_down(int a[],int n)
{
     for(int i=0;i<n-1;i++)
            if(a[i]<a[i+1])
                return 0;
            else continue;

    return 1;
}
