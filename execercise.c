#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of days to exercise: ");
    scanf("%d",&n);
    int time[n+1];
    for(int i=1;i<=n;i++){
        printf("\nEnter the time exercised on day %d (in minutes): ",i);
        scanf("%d",&time[i]);

    }
    printf("\nExercise time in reverse order: ");
    for (int j=n;j>=1;j--){
        printf("%d ",time[j]);
    }
}
