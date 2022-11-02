//Integer Decimal Number to Binary Number Conversion

#include<stdio.h>

int main()
{
    int i; //"i" = for loop variable
    int number; //"number" = user input decimal(integer) number
    int tan[8] = {}; //"tan" = Array name, where Datatype = integer and Array size = 8

    printf("Enter an integer Decimal Number: ");
    scanf("%d", &number); //store the value into "number"

    //Now we have to figure out the values of binary number and insert them into the Array for printing.

    for(i=0; number>0; i++) //"i=0" = we have to insert value from tan[0], "number>0" = the last value of the quotient is 1, "i++" = post increment for inserting all values of the reminder into the Array
    {
       tan[i] = number%2; //store the reminders into Array
       number = number/2; //divide the number by 2 for quotients
    }

    //Now we have to print the binary number using reverse array printing
    printf("\nBinary Number: ");

    for(i=i-1; i>=0; i--) //"i=i-1" = printing from the last value of the Array, "i>=0" = we have to print till tan[0], "i--" = post decrement for printing values last to fast from the Array
    {
         printf("%d", tan[i]); //print values last to fast from the Array
    }

    return 0;
}
