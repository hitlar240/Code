#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001]="123456789012345";

    //scanf("%s",a);
        // reads up to 'space'

    //scanf("%[^\n]",a);
        // reads up to '\n'


    printf("length = %d\n",strlen(a)); //length

    puts(a); // Displaying String
        // line breaks after printing

    printf("s1 = %s\n",a);
    printf("s2 = %30.10s\n",a);  // %(spacing).(character)s
    printf("s3 = %*.*s\n",10,7,a);  // %*.*s   | spacing=10, characters=7
    printf("s4 = %.5s\n",a);  // prints 15 characters
    printf("s5 = %.*s\n",3,a);  // prints 3 characters



return 0;
}
