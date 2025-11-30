#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of readings: ");
    scanf("%d",&n);
    float reading[n+1];
    for(int i=1;i<=n;i++){
        printf("\nEnter reading No.%d: ",i);
        scanf("%f",&reading[i]);
    }
    int cou1=0,cou2=0;
    float pos[n+1],neg[n+1];
    for(int j=1;j<=n;j++){
        if(reading[j]>0){
            pos[cou1]=reading[j];
            cou1++;
        }else{
            neg[cou2]=reading[j];
            cou2++;
        }
    }
    printf("\nThe positive readings are: ");
    for(int k=0;k<cou1;k++){
        printf("%.2f ",pos[k]);
    }
    printf("\nThe negative readings are:");
    for(int l=0;l<cou2;l++){
        printf("%.2f ",neg[l]);
    }

}
