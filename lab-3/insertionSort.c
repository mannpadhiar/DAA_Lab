#include <stdio.h>

void main(){
    int n,key;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){
        key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}