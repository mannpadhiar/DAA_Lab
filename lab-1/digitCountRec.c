#include<stdio.h>
int count = 0;
int digtCount(int n){
    if(n == 0){
        return count;
    }
    
    ++count;

    return digtCount(n/10);
}

void main(){
    int n;
    int countDigit;
    printf("Enter your number : ");
    scanf("%d",&n);
    countDigit = digtCount(n);
    printf("%d",countDigit);
}
