#include<stdio.h>
#include<string.h>

//Structures (also called structs) are a way to group several related variables into one place
// can contain many different data types (int, float, char, etc.)
// struct -> collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but no methods)


// struct STRUCTURE_NAME { (members) parameter1; parameter2; ... ; } ;



int main()
{
    struct exam
    {
        char name[26];
        int roll;
        double mark;
        char grade;
    };  // end the structure with a (;)
    

    struct exam r1; // structure variable | we named "r1"
    // (.) -> member access operator
    strcpy( r1.name,"tan(pi/2)");  //Assign a value to the string using the strcpy function
    r1.roll=25;  // Assigning value to member2
    r1.mark=19.25;
    r1.grade='A';

    printf("Name=%s\nRoll=%d\nMark=%lf\nGrade=%c\n\n",r1.name,r1.roll,r1.mark,r1.grade);

// Another way to assign values for the parameters
    struct exam r2={"tom al",72,15.72,'B'};
    r2.name[3]='+'; //change character in name
    r2.mark-=2; //update mark

    printf("Name=%s\nRoll=%d\nMark=%lf\nGrade=%c\n\n",r2.name,r2.roll,r2.mark,r2.grade);

// copy structures
    struct exam r3; 
        r3=r1; //copy structure variable r2 to r3 
        strcpy(r3.name, "Tanvir"); // we overwrite these values
        r3.roll=240;

    printf("Name=%s\nRoll=%d\nMark=%lf\nGrade=%c\n\n",r3.name,r3.roll,r3.mark,r3.grade);


return 0;
}
