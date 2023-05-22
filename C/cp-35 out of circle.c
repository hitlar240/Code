#include <stdio.h>
#include <math.h>

int main()
{
   int i,t,r,a,b,x,y;

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d %d",&a,&b);
    scanf("%d",&r);
    scanf("%d %d",&x,&y);

    if(pow((x-a),2)+pow((y-b),2)-r*r<0)
        printf("The point is inside the circle\n");
    else
        printf("The point is not inside the circle\n");


}
return 0;
}
