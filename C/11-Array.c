/* Syntax

    data_type var_name[size]

*/

#include<stdio.h>
int main()

{
// array is an ordered list of elements
// a data structure that can store many values of the same data type.
// maximum array size = 10^6

    int a[3] = {2,4,7}; // initialization
    // (0,1,2...)th positional values

    a[1]=5; // overwrites a[1] i.e., 2nd value
    printf("%d\n",a[1]); // printing 3rd value of the array

    //int b[]={9,7,6,5,3,1};
    int b[10];

    for (int i=0; i<10; i=i+2)
        printf("%d\t",b[i]); //garbage


return 0;
}
