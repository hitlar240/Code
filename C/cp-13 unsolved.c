#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,k,n,m,t,c,r,ls,lw,wc;
    char s[1000],w[21];


    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
        scanf(" %[^\n]",&s);




    j=0;c=1;r=1;
    ls=strlen(s);

    for(i=0;i<ls;i++)
    {
        if(s[i]==' ')
        {
        //terminates word string
            c++; w[j]='\0'; j=0;

        printf("%s\n",w);

        //word compare
            lw=strlen(w); wc=1;

            for(k=i+1;k<ls;k++) //comparing with the words after that word
                if(s[k-1]==' ') //after 'space' if 1st letter match
                    for(m=0;m<lw;m++) //comparing the letters
                    {
                        if(w[m]!=s[k+m])
                            break; //loop breaks when letters doesn't match
                        if(m==lw-1 && (s[k+lw]==' ' || k+lw==ls))
                            {wc++; printf("k=%d m=%d km=%d wc=%d\n",k,m,k+m,wc);}//word count
                    }

            //r=reapeatation
            r=r*wc; //r=...r!
            printf("wc=%d r=%d\n",wc,r);

        }//if

        else {w[j]=s[i]; j++;} //assignment of characters in word

    }//for

    n=1;
    for(i=1;i<=c;i++)//n! (n<=10)
        n=n*i;

    printf("c=%d n=%d\n",c,n);

    printf("1/%d\n",n/r); // 1/N where N=n!/(...r!)
}



return 0;
}
