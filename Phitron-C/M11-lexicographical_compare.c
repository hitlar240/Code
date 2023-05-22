#include<stdio.h>

int main()
{
    char a[1001],b[1001];
    scanf("%s %s",a,b);

    int i=0;
    while(1) //infinite loop
    //for(int i=0; ;i++)

    //while(i<n) //1st n chars
    //for(int i=0;i<n;i++)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("a=b\n");
            break;
        }
        else if(a[i]>b[i])
        {
            printf("a>b\n");
            break;
        }
        else if(a[i]<b[i])
        {
            printf("a<b\n");
            break;
        }

        i++; //next char
    }


    int c=strncmp(a,b); //compare 1st n chars
    int c=strcmp(a,b); //compare strings
    if(c>0) //c=1
        printf("a>b\n");
    else if(c<0) //c=-1
        printf("a<b\n");
    else //c=0
        printf("a=b\n");

return 0;
}
