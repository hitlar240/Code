#include<stdio.h>
#include<string.h>
void strcpy_(char copy[], char source[]);


int main()
{
//size of c >= size of s
    char c[1001]="bolod!";//,s[1001];
    char s[1001];

    //scanf("%s",&s); //reads before 1st 'space' character
    scanf("%[^\n]",&s); //reads before '\n' character

    printf("c=%s s=%s\n",c,s);


    strcpy_(c,s); //function call
    //strcpy(c,"goru");
    //strcpy(c,s); //copy before '\0' character


    printf("c=%s s=%s\n",c,s);

return 0;
}






void strcpy_(char copy[], char source[])
{
    int i=0;

//copy before 'space' character
    //for(i=0;source[i]!=' ';i++)
    //while(source[i]!=' ')

//copy before '\0' character
    //for(i=0;source[i]!='\0';i++)
    //while(source[i]!='\0')

//copy with '\0' character and terminates
    //for(i=0; i<=strlen(source); i++)
    while(i<=strlen(source))
    {
        copy[i]=source[i];
        i++; // increasing after assignment
    }

    //copy[i]='\0'; //terminating string

}
