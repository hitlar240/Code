#include<stdio.h>
#include<string.h>
int pl(char a[]);


int main()
{
    int t,i,j,k,n,m;
    char s[1001];

    scanf("%d",&t);

while(t--)
{
    scanf("%s",s);

    if(pl(s)==1)
        printf("Yes! It is palindrome!\n");
    else
        printf("Sorry! It is not palindrome!\n");



}

return 0;
}









int pl(char b[])
{
    int l=strlen(b);

    for(int i=0;i<l/2;i++)// half | half
        if(b[i]!=b[l-1-i])
            return 0;

    return 1;

}
