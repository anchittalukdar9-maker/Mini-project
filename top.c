#include <stdio.h>
void main(){
    int marks[5][3];
    //recording the data
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("Enter the marks of student %d for subject %d: ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    int gr[4];
    for(int k=0;k<3;k++){
        gr[k]=marks[0][k];
        for(int l=0;l<5;l++){
            if(marks[l][k]>gr[k]){
                gr[k]=marks[l][k];
            }
        

        }
    }
    for(int m=0;m<3;m++){
        printf("The greatest marks in subject %d is: %d\n",m+1,gr[m]);
    }
    

}
