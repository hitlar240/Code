// 07. Factorial
#include<stdio.h>
// defined
int fact(int n)
{
   int i,f[100];


//Initial Values
    f[0]=1; f[1]=1;

//Recurrence Relation
    for (i=2; i<=n; i++)
    f[i]=f[i-1]*i;  // single statement no {} required

    return(f[n]);


}



//Main....
int main()
{
    int n,r;\
     printf("N=\t");
     scanf("%d",&n);
    r=fact(n);

//Output Result
    printf("\n%d! = %d ",n,r);
}
