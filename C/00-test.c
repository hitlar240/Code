#include<stdio.h> // preprocessor  includes header file STanderD Input/Output
int main() // returns Integer value  main function
// {...statements...}
{ // start
int x;
float y;
char z;
double a;
long b;
// void c;
printf("%lu\n%lu\n%lu\n%lu\n%lu\n%lu\n",sizeof(x),sizeof(y),sizeof(z),sizeof(a),sizeof(b)/*,sizeof(c)*/);
//sizeof operator to return a long unsigned int (%lu)
} // end
