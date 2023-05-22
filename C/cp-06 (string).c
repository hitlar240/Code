#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,k,t;
    char n[10];

    scanf("%d",&t);


for(i=0;i<t;i++)
{
    scanf("%s",&n);

    printf("Sum = %d\n",n[0]-'0'+n[strlen(n)-1]-'0');

}

return 0;
}
