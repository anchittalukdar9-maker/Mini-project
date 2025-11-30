#include <stdio.h>
void main(){
    int n1;
    printf("Enter a positive integer: ");
    scanf("%d",&n1);
    while(n1<=0){
        printf("\nPlease enter a positive integer: ");
        scanf("%d",&n1);
    }
    int sum=0;
    int re;
    while(n1!=0){
    re=n1%10;
    sum+=re;
    n1=n1/10;
    }
    printf("The sum of the digits is: %d\n", sum);
}
