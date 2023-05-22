#include<stdio.h>

int main()
{
    int n; // array size
    scanf("%d",&n);

    int a[n],b[n];
//input a
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
//input b
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);

//searching

    int c=0;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
            if(a[i]==b[j])
                c=1;

        if(c==0)
            break;
    }


// //sorting a
//     for(int i=0;i<n-1;i++)
//         for(int j=i+1;j<n;j++)
//             if(a[i]>a[j])
//             {
//                 int t=a[i];
//                     a[i]=a[j];
//                     a[j]=t;
//             }
// //sorting b
//     for(int i=0;i<n-1;i++)
//         for(int j=i+1;j<n;j++)
//             if(b[i]>b[j])
//             {
//                 int t=b[i];
//                     b[i]=b[j];
//                     b[j]=t;
//             }

// //compare a b
//     int c=1;
//     for(int i=0;i<n;i++)
//         if(a[i]!=b[i])
//         {
//             c=0;
//             break;
//         }

    if(c==1)
        printf("yes\n");
    else
        printf("no\n");


return 0;
}