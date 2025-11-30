#include <stdio.h>
void main(){
    int a;
    int b;
    int gr;
    int lr;
    int gcd;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b){
        gr=a;
        lr=b;
    }else{
        gr=b;
        lr=a;
    }
    int r;
    r=gr%lr;
    while(r!=0){
        gr=lr;
        lr=r;
        r=gr%lr;
    }
    gcd=lr;
    int lcm;
    lcm=(a*b)/gcd;
    printf("GCD of the numbers is %d\nLcm of the numbers is %d",gcd,lcm);
}
