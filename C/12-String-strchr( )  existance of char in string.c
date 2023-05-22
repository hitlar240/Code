#include<stdio.h>
#include<string.h>
int strchr_(char str[], char chr);

int main()
{
    char a[1001]="tom al",c=' ';

    printf("null=%d\n",strchr(a,c));

//strchr(a,c)  locate the 1st occurrence of a character in a string
//strrchr(a,c)  locate the last occurrence of a character in a string
//otherwise returns NULL pointer

    if(strchr_(a,c)==0)
    //if(strchr(a,c)==0)
    //if(strrchr(a,c)==0)
        printf("c is not a char of a\n");
    else
        printf("c is a char of a\n");


return 0;
}


int strchr_(char str[], char chr)
{
    //int la=strlen(str);
    int i=0;

    //for(int i=0;i<la;i++)
    while(str[i]!='\0')
    {
        if(str[i]==chr) return 1;
        i++;
    }

    return 0;
}
