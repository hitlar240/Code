#include<stdio.h>

int main()
{
    // user-defined type declaration:
    // typedef  type  identifier
    //-typedef cannot create new data type
    //-just a new name given to an existing data type

    typedef char name[101]; //string -> name
    typedef int roll;   // int -> roll
    typedef float mark; // float -> mark
    typedef char grade; // char -> grade

    name a="abul", b="babul", c="tom al";
        c[3]='+'; //change char 
    roll x=1,y=2,z=3;            // user-defined type
    mark tx=15.5,ty=12.77,tz=18; //user-defined type
    grade i='B',j='C',k='A';

    printf("name:%s   roll:%d   mark:%.2f   grade:%c\n",a,x,tx,i);
    printf("name:%s   roll:%d   mark:%.2f   grade:%c\n",b,y,ty,j);
    printf("name:%s   roll:%d   mark:%.2f   grade:%c\n",c,z,tz,k);

return 0;
}