#include<stdio.h>
//#include<string.h>

int main() //127 p
{
    int x,y;
    char c;

    printf("\n(x,y)= ");
    scanf("%d,%d",&x,&y);

    printf("\nCommand: \n");

  while(1)
  {
      //printf("Command: "); // ??!!
      //scanf("%c",&c);
      c=getchar();

    if(c=='u') x--;
    if(c=='d') x++;
    if(c=='l') y--;
    if(c=='r') y++;

    if(x==1 && y==1) // (1,1) is blocked!
        {printf("Forbiden!\n"); continue;}

    if(c=='s')
        {printf("\n(x,y)= (%d,%d)",x,y);break;}
  }
return 0;
}
