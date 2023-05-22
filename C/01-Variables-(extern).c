#include<stdio.h>
#include "header.h" //header from local directory

int main()
{
    dsply("Name: "); // dsply() defined in "header.h" file

    int a=get_int("input a="); //get_int() defined in "header.h" file

    printf("external x=%d\n",x); // external variable x from "header.h" file

    printf("a=%d\n",a);

    printf("a+x=%d\n",a+x);

    //char n[1001]=get_str("Name: ");

    //printf("Your name is %s\n",get_str("Name: "));


return 0;
}
