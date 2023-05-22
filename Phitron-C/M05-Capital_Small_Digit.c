#include<stdio.h>

int main()
{
    int c;
    scanf("%c",&c);

//    if(c>='a' && c<='z') printf("ALPHA\nIS SMALL\n");
//    else if(c>='A' && c<='Z') printf("ALPHA\nIS CAPITAL\n");
//    else if(c>='0' && c<='9') printf("IS DIGIT\n");

    if(c>='0' && c<='9') printf("IS DIGIT\n");
    else
    {
        printf("ALPHA\n");
        if(c>='a' && c<='z') printf("IS SMALL\n");
        else printf("IS CAPITAL\n");
    }


return 0;
}
