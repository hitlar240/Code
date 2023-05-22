// 23.Sum of Series
#include<stdio.h>
#include<math.h>

int main()
{
// 1<=n<=10000
    long long int i,n,s1,s2,s3,s4,s5;
    s1=s2=s3=s4=s5=0; // initialization

    printf("s1=1+2+3+...+n\n");         // (a)
    printf("s2=1^2+2^2+3^2+...+n^2\n"); // (b)
    printf("s3=1^3+2^3+3^3+...+n^3\n");   // (c)
    printf("s4=1+3+5+...+(2n-1)\n");    // (d)
    printf("s5=2+4+6+...+2n\n");        // (e)

    printf("\nN=");scanf("%lld",&n);


//using formula: AP sum = n(2a+(n-1)d)/2 = n(1st + last)/2
printf("\n\nUsing formula:\n");

    s1=n*(1+n)/2; // left to right * / (right ans)
    //s=(n+1)/2*n; // left to right / * (wrong ans)
    s2=n*(n+1)*(2*n+1)/6;
    s3=pow(n*(1+n)/2,2);
    s4=n*n;// n*(1+2*n-1)/2;
    s5=n*(n+1);// n*(2+2*n)/2
    printf("\ns1=%lld\ns2=%lld\ns3=%lld\ns4=%lld\ns5=%lld\n",s1,s2,s3,s4,s5);


//Sum
printf("\n\nSum:\n");

    //for(i=1,s1=s2=s3=s4=s5=0,;i<=n;i++)
    //{
        //s1=s1+i;        // (a) {n}
        //s2=s2+pow(i,2); // (b) {n^2}
        //s3=s3+pow(i,3);   // (c) {n^3}
        //s4=s4+(2*i-1);  // (d) {2n-1}
        //s5=s5+2*i;      // (e) {2n}
    //}

    for(i=1,s1=0;i<=n;s1+=i,i++);           // (a) {n}
    for(i=1,s2=0;i<=n;s2+=pow(i,2),i++);    // (a) {n^2}
    for(i=1,s3=0;i<=n;s3+=pow(i,3),i++);      // (a) {n^3}
    for(i=1,s4=0;i<=n;s4+=(2*i-1),i++);     // (a) {2n-1}
    for(i=1,s5=0;i<=n;s5+=2*i,i++);         // (a) {2n}
    printf("\ns1=%lld\ns2=%lld\ns3=%lld\ns4=%lld\ns5=%lld\n",s1,s2,s3,s4,s5);


return 0;
}
