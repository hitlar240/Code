#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    scanf("%s",a);

    int c['z'+1]={0}; //size=123

    for(int i=0;i<strlen(a);i++)
    {
        //printf("%c %d\n",a[i],a[i]);

        //int val=a[i];
        //c[val]++;
        c[a[i]]++; // counting a[i]
    }

//alphabetical order
    for(char j='a';j<='z';j++)
    {
        //printf("%c -> %d\n",j,c[j]); // print all
        if(c[j]!=0)
            printf("%c -> %d\n",j,c[j]); //print existing
    }


//character wise
    for(int i=0;i<strlen(a);i++)
    {
        if(c[a[i]]!=0)
            printf("%c - %d\n",a[i],c[a[i]]);

        c[a[i]]=0; //to avoid repeatation
    }


return 0;
}
