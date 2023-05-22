#include<stdio.h>

void rec(int i)
{
    if(i == 1)
    {
        printf("%d",i);
        return;
    }
    
    printf("%d ",i);
    
    rec(i-1);

}

int main()
{
    int n;
    scanf("%d",&n);

    rec(n);

return 0;
}