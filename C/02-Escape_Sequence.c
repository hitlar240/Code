#include <stdio.h>

int main()
{
// (output may depend upon the compiler)
//Escape Sequence:

// \0 - NULL
    char s[]="tom\0al";
    printf("%s\n",s);

// \n - New Line
    printf("New Line \n");

// \t - Horizontal Tab
    printf("Horizontal\tTab \n");

// \v - Vertical Tab
    printf("Vertical\v"); printf("Tab \n");

// \a - Alarm or Beep
    printf("Alarm or Beep \a \n");

// \b - Backspace
    printf("x\bBackspace \n");

// \f - Form Feed

// \r - Carriage Return
    //printf("Carriage\rReturn\n");

// \\ - Backslash
    printf("Back \\ slash \n");

// %% - Percentage Sign
    printf("Percentage %% Sign\n");

// \' - Single Quote
    printf("\' Single \' Quote \n");

// \" - Double Quote
    printf("\" Double \" Quote\n");

// \? - Question Mark
    printf("Question \? Mark\n");



// \ooo - Octal Number

// \xhh - Hexadecimal Number

return (0);
}
