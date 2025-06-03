#include <stdio.h>

void main(){
    printf("Enter your number : ");
    int n;
    scanf("%d",&n);
    int i = 0;
    int fac = 0;

    for(i=1;i<=n;i++){
        fac += i;
    }

    printf("factorial is : %d",fac);
}