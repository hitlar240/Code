#include <stdio.h>
#include<string.h>

int main()
{
 //char c,s[100];

 //scanf("%c",&c);
 //c=getchar();
 //printf("\n%c",c);

 //scanf("%s",s); // no 'space'

 char s[100],c;
 for(int i=0;i<3;i++)
 {
//scanf("%s",&s);
//scanf("%[^\n]",&s);
//scanf("%[^\n]*c",&s);
//gets(s);
 fgets(s,sizeof(s),stdin);

 //scanf("%c",&c);//??
 printf("\n%s \n\n",s);
 }

// char c[20],d[20],e[20];
// scanf("%s %s %s",c,d,e); // input n strings separated by 'space'
// printf("\n%s %s %s",c,d,e);// output strings


// gets(s); // includes 'space'
//
// int n=sizeof(s);//size of array s[]
//
// int i,l;
// for(i=0;s[i]!='\0';i++);
//
// l=strlen(s);//length of string
//
// printf("\nString= %s\nSize= %d\nLength= %d | %d",s,n,i,l);
//
// printf("\n%10.5s",s); //spacing 10, character 5
//
// for(int j=0;j<l;j++)
//    printf("\n%-30.*s",j,s);

}
