#include<stdio.h>

// void rec(int a[], int i, int n)
// {
//     if(i == n)
//     return;

//     rec(a, i+1, n);

//     if(i%2 == 0)
//     printf("%d ",a[i]);


// }

void rec(int a[], int i)
{
    if(i == -1)
    return;


    if(i%2 == 0)
    printf("%d ",a[i]);

    rec(a, i-1);

}



int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; scanf("%d",&a[i++]));

    // rec(a, 0, n);
    rec(a, n-1);

return 0;
}