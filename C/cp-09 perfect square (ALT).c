#include<stdio.h>
#include<math.h>


int main()
{
    int i,j,k,t,n,l;
    //char n[10];

    scanf("%d",&t);


for(i=0;i<t;i++)
{
    scanf("%d",&n);


// ceil() floor()  return type double or float
// == comparison is not accurate for double or float type variables

    if (ceil(sqrt(n)-floor(sqrt(n)))<0.000001)
        printf("YES\n");

    else
        printf("NO\n");

}

return 0;
}
