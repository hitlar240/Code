#include<stdio.h>
#include<math.h> // sqrt()
//#include<stdlib.h> // exit(0)


int main()
{
int i,j,k,r,t;

printf("\nNumber of students= ");
scanf("%d",&r);

printf("\nNumber of tests= ");
scanf("%d",&t);

float s=0,ex[1][t],tr[t][r],tm[1][r];

printf("\ntr[mark][roll]");

for (i=0;i<t;i++)//row
{
    for (j=0;j<r;j++)//column
    {
        printf("\ntr[%d][%d]= ",i+1,j+1);
        scanf("%f",&tr[i][j]);
    }//column
}//row

printf("\nex[tutorial][percentage]");

for (i=0;i<1;i++)//row
{
    for (j=0;j<t;j++)//column
    {
        printf("\nex[%d][%d]= ",i+1,j+1);
        scanf("%f",&ex[i][j]);
    }//column
}//row


for (i=0;i<1;i++)//row
{
    for (j=0;j<r;j++)//column
    {
        for (k=0;k<t;k++)//sum
        {
            s=s+ex[i][k]*tr[k][j];
        }//sum
        tm[i][j]=s;
        s=0;
    }//column
}//row

for (i=0;i<1;i++)//row
{
    for (j=0,l=1;j<r;j++,l++)//column
    {
        printf("\troll=%d marks=%.2f",j+1,tm[i][j]);
    }//column
    printf("\n");
}//row


}
