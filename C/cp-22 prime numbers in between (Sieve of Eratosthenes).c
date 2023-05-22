#include<stdio.h>
#include<math.h>
#define n 100001 //size of array p[n]
//const int n=100001; ???
int p[n];

void prime();


int main()
{
    int t,a,b,c,i,j;//,p[n];

    scanf("%d",&t);

    prime();//function call

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d %d",&a,&b);

    c=0;

    for (i=a;i<=b;i++)
        if(p[i]==1)
            c++;//printf("%d\n",i);

    printf("%d\n",c);

}
return 0;
}






void prime()
{
    int i,j;

    for(i=2;i<n;i++)
        p[i]=1;//initialization

    for(i=2;i<=sqrt(n);i++)//half of the factors of n lies below sqrt(n)
    {

    //if(i<2) p[i]=0;

    if(p[i]==1)
        for(j=2;i*j<n;j++)
            p[i*j]=0;// (i*j) is not prime

    }

}
