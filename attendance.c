#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int atten[n+1];
    for(int i=1;i<=n;i++){
        printf("Enter attendance of student %d: ",i);
        scanf("%d",&atten[i]);
    }
    int pr=0,ab=0;
    for(int j=1;j<=n;j++){
        if(atten[j]==1){
            pr++;

        }else{
            ab++;
        }
    }
    printf("Number of Present Students: %d\n",pr);
    printf("Number of Absent Students: %d\n",ab);
}
