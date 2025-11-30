#include <stdio.h>
#include <string.h>
void main(){
    char p1,p2;
    char nam[1000]="";
    printf("Enter your word: ");
    scanf("%s",nam);
    int l=strlen(nam); 
    int h=l/2;
    int c=1;
    for(int i=0;i<=h;i++){
       p1=nam[i];
       p2=nam[l-i-1]; 
       if (p1!=p2){
        c=0;
        break;
       }
    }
    if (c==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}
