// 07. Factorial
#include<stdio.h>
// defined
long long int fact(int n)
{
   //int i;
    long long int f=1;

//Recurrence Relation
    for (int i=2; i<=n; f*=i,i++);
        //f=f*i;  // single statement no {} required

    return f;

}



//Main....
int main()
{
    int n;

     printf("N=\t");
     scanf("%d",&n);

//Output Result
    printf("\n%d! = %lld ",n,fact(n));
}
