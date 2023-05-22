#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int c=0;
    while(1)
    {   
        int o;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                o=-1;
                break;
            }
            
            a[i]=a[i]/2;
        }

        if(o==-1)
            break;

        c++;
    }
      
    printf("%d\n",c);
    
    return 0;
}