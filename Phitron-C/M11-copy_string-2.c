#include<stdio.h>
#include<string.h>

int main()
{
//size of a >= size of b
    char a[1001]="abul";
    char b[1001];
    scanf("%s",b);
    int n;
    scanf("%d",&n);

    printf("a=%s b=%s\n",a,b);

    int i=0;
    //while(i<=strlen(b))
    for( ;i<n;i++)
           a[i]=b[i]; //copy with '\0' and terminates

    a[i]='\0';//terminate string

    //strncpy(a,b,n); // copy b to a

    printf("a=%s b=%s\n",a,b);



return 0;
}
