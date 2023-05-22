#include<stdio.h>

float avrg (float data[], float size ) // Declaration
// Definition
    {
     float sum=0; int i;
     for (i=0; i<size; i++)
        {
         sum+=data[i];
        }
     float avg=sum/size;

     printf("Data:\t"); int j;
     for (j=0; j<size; j++)
        {
         printf("%f\t",data[j]);
        }
     printf("\n\n\tAverage of %d numbers = %f",(int) size,avg);
    }

int main()
{
    float D[]={1,2,3,4,5,6,7,8,9};
    avrg(D,9);
}
