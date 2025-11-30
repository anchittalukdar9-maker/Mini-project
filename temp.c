#include <stdio.h>
void main(){
    float cel;
    float far;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&cel);
    far=(cel*9/5)+32;
    printf("The temperature in fahrenheit is: %.2f",far);
}
