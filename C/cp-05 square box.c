#include<stdio.h>
//#include<math.h>


int main()
{
    int i,j,k,t,n;

    scanf("%d",&t);

//    for(int a=0;a<t;a++)
//        scanf("%d",&n[a]);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

    for (j=0;j<n;j++)//row
    {
        for (k=0;k<n;k++)//column
        {
            printf("*");
        }//column

        printf("\n");
    }//row

if(t!=0)printf("\n");

}

return 0;
}
