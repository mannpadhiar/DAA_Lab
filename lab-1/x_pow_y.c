#include<stdio.h>

void main(){
    int x,y,ans =  1;

    printf("Enter your base :");
    scanf("%d",&x);
    printf("Enter your power :");
    scanf("%d",&y);

    for(int i=0;i<y;i++){
        ans *= x;
    }
    printf("%d",ans);
}