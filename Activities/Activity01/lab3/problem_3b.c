#define Voltage 5
#include "stdio.h"

float resistor_fun(float i)
{
    float b;
    b=Voltage/i;
    return b;
}

int main()
{
    float Resistor, current;

    printf("Enter the current value: ");
    scanf("%f", &current);

    Resistor=resistor_fun(current);

    printf("The requiered resistor should be: ");
    printf("%1.0f Ohms.\n", Resistor);
}