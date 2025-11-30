#include <stdio.h>
void main(){
    int num;
    printf("Enter your lucky number: ");
    scanf("%d",&num);
    int n1=num%2;
    if (n1==0){
        printf("Your number is even.");
    }
    else{
        printf("Your number is odd.");
    }
    int n2=num%5;
    if (n2==0){
        printf("\nYour number is divisible by 5.");
    }else{
        printf("\nYour number is not divisible by 5.");
    }
}
