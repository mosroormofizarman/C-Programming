//Integer Decimal Number to Binary Number Conversion without using Array

#include<stdio.h>

int main()
{
    int number, rem, sum=0, position=1; //"number" = user input decimal(integer) number, "rem" = reminder, "sum=0" = sum of the values of reminder, "position=1" = place the values of reminder base on number system

    printf("Enter an integer Decimal Number: ");
    scanf("%d", &number); //store the value into "number"

    //Now we have to figure out the values of binary number and insert them into the Array for printing.

    while(number)
    {
       rem = number%2; //store the reminders into rem
       number = number/2; //divide the number by 2 for quotients and store the result into number
       sum += rem*position; //summation of the values of reminder using unit variable
       position = position*10; //multiply 10 for placing the values of reminder base on number system
    }
    //Now we have to print the binary number using sum variable

    printf("\nBinary Number: %d", sum);

    return 0;
}
