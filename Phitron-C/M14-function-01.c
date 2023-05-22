//return + parameter
#include<stdio.h>

int sum(int, int); //declaration

// int sum(int var1, int var2) //definition
// {
//     int result = var1 + var2;

//     return result;
// }


int main()
{
    int ans = sum(100, 200);

    printf("%d\n",ans);

return 0;
}



int sum(int a,int b) //definition
{
    int sum = a + b;

    return sum;
}
