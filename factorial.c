#include <stdio.h>
void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int num2=num;
    num=num-1;
    for(num;num>1;num--){
        num2=num*num2;
    }
    printf("Factorial of the number is: %d",num2);
}
