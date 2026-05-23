#include <stdio.h>

int main() {

// This program converts temperature from Celsius to Fahrenheit and Kelvin
float c;
printf("enter the tempreture in celcius: ");
scanf("%f", &c); // tempreture in celcius

// formula for conversion
float f = (c*9/5)+32; // tempreture in farhenheit

// formula for conversion
float k = c+273.15; // tempreture in kalvin

// output
printf("tempreture in farhenheit is: %f\n", f);
printf("tempreture in kalvin is: %f\n", k);

// end of the program
return 0;
}