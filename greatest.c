#include <stdio.h>
void main(){
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
while(n<=0){
    printf("\nPlease enter number of elements greater than 0: ");
    scanf("%d",&n);
}
int gr;
int nx;
if(n==1){
    printf("\nEnter the number: ");
    scanf("%d",&gr);
    printf("\nGreatest number is %d",gr);
}else if(n==2){
    printf("\nEnter the first number: ");
    scanf("%d",&gr);
    printf("\nEnter the second number: ");
    scanf("%d",&nx);
    if(gr>nx){
        printf("\nGreatest number is %d",gr);
    }else{
        printf("\nGreatest number is %d",nx);
    }
}else{
    printf("\nEnter the first number: ");
    scanf("%d",&gr);
    for(int i=2;i<=n;i++){
        printf("\nEnter the next number: ");
        scanf("%d",&nx);
        if(nx>gr){
            gr=nx;
        }

    }
    printf("\nGreatest number is %d",gr);
}
}
