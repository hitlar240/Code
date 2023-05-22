// 03.Radius & Center of the Circle
#include<stdio.h>
#include<math.h>
int main ()
{
    printf("x^2+y^2+2gx+2fy+c=0");

    int c,g,f;
    float r,a,b;
//Input c,g,f
    printf("\nc=");scanf("%d",&c);
    printf("\ng=");scanf("%d",&g);
    printf("\nf=");scanf("%d",&f);
//Radius
    r=sqrt(pow(g,2)+pow(f,2)-c);

    if (pow(g,2)+pow(f,2)-c<0) {printf("Imaginary Circle!!");}
    else {printf("\nRadius=%f",r);}
//Center
    a=(float)-g/2; b=(float)-f/2;
    printf("\nCenter (%f,%f)",a,b);
}
