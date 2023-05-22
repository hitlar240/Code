#include<stdio.h>
#include<string.h>


int main()
{
    int l,i,t,c[26];
    char ch,s[1001];

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
    for(i=0;i<26;i++)
        c[i]=0;

        scanf("%s",&s);

        l=strlen(s);

        for(i=0;i<l;i++)
            {
            for(ch='a';ch<='z';ch++)
                if(s[i]==ch)
                    c[ch-'a']++;

            }

    for(i=0;i<l;i++)
        if(c[s[i]-'a']>0)
        {
            printf("%c = %d\n",s[i],c[s[i]-'a']);
            c[s[i]-'a']=0;
        }


        if(t!=0) printf("\n"); // no extra \n

}

return 0;
}
