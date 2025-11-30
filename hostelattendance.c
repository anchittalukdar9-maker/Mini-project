#include <stdio.h>
void main(){
    int A[10][7];
    // recording
    for(int i=0;i<10;i++){
        printf("Enter attendance for student %d for 7days: ",i+1);
        for(int j=0;j<7;j++){
            scanf("%d",&A[i][j]);
        }
    }
    // counting for each student
    int atten[10][1];
    for(int k=0;k<10;k++){
        atten[k][0]=0;
        for(int l=0;l<7;l++){
            if(A[k][l]==1){
                atten[k][0]++;
            }
        }

    }
    // displaying the attendance
    printf("\nTotal present days: \n");
    for(int m=0;m<10;m++){
        printf("Student %d: %d\n",m+1,atten[m][0]);
    }
    //detecting the day
    int gr,lr,gr1,gr2;
    int dayc[7][1];
    for(int p=0;p<7;p++){
        dayc[p][0]=0;
        for(int q=0;q<10;q++){
            if(A[q][p]==1){
                dayc[p][0]++;
            }
        }
    }

    
    lr=dayc[0][0];
    for(int s=0;s<7;s++){
        if(dayc[s][0]<lr){
            lr=dayc[s][0];
        }
    }
    for(int t=0;t<7;t++){

        if(dayc[t][0]==lr){
            gr2=t+1;
        }
    }
    // finding student
    gr=atten[0][0];
    for(int r=0;r<10;r++){
        if(atten[r][0]>gr){
            gr=atten[r][0];
        }
    } 
    for(int s=0;s<10;s++){
        if(gr==atten[s][0]){
            gr=s+1;
            break;
        }
    }
    printf("\nStudent with highest attendance is Student %d\n",gr);
    printf("Day with lowest overall attendance is Day %d\n",gr2);

}
