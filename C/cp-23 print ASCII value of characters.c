#include<stdio.h>
#include<string.h>


int main()
{
    int i,t;
    char s[101];

    scanf("%d",&t);


while(t--)
{

        //gets(s);
        //scanf("%[^\n]",&s);
        scanf("%s",s);


        for(i=0;s[i]!='\0';i++)
           printf("%d",s[i]-'A'+1);

    printf("\n");

}



return 0;
}
