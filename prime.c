#include <stdio.h>
void main(){
    int num;
    int m=1;
    printf("Enter number to check if it is prime: ");
    scanf("%d",&num);
    while(num==0){
        printf("\nEnter a non zero number: ");
        scanf("%d",&num);
    }
    if(num==1){
        printf("\n1 is neither prime nor composite.");
    }else{
        int i=2;
        int k;
        while(i<num){
            k=num%i;
            if(k==0){
                printf("it is not prime");
                m=0;
                break;
            }
            i++;
        }
    }
    if(m==1){
        printf("it is prime");
    }
}
