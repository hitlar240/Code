// 02.Nature of Conic
#include<stdio.h>
#include<math.h>
int main ()
{
    printf("ax^2+2hxy+by^2+2gx+2fy+c=0");

    int a,b,c,h,g,f;
    float d,e;
//Input a,b,c,h,g,f
    printf("\na=");scanf("%d",&a);
    printf("\nb=");scanf("%d",&b);
    printf("\nc=");scanf("%d",&c);
    printf("\nh=");scanf("%d",&h);
    printf("\ng=");scanf("%d",&g);
    printf("\nf=");scanf("%d",&f);
//Discriminant
    d=a*b*c+2*f*g*h-a*pow(f,2)-b*pow(g,2)-c*pow(h,2);
    printf("Discriminant= %f\n",d);
//Eccentricity
    e=a*b-pow(h,2);
    printf("ab-h^2= %f\n",e);
//Nature of Conic
    if(d==0) {printf("Pair of St. lines");}
    else
    {
        if (h==0||a==b) {printf("Circle");}
        if (pow(h,2)<a*b) {printf("Ellipse");}
        if (pow(h,2)==a*b) {printf("Parabola");}
        if (pow(h,2)>a*b) {printf("Hyperbola");}
    }

}
