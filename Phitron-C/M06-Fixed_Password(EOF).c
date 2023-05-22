#include<stdio.h>

int main()
{
    int p;

// EOF (to take multiple input)?
// printf("%d\n",EOF);
// printf("%d\n",scanf("%d",&p));
    // 1 - (true when input is int)
    // 0 - (true when input is not int)


    //while(1)
    while(scanf("%d",&p))
    //for( ;scanf("%d",&p) != EOF; ) //End of File
    //while(scanf("%d",&p) != EOF) //End of File
    {
        //scanf("%d",&p);
        if(p==1999)
        {
            printf("Correct\n");
            break;
        }
        else printf("Wrong\n");
    }


return 0;
}
