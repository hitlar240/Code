#include<stdio.h>

int main()
{
    char s[101],c; // string max length 100 (as last character '\0')
    int i=0;

    do
    {
        s[i] = c = getchar();//input character from the terminal
        i++;    //incremented after assigning character

        printf("s[%d]=%c i=%d\n",i-1,s[i-1],i); //(line break character) '\n'
    }
    while(c!='\n'); //loop breaks after c='\n' been assaigned

    s[i]='\0'; //terminating string
    printf("s = %s hah!\n",s); //line breaks as last character '\n' of the string

    s[i-1]='\0'; //terminating string | replacing '\n' with '\0' (null character)
    printf("s = %s hah!\n",s); //print aside


return 0;
}
