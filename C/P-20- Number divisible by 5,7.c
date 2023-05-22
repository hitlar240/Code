// 20.Numbers Divisible by 5/7
#include<stdio.h>
int main()
{
    int p,q,i;
    printf("P=\t");scanf("%d",&p);
    printf("Q=\t");scanf("%d",&q);
//Divisible numbers
    printf("Numbers divisible by 5 or/and 7:");
    for(i=p; i<=q; i++)
    {
        if(i%5==0 || i%7==0) {printf("\t%d",i);} //Or
        //if(i%5==0 && i%7==0) {printf("\t%d",i);} //and
    }
    return 0;
}
