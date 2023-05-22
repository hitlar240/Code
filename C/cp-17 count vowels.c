#include<stdio.h>
#include<string.h>


int main()
{
    int i,t,j,c=0;
    char tm[100],r[1001],s[1001];

    scanf("%d",&t);


while(t--)
{

        //gets(s);
        scanf(" %[^\n]",&s);// 'space' before %[^\n]
        //char s[]=" hi tom al why are u doing this?";

        //printf("%s\n",s);

        for(i=0;i<strlen(s);i++)
        {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                c++;

        }

    printf("Number of vowels = %d\n",c);
    c=0;


}



return 0;
}
