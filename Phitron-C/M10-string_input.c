#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];

    //scanf("%s",a);
    // reads up to 'space'

    //scanf(" %[^\n]",a); //'space' before %[^\n]
    // reads up to '\n'

    //gets(a); // dangerous to use (no input size limit!)
    // reads up to '\n'

    int size=10;
    //fgets(a, size, stdin); // including '\n'
    // reads up to (size-1) and puts '\0' at the (size)th place
    // puts '\0' after '\n' and terminates

        printf("l=%d\n",strlen(a));//length including '\n'
        a[strlen(a)-1]='\0'; // to avoid printing '\n'

    printf("string is %s hah!\n",a);
    printf("length=%d\n",strlen(a)); //length excluding '\n'

return 0;
}
