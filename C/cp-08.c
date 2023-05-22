#include<stdio.h>



int main()
{
    int i,j,k,t,n1,n2,n3,a,b,c;

    scanf("%d",&t);

for(i=0;i<t;i++)
{
        scanf("%d %d %d",&n1,&n2,&n3);

    if(n1<n2 && n1<n3)
    {
        a=n1;
        if(n2<n3)
        {b=n2;c=n3;}
        else {b=n3;c=n2;}
    }

    if(n2<n1 && n2<n3)
    {
        a=n2;
        if(n1<n3)
        {b=n1;c=n3;}
        else {b=n3;c=n1;}
    }

    if(n3<n2 && n3<n1)
    {
        a=n3;
        if(n2<n1)
        {b=n2;c=n1;}
        else {b=n1;c=n2;}
    }

    printf("Case %d: %d %d %d\n",i+1,a,b,c);

}

return 0;
}
