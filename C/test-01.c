 // 01.Quadratic Equation & its Roots
 #include<stdio.h>
 #include<math.h>

 // FUNCTION  DEFINITION:

 void root (float a,float b, float c)
 {
     float d,x1,x2,r,i;


 //Determinant
 d=b*b-4*a*c;

 //Calculation
 if(a==0) {printf("Not a quadratic equation!!");}
 else if (d>=0)
 {
 printf("\nReal Roots:");

 x1=(-b+sqrt(d))/(2*a);
 x2=(-b-sqrt(d))/(2*a);

 printf("\n\tx1=%f",x1);
 printf("\n\tx2=%f",x2);
 }
 else
 {
 printf("\nComplex Roots:");
 r=-b/(2*a);
 i=sqrt(abs(d))/(2*a);
 printf("\n\tc1=%f + i%f",r,i);
 printf("\n\tc2=%f - i%f",r,i);
 }

 }


// MAIN FUNCTION:
 int main ()
 {

 float a,b,c;

 //Input a,b,c
 printf("ax^2+bx+c=0\n");
 printf("\na,b,c=");scanf("%f,%f,%f",&a,&b,&c);

 root(a,b,c); //call


 // return 0;

 }
