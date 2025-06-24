#include <stdio.h>

void main(){
    int temp = 0;
    int sorted = 0; 
    int arr[] = {7,1,5,8,4,2};
    int n = 6;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j-1] > arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}