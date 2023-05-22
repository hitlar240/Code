#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n]; // 0 <= a[i] <= 9
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int c[10]={0}; //initial count of 0 1 2 3 4 5 6 7 8 9

    for(int i=0;i<n;i++)
    {
        //printf("%d %d\n",i,a[i]);

        //int val=a[i];
        //c[val]++;
        c[a[i]]++; // counting a[i]
    }

//counting number order
    for(int j=0;j<10;j++)
    {
        //printf("%d -> %d\n",j,c[j]); // print all
        if(c[j]!=0)
            printf("%d -> %d\n",j,c[j]); //print existing
    }

//array value wise
    for(int i=0;i<n;i++)
    {
        if(c[a[i]]!=0)
            printf("%d - %d\n",a[i],c[a[i]]);

        c[a[i]]=0; //to avoid repeatation
    }


return 0;
}
