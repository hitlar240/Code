#include<stdio.h>
int main()
/*  Syntax
switch(variable)
{
  case value1:
        code block 1
    break;
  case value2:
        code block 2
    break;
    ... .. .
  default:
        code block
}
*/
{
    char letter='c';
switch (letter)
    {
case 'a': letter++; // next alphabet
    printf("%c",letter);
break;
case 'c': letter++;
    printf("%c",letter);
 break;
//default: other_letters++; // if there is no case match
    }
}
