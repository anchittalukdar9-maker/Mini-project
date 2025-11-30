#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of fibbonacci numbers: ");
    scanf("%d",&n);
     while(n<1){
        printf("Invalid input enter a number greater than 0: ");
        scanf("%d",&n);
    }
    int fib[n+3];
    fib[0]=0;
    fib[1]=1;
    if (n>2){
        for(int i=2;i<n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        printf("\n%d\n%d",fib[0],fib[1]);
        for(int j=2;j<n;j++){
            printf("\n%d",fib[j]);
        }
    }
    else if(n==2){
        printf("\n%d\n%d",fib[0],fib[1]);
    }else{
        printf("%d",fib[0]);
    }
}
