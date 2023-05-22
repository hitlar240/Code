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
    int day=9;
switch (day)
    {
    case 1: printf("Saturday");
        break; // break - breaks out of the switch block and stops the execution
    case 2: printf("Sunday");
        break;
    case 3: printf("Monday");
        break;
    case 4: printf("Tuesday");
        break;
    case 5: printf("Wednesday");
        break;
    case 6: printf("Thursday");
        break;
    case 7: printf("Friday");
        break;
    default: printf("Invalid Day !!"); // if there is no case match
    }
}
