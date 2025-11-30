#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d",&n);
    float marks[n+1];
    for(int i=1;i<=n;i++){
        printf("Enter marks of subject %d: ",i);
        scanf("%f",&marks[i]);
    }
    float gr,lr;
    gr=marks[1];
    for(int j=1;j<=n;j++){
        if(marks[j]>gr){
            gr=marks[j];
        }
    }
    lr=marks[1];
    for(int k=1;k<=n;k++){
        if(marks[k]<lr){
            lr=marks[k];
        }
    }
    printf("The greatest mark is: %.2f\nThe lowest mark is : %.2f",gr,lr);
}
