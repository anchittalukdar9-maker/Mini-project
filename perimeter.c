#include <stdio.h>
void main(){
    float l,b;
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("\nEnter the breadth: ");
    scanf("%f",&b);
    float peri=2*(l+b);
    float area=l*b;
    printf("The perimeter is %.2f and area is %.2f",peri,area);
}
