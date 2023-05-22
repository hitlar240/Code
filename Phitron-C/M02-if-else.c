#include<stdio.h>

int main()
{
    int x;
    printf("x="); 
    scanf("%d",&x);

//if-else ladder:
    //-executes statements from up to down

    if(x>=100)
        printf("%d>=100\n",x); //single statement doesn't need { }

    else if(x>50) //(x>50 && x<100)
    {
        printf("50<%d<100\n",x);
        printf("gorib :'(\n");
    }

    //else is not always necessary
    else //else can't be without previous if
        printf("%d<=50\n",x);


//Short hand if-else: relation ? (T)statement_1 : (F)statement_2

    int y;

    x>100 ? printf("\nbrolox!!") : printf("\ngoribz!");


//Conditional Operator:

    y = x>100 && x<200 ? x-50 : x+50;

    printf("\ny=%d",y);


return 0;
}
