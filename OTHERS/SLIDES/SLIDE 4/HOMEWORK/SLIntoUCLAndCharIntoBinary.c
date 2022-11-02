//Accepts a character (small letter) as input from the user and converts it into uppercase letter.
//Shows its binary equivalent.
//For example if the user input is ‘b’ then your output is ‘B’ and 01100010 (ASCII code of ‘b’ is 98 and binary equivalent of 98 is 01100010)

#include<stdio.h>

char Convert_SL_Into_UCL(char SL)
{
    return SL - 32;
}

int Convert_Char_Into_Binary(char SL)
{
    int number=SL, rem, sum=0, position=1;

    while(number)
    {
       rem = number%2;
       number = number/2;
       sum += rem*position;
       position = position*10;
    }

    return sum;
}

int main()
{
    char small_letter;

    printf("Insert a character in small letter: ");
    scanf("%c", &small_letter);

    printf("\nUppercase Letter of %c: %c", small_letter, Convert_SL_Into_UCL(small_letter));

    printf("\nBinary equivalent of %c: %d",small_letter, Convert_Char_Into_Binary(small_letter));

    return 0;
}
