#include<stdio.h>
#include<math.h>


int main()
{
    int t,n,a[100],i;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

   for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("%d",a[0]);
    for(i=2;i<n;i+=2)
        printf(" %d",a[i]);

    printf("\n");

}
return 0;
}

