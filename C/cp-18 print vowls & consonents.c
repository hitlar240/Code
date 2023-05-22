#include<stdio.h>
#include<string.h>


int main()
{
    int i,t,l,j=0,k=0;
    char v[1001],c[1001],s[1001];

    scanf("%d",&t);


while(t--)
{

        //gets(s);
        scanf(" %[^\n]",&s);//'space' before &[^\n]



        //printf("%s\n",s);

        l=strlen(s);

        for(i=0;i<l;i++)
        {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {v[j]=s[i];j++;}
            else if(s[i]!=' ')
                {c[k]=s[i];k++;}

        }

    v[j]='\0';c[k]='\0';//null terminator

    printf("%s\n%s\n",v,c);
    j=0;k=0;






                // (ALT) WA ???
////print vowels
//    for(i=0;i<l;i++)
//        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
//                printf("%c",s[i]);
//
//    printf("\n");
//
////print consonants
//    for(i=0;i<l;i++)
//        if (s[i]!=' ' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' || s[i]=='u')
//                printf("%c",s[i]);
//
//    printf("\n");



}



return 0;
}
