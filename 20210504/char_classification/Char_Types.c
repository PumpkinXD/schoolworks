#include <stdio.h>
#include <ctype.h>


int main()
{
    char c=0;
    printf("type an ASCII character here:___\b\b\b");
    c=getc(stdin);
    putc('\n',stdout);
    if(iscntrl(c))/* https://en.cppreference.com/w/c/string/byte/iscntrl */
    {
        printf("the character is a control character\n");
    }
    else if(isdigit(c))
   {
        printf("It\'s a digit\n");
    }
    else if (isupper(c))
    {
        printf("It\'s an uppercase character\n");
    }
    else if (islower(c))
    {
        printf("It\'s a lower character\n");
    }
    else if(ispunct(c))
    {
       printf("it\'s a puncluation\n");
    }
    else
    {
        printf("It\'s an \"other\" character\n");
    }
    return 0;



}
