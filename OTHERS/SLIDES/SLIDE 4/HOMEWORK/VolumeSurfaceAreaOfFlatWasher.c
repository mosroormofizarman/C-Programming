//Volume and Surface area of a flat washer where the height, outer diameter (𝑑1) and the inner diameter (𝑑2) are provided by the user as input

#include<stdio.h>
#include<math.h>
#define PI 3.141592654

int main()
{
    double height, d1, d2, radius1, radius2, volume, surface_area;

    printf("Enter the height of the flat washer: ");
    scanf("%lf", &height);

    printf("Enter the outer diameter of the flat washer: ");
    scanf("%lf", &d1);

    printf("Enter the inner diameter of the flat washer: ");
    scanf("%lf", &d2);

    radius1 = d1/2;
    radius2 = d2/2;

    if(height>=0 && d1>=0 && d2>=0)
    {
        if(radius1>radius2)
        {
            volume = (PI * height) * (pow(radius1, 2) - pow(radius2, 2)); // (PI * pow(radius1, 2) * height)- (PI * pow(radius2, 2) * height)
            surface_area = (2 * PI) * (((radius1) * (radius1 + height)) - ((radius2) * (radius2 + height))); //((2 * PI * radius1)(radius1 + height)) - ((2 * PI * radius2)(radius2 + height))

            printf("\nVolume of the flat washer: %.4lf",volume);
            printf("\nSurface Area of the flat washer: %.4lf",surface_area);
        }

        else
        {
        printf("\nOuter diameter must be greater than Inner diameter. Please insert appropriate values.");
        }
    }
    else
    {
        printf("\nInsert positive numbers for height, outer diameter and inner diameter");
    }

    return 0;
}
