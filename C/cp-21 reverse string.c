#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,l,t;
    char r[1001],s[1001];


    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{


        scanf("%s",&s);
        //scanf(" %[^\n]",s);
        //gets(s);


        l=strlen(s);

        r[l]='\0';
       for(i=0,j=l-1;j>=0;i++,j--)
            r[j]=s[i];


        printf("%s\n",r);

//        for(i=l-1;i>=0;i--)
//            printf("%c",s[i]);
//
//        printf("\n");


}

return 0;
}
