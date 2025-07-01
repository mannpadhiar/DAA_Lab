#include<stdio.h>

void selectionSortExample(int arr[],int n){
    for(int i=0;i<n -1;i++){
        int min = i;
        for(int j= i + 1; j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void main(){
    int arr[] = {6,2,8,9,1,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSortExample(arr,n);
}

