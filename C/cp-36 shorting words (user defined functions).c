#include<stdio.h>
#include<string.h>
int strcmp_(char str1[], char str2[]);
void strcpy_(char copy[], char source[]);


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
            if(strcmp_(s[i],s[j])==1)
            {
                //printf("%d\n",strcmp_(s[i],s[j]));
                //printf("s[%d]=%s s[%d]=%s\n",i,s[i],j,s[j]);
                strcpy_(c,s[i]);
                strcpy_(s[i],s[j]);
                strcpy_(s[j],c);
                //printf("s[%d]=%s s[%d]=%s\n",i,s[i],j,s[j]);
            }

   for(i=0;i<n;i++)
        printf("%s\n",s[i]);

}

return 0;
}



int strcmp_(char str1[], char str2[])
{

    for(int i=0; str1[i]!='\0' || str2[i]!=0 ;i++)
       if(str1[i]>str2[i]) return 1;
       else if(str1[i]<str2[i]) return -1;


return 0; //str1==str2
}




void strcpy_(char copy[], char source[])
{
    int i=0;

    //while(source[i]!=' ')   //copy before 'space' character
    //while(source[i]!='\n')  //copy before '\n' character
    while(source[i]!='\0')  //copy before '\0' character
    {
        copy[i]=source[i];
        i++;
    }
    copy[i]='\0'; //terminating string
}
