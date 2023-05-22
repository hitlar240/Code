#include<stdio.h>
#include<math.h>


int main()
{
    int i,t;
    char n[20];

    scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%s",n);

    for(i=strlen(n)-1;i>=0;i--)
        printf("%c",n[i]);

    printf("\n");

}
return 0;
}
