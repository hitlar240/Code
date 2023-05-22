#include <stdio.h>
int prime(int n,int p[]);

int main() // page: 127
{
 int n,i,j,c,r;

 printf("\nN= ");
 scanf("%d",&n);

 int p[100];//={2,3,5,7,11,13};

 int k=prime(n,p);

for(i=0;i<k;i++)
{

 for (j=2;j<=n;j++)
     {
        //printf("\nj= %d  p=%d",j,p[i]);
        if (j%p[i]==0)
        {
            r=j;
            while(1)
            {

                if(r%p[i]==0)
                    {c++;
                    r/=p[i];
                    //r=r/p[i];
                    //printf("\nc=%d  r=%d",c,r);
                    }
                else break;
            }//while

         }//if


     }//j


 printf("(%d,%d)",p[i],c);
 c=0;
}//i

 return 0;
}






int prime (int n,int p[])
{
    int i,j,k=0,a=2;

    l1: for(i=a;i<=n;i++)
    {
        if (i!=2 && i%2==0) continue;

        l2: for(j=3;j<=sqrt(i);j+=2)
            if(i%j==0) {a=i+1;goto l1;}


    p[k]=i;k++;
    //printf("\t%d",i);
    }

    return k;
}
