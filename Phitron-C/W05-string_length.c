#include<stdio.h>

// int len(char s[], int i)
// {
//     if(s[i] == '\0') return i; // base case

//     len(s, i+1);

// }

int len(char s[], int i)
{
    if(s[i] == '\0') return 0; // base case
    // len(s, 6) returns 0 to len(a, 5) returns 0+1 to len(s, 4) returns 1+1 to len(s, 3)...
    // ... returns 4+1 to len(s, 0) returns 5+1 to main()

    int l = len(s, i+1);

    printf("l=%d\n",l);

    return l+1;

}

int main()
{
    //char s[] = ""; // len = 0
    char s[] = "tom al"; // len = 6

    int l = len(s, 0);

    printf("lenth = %d\n",l);

return 0;
}