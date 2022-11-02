//Converts distance in miles to kilometres

#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void)
{
    float miles, kms;

    printf("Enter distance in miles: ");
    scanf("%f", &miles);

    kms = KMS_PER_MILE * miles;

    printf("\nThat equals %f km.", kms);

    return 0;
}
