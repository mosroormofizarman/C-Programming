//Area of a triangle where the base and the height of the triangle are provided by the user as inputs
#include<stdio.h>

int main()
{
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("\nArea of the triangle: %.4f",area);

    return 0;
}
