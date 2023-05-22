#include<stdio.h>
#include<math.h> // sqrt()
//#include<stdlib.h> // exit(0)


int main()
{
int i,j,k,r,t=3;

printf("\nNumber of students= ");
scanf("%d",&r);

//printf("\nNumber of tests= ");
//scanf("%d",&t);

float d,s=0,ex[1][t],tr[t][r],tm[1][r];

printf("\ntr[mark][roll]");

for (i=0;i<t;i++)//row
{
    for (j=0;j<r;j++)//column
    {
        printf("\ntr[%d][%d]= ",i+1,j+1);
        scanf("%f",&tr[i][j]);
    }//column
}//row







for (i=0;i<r;i++)//row
{
     d=tr[0][i]/4+tr[1][i]/4+tr[2][i]/2;
    printf("\nroll=%d mark=%.2f",i+1,d);
}//row


}
