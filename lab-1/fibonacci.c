#include<stdio.h>

void main(){
    int a = 0;
    int b = 1;
    int n;

    printf("Enter your number : ");
    scanf("%d",&n);

    printf("%d",a);

    for(int i=1;i<n;i++){
        int temp = b;
        printf("%d",temp);
        temp = a+b;

        a = b;
        b = temp;
    }

}