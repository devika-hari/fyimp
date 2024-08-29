#include <stdio.h>

int main()
{
    char letter;

    printf("Enter any letter: ");
    scanf("%c", &letter);

    if(letter >= 'A0' && letter <= 'Z')
    {
        printf("'%c' is in uppercase ", letter);
    }
    else if(letter >= 'a' && letter <= 'z')
    {
        printf("'%c' is in lowercase", letter);
    }
    else
    {
        printf("'%c' is not an alphabet.", letter);
    }

}
