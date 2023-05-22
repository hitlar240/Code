#include<stdio.h>
#include<string.h>


int main()
{
    int i,t,c=0;
    char ch[2],s[10001];
    long long int f=1;

    scanf("%d",&t);


while(t--)
{
        //scanf("%s",&s);
        scanf(" %[^\n]",&s);//'space' before %[^\n]
        //scanf("%[^\n]*c",&s);
        //gets(s);
        //fgets(s,sizeof(s),stdin);

        scanf("%s",&ch);

        c=0;

        for(i=0;i<strlen(s);i++)
                if(s[i]==ch[0])
                    c++;


        if(c>0)
        printf("Occurrence of '%s' in '%s' = %d\n",ch,s,c);
        else
        printf("'%s' is not present\n",ch);

}



return 0;
}
