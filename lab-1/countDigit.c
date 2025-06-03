#include<stdio.h>

void main(){
    printf("Enter your number : ");
    int n;
    int digtCount = 0;
    scanf("%d",&n);

    while(n!=0){
        digtCount++;
        n = n/10;
    }

    printf("Your count is : %d",digtCount);
}