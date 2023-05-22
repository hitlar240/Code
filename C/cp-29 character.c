#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    char c[2];

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
    scanf("%s",c);
    //scanf("%c",&c);
    //c=getchar();
    //scanf(" %[^\n]",&c);

    //printf("%s\n",c);

    if('a'<=c[0] && c[0]<='z')
        printf("Lowercase Character\n");
    else if('A'<=c[0] && c[0]<='Z')
        printf("Uppercase Character\n");
    else if('0'<=c[0] && c[0]<='9')
        printf("Numerical Digit\n");
    else
        printf("Special Characters\n");

}
return 0;
}

