#include "stdio.h"

extern float resistor_fun(float);

int main()
{
    float Resistor, current;

    printf("Enter the current value: ");
    scanf("%f", &current);

    Resistor=resistor_fun(current);

    printf("The requiered resistor should be: ");
    printf("%1.0f Ohms.\n", Resistor);
    
}