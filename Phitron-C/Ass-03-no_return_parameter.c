//no return + parameter

#include<stdio.h>

void even_odd(int n)
{
    if(n%2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

}

int main()
{
    int n;
    scanf("%d",&n);

    even_odd(n);

return 0;
}