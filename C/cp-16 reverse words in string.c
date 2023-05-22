#include<stdio.h>
#include<string.h>


int main()
{
    int i,t,j,k;
    char s[1001],tm[1001],r[1001];

    scanf("%d",&t);


while(t--)
{

        //gets(s);
        scanf(" %[^\n]",&s);//'space' before %[^\n]
        //fgets(s,sizeof(s),stdin);


        j=0;k=0;

        for(i=0;i<strlen(s);i++)
        {

            //tm[j]=s[i];
            //j++;

            if(s[i]==' ')
            {
                tm[j]='\0';//to terminate the string
                for(j=strlen(tm)-1;j>=0;j--)
                    {r[k]=tm[j];k++;}//assigning characters in reverse order

                r[k]=' ';//adding 'space' after reversing that word
                k++;
            }

        tm[j]=s[i];
        j++;
        }

    tm[j]='\0';//to terminate the last string

    for(j=strlen(tm)-1;j>=0;j--)
        {r[k]=tm[j];k++;}//assigning characters in reverse order

        r[k]='\0';

    printf("%s\n",r);


}



return 0;
}
