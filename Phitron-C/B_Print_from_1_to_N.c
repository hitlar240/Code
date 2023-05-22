#include<stdio.h>

void rec(int i, int n)
{
    if(i == n+1)
        return;

    printf("%d\n",i);

    rec(i+1, n);
}

// void rec(int i)
// {
//     if(i == 0)
//         return;

//     rec(i-1);

//     printf("%d\n",i);

// }

int main()
{
    int n;
    scanf("%d",&n);

    rec(1, n);
    //rec(n);

return 0;
}