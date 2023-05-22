#include<stdio.h>



int main()
{
    int i,t,r1,r2,b,rb;
    double c,r;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
        scanf("%d %d %d",&r1,&r2,&rb);

        b=300-rb;
        c= 1.0*6*r2/b; //type cast by *1.0
        r= 1.0*6*(r1-r2+1)/rb; //type cast by *1.0
        if(r2>r1) r=0;

    printf("%.2lf %.2lf\n",c,r);

}

return 0;
}
