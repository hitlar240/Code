#include<stdio.h>
int getint(char say[]);

int main()
{
    //int n=getint("N=");
    printf("num= %d",getint("N="));
return 0;
}


int getint(char say[])
{
    int i;
    printf("\n %s",say);
    scanf("%d",&i);
    return i;
}
