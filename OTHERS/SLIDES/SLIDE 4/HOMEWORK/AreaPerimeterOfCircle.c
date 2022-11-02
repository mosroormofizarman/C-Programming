//Area and the Perimeter of a circle where the radius of the circle is provided by the user as input

#include<stdio.h>
#include<math.h>
#define PI 3.141592654

int main()
{
    double radius, area, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    perimeter = 2 * PI * radius;

    printf("\nArea of the circle: %.4lf",area);
    printf("\nPerimeter of the circle: %.4lf",perimeter);

    return 0;
}
