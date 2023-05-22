#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,n,t,l,c;
    char s[1001];

    scanf("%d",&t);

while(t--)
{

    scanf(" %[^\n]",&s);//'space' before %[^\n]

    //printf("%s\n",s);

    l=strlen(s);
    c=0;

    for(i=0;i<l;i++)
        if(s[i]==' ' && s[i+1]!=' ')//not counting consecutive 'spaces'
            c++;

    printf("%d\n",c+1);

}


return 0;
}
