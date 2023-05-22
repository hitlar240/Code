#include <stdio.h>

int main()
{
 int n,i,l=0;
 //printf("size=\t");
 //scanf("%d",&n);

 char s[100];
 printf("string=\t");
 scanf("%s",s);

 for(i=0;s[i]!='\0';i++)
    l++;

 n=sizeof(s);//size of array
 printf("\nsize=%d\tlength=%d",n,l);

 for (i=0;i<l;i++)
  //if (97<=s[i]&&s[i]<=122)
    if ('A'<=s[i]&&s[i]<='Z')
        s[i]=s[i]+('a'-'A');
      //s[i]=s[i]+32;//(97-65)

 printf("\nup string=%s",s);
}

