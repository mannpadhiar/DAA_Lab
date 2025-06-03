#include<stdio.h>

int factorial(int n){
    if(n == 0 || n ==1){
        return 1;
    }
    return n*factorial(n-1);
}

void main(){
    printf("enter your number : ");
    int n;
    int ans;
    scanf("%d",&n);
    ans = factorial(n);
    printf("%d",ans);
}

