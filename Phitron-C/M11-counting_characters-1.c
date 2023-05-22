#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    scanf("%s",a);

    int c[26]={0}; //size=26

    for(int i=0;i<strlen(a);i++)
    {
        //printf("%c %d\n",a[i],a[i]);

        //int val=a[i]-'a';
        //c[val]++;
        c[a[i]-'a']++; // counting a[i]
    }

//alphabetical order
    for(int j=0;j<26;j++)
    {
        //printf("%c -> %d\n",j+'a',c[j]); // print all
        if(c[j]!=0)
            printf("%c -> %d\n",j+'a',c[j]); //print existing
    }

//character wise
    for(int i=0;i<strlen(a);i++)
    {
        if(c[a[i]-'a']!=0)
            printf("%c - %d\n",a[i],c[a[i]-'a']);

        c[a[i]-'a']=0; //to avoid repeatation
    }

return 0;
}
