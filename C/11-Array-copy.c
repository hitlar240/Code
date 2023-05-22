#include<stdio.h>

int main()
{
//input a
    int m; //size a
    scanf("%d",&m);

    int a[m];
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);



//input b
    int n; //size b
    scanf("%d",&n);

    int b[n];
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);


//copy arrays
//    int c[m+n];
//    for(int i=0;i<n+m;i++)
//        if(i<m)
//            c[i]=a[i];
//        else
//            c[i]=b[i-m]; //(slow)


//alt (fast)
    int c[m+n];
    //int i=0;
    //while(i<n)
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
        //i++;
    }
    int i=m;
    for(int j=0;j<n;j++)
    {
        c[i]=b[j];
        i++;
    }


//output
    for(int i=0;i<m+n;i++)
        printf("%d ",c[i]);


return 0;
}
