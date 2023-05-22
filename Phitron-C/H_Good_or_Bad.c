#include<stdio.h>
#include<string.h>
int sub(char a[], char b[]);


int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        char s[100001];
        scanf("%s",s);

        if(sub(s,"101")==0 && sub(s,"010")==0)
        //if(strstr(s,"101")==0 && strstr(s,"010")==0)
            printf("Bad\n");
        else
            printf("Good\n");
    }
    
    



return 0;
}


int sub(char a[], char b[])
{
    int la=strlen(a);
    int lb=strlen(b);
    //int j;
    for(int i=0;a[i]!='\0';i++)
        for(int j=0;b[j]!='\0';j++)
        {
            if(a[i+j]!=b[j])
                break;
            if(j==lb-1)
                return 1;
        }


    return 0;
}