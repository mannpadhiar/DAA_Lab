#include<stdio.h>

int fibonacci(int n){
    
    if(n == 0 || n ==1){
        return n;
    };
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

void main(){
    printf("enter your number : ");
    int n;
    int ans;
    scanf("%d",&n);
    ans = fibonacci(n);
    printf("%d",ans);
}