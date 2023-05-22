#include<stdio.h>

int main()
{
    char a[1001],b[1001];
    scanf("%s %s",a,b);
    int n; //number of char to compare
    scanf("%d",&n);

    int i=0;
    int c=0; //initialize a=b
    while(i<n) //1st n chars
    //for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            c=1;
            //printf("a>b\n");
            break;
        }
        else if(a[i]<b[i])
        {
            c=-1;
            //printf("a<b\n");
            break;
        }

        i++; //next char
    }


    //c=strncmp(a,b); //compare 1st n chars

    if(c>0) //c=1
        printf("a>b\n");
    else if(c<0) //c=-1
        printf("a<b\n");
    else //c=0
        printf("a=b\n");

return 0;
}
