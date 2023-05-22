#include<stdio.h>

void print_array(int a[], int n, int i)
{
    if (i == n) return; // base case

    printf("%d ",a[i]);
    
    print_array(a, n, i+1);
}

int main()
{
    // int n = 5;
    int a[5] = {1,2,3,4,5};

    print_array(a, 5, 0);

return 0;
}