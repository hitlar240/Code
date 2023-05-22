#include<stdio.h>
#include<string.h>
void strswp(char[], char[]);


int main()
{
    int t,i,j,k,n,m;
    char s[20][10001],c[10001];

    scanf("%d",&t);

while(t--)
{
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%s",s[i]); //row


    //for(i=0;i<n;i++)
        //printf("%s\n",s[i]);


    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(s[i],s[j])==1)
            {
                strswp(s[i],s[j]);
            }

   for(i=0;i<n;i++)
        printf("%s\n",s[i]);

}

return 0;
}


void strswp(char str1[], char str2[])
{
    char temp[1001];

//swap strings
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}