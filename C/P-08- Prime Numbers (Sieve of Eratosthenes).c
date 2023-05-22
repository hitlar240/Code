#include<stdio.h>
#include<math.h> // sqrt()
//#include<stdlib.h> // exit(0)

#define s 1001 //s=size of array
//const int s=1001; ???
int p[s];

void prime();



int main()
{
    //int s=1001;
    int i,a,b;

printf("\na,b=");scanf("%d,%d",&a,&b);

    prime();//call

printf("\nprimes between %d & %d :",a,b);
    for(i=a;i<=b;i++)
        if(p[i]==1)
            printf("\t%d",i);

return 0;
}




void prime()
{
    int i,j;

    for(i=2;i<s;i++)
        p[i]=1;//initialization

    for(i=2;i<=sqrt(s);i++)//half of the factors of n lies below sqrt(n)
    {

    //if(i<2) p[i]=0; // 0 by default

    if(p[i]==1)
        for(j=2;i*j<=s;j++)
            p[i*j]=0;// (i*j) is not prime

    }

}
