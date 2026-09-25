#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter water consumption in units: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 2;
    }
    else if (units <= 200)
    {
        bill = (100 * 2) + (units - 100) * 3;
    }
    else if (units <= 300)
    {
        bill = (100 * 2) + (100 * 3) + (units - 200) * 5;
    }
    else
    {
        bill = (100 * 2) + (100 * 3) + (100 * 5) + (units - 300) * 8;
    }

    printf("Water Bill = ₹%.2f\n", bill);

    return 0;
}