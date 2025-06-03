#include<stdio.h>
int ans = 1;
int powerOf(int x,int y){
    if(y == 0){
        return ans;
    }
    ans *= x;
    return powerOf(x,y-1);
}

void main(){
    int x,y;
    int ans;
    printf("Enter your base :");
    scanf("%d",&x);
    printf("Enter your power :");
    scanf("%d",&y);

    ans = powerOf(x,y);
    printf("%d",ans);
}