// Area and the Perimeter of a rectangle where the length and the width of the rectangle are provided by the user as inputs

#include<stdio.h>

int main()
{
    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\nArea of the rectangle: %.4f",area);
    printf("\nPerimeter of the rectangle: %.4f",perimeter);

    return 0;
}
