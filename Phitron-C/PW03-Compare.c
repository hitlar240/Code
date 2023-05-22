#include<stdio.h>
#include<string.h>

int main()
{
    char a[21],b[21];
    scanf("%s %s",a,b);

    for(int i=0; ;i++)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("%s\n",a); //a=b
            break;
        }
        else if(a[i]>b[i])
        {
            printf("%s\n",b); //a>b
            break;
        }
        else if(a[i]<b[i])
        {
            printf("%s\n",a); //a<b
            break;
        }

    }


//    int c=strcmp(a,b);
//    if(c<=0)
//        printf("%s\n",a);
//    else
//        printf("%s\n",b);


return 0;
}
