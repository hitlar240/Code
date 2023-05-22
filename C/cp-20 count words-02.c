#include<stdio.h>
#include<string.h>


int main()
{
    int i,t,c=0;
    char s[10001];


    scanf("%d",&t);



//for(i=0;i<t;i++)
while(t--)
{


        //scanf("%s",&s);
        scanf(" %[^\n]",s);// 'space' before %[^\n]
        //gets(s);



        for(i=0;i<strlen(s);i++)
            if(s[i]==' ')
                c++;



        printf("Count = %d\n",c+1);
        c=0;

}

return 0;
}
