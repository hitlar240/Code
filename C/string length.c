#include <stdio.h>
int strln(char array[]);

int main()
{
 char s[100];
 //scanf("%s",s); // no 'space'
 gets(s); // includes 'space'

 int l,n=sizeof(s);

 l=strln(s);

 printf("\nString= %s\nSize= %d\nLength= %d",s,n,l);
}




int strln (char array[])
{
    int i;
    for(i=0;array[i]!='\0';i++) ;
    // ';' loop end

    return i;
}
