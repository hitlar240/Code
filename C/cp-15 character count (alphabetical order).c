#include<stdio.h>
#include<string.h>


int main()
{
    int i,t,c=0;
    char j,s[1001];
    //long long int f=1;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
        scanf("%s",&s);

        for(j='a';j<='z';j++)
            {
            for(i=0;i<strlen(s);i++)
                if(s[i]==j)
                    c++;
            if(c>0)
                {printf("%c = %d\n",j,c);
                c=0;}
            }

        if(t!=0) printf("\n"); // no extra \n

}

return 0;
}
