/* Syntax:

char string[length] = "........"

*/

#include<stdio.h>

int main()
{
// string is an array of characters

    char s[6]; // size=length+1 (for null character '\0' at the end)
    s[0]='t';
    s[1]='o';
    s[2]='m';
    s[3]=' ';
    s[4]='a';
    s[5]='l';
    s[6]='\0'; // null character terminates the string
    printf("\ns=%s",s);


    char j[4]={'a','b','u','l'}; // no place for '\0' (garbage value at the end)
    char k[5]={'a','b','u','l','\0'}; // '\0' null character to terminate string
    char l[5]={'a','b','u'}; // remaining characters will be set to '\0' NULL automatically
    char m[]={'a','b','u','l'}; // size = 4 | no place for '\0'
    char n[]={'m','e','a','o','w',' ',':','"','-',')','\0'}; // (Null terminator) Null character'\0'
    char o[]={'t','o','m','\0','a','l'};
    printf("\nj=%s\nk=%s\nl=%s\n",j,k,l);
    printf("\nsize of m=%d\n",sizeof(m)); // array size (bytes)
    printf("\nm=%s\nn=%s\no=%s\n",m,n,o);

    char t[]="Halum !!"; // '\0' is appended at the end by default
    char u[6]="Halum !!"; // no place for '\0' (garbage value at the end)
    char v[9]="Halum !!"; // size=length+1 (for null character '\0' at the end)
    char w[20]="Halum !!"; // initializes remaining spaces with '\0'
    printf("\nt=%s\nu=%s\nv=%s\nw=%s\n",t,u,v,w);

    printf("\nsize of t=%d",sizeof(t)); // array size (bytes)

    t[5]='0';
    printf("\nt[5]=%c",t[5]); // printing [5]6th character of the string

    printf("\nt=%s",t); // printing string


return 0;
}
