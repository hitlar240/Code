// union is a special data type available in C that allows to store different data types in the same memory location
#include<stdio.h>
//#include<string.h>

// union TAG { member1; member; ... ; } ;
union u {int m1; float m2; char m3; char m4 [30];} ; // end the structure with a (;)

int main()
{
    union u v1; // structure variable we named "s1"
         v1.m1=25;
            printf("M1 = %d\t",v1.m1);
         v1.m2=12.85;
            printf("M2 = %f\t",v1.m2);
         v1.m3='x';
            printf("M3 = %c\t",v1.m3);
         strcpy(v1.m4,"StriNg"); //Assign a value to the string using the strcpy function
            printf("M4 = %d\n",v1.m4);

/*
// Another way to assign values for the parameters
    union u v2={10,2.57,'z',"sTrInG"};

// copy structures
    union u v3; v3=v1;
    v3.m2=5.096; strcpy(v3.m4, "Changed !!"); // we overwrite these values
*/

printf("U.Variable 1 =\t%d\t%f\t%c\t%s\n",v1.m1, v1.m2, v1.m3, v1.m4);
// values of the members of the union got corrupted because the final value assigned to the variable has occupied the memory location

// printf("U.Variable 2 =\t%d\t%f\t%c\t%s\n",v2.m1, v2.m2, v2.m3, v2.m4);
// printf("U.Variable 3 =\t%d\t%f\t%c\t%s\n",v3.m1, v3.m2, v3.m3, v3.m4);
}
