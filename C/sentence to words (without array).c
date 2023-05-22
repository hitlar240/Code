#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int i,l;

    //scanf("%s",s);
    gets(s);
    l=strlen(s);

    for (i=0;i<l;i++)
        {
            if('a'<=s[0] && s[0]<='z')
                    s[0]=s[0]+'A'-'a';//capitalizing 1st character

            printf("%c",s[i]); //print character by character

            if (s[i]==' ')
                {
                if('a'<=s[i+1] && s[i+1]<='z')
                    s[i+1]=s[i+1]+'A'-'a';//next character capital
                printf("\n");//print next character in new line
                }
        }

















//    char s[1002], word[100];
// int i, j, length, is_word_started;
//
// gets(s);
// length = strlen(s);
// is_word_started = 0;
//
// for (i = 0, j = 0; i < length; i++)
// {
//
////case1
//    if (s[i] >= 'a' && s[i] <= 'z')
//    {
//        if (is_word_started == 0)
//        {
//            is_word_started = 1;
//            word[j] = 'A' + s[i] - 'a'; // first character is capital
//            j++;
//            }
//        else
//        {
//            word[j] = s[i];
//            j++;
//            }
//    }
//
////case2
//    else if (s[i] >= 'A' && s[i] <= 'Z')
//    {
//        if (is_word_started == 0)
//        {
//            is_word_started = 1;
//            }
//
//        word[j] = s[i];
//        j++;
//    }
//
////case3
//    else if (s[i] >= '0' && s[i] <= '9')
//    {
//        if (is_word_started == 0)
//        {
//            is_word_started = 1;
//            }
//        word[j] = s[i];
//        j++;
//    }
//
////print words
//    else
//    {
//        if (is_word_started == 1)
//        {
//            is_word_started = 0;
//            word[j] = '\0';
//            printf("%s\n", word);
//            j = 0;
//            }
//    }
//
//
// }
//

 return 0;
}
