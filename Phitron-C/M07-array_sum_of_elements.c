#include<stdio.h>

int main()
{
    int n,s=0; //initial sum=0
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
       {
          scanf("%d",&a[i]);
          s+=a[i];

       }

    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);

    printf("s=%d\n",s); // total sum

return 0;
}
