#include <stdio.h>
#include<time.h>

void merge(int arr[],int left,int right,int mid){
    int n1 = mid - left  + 1;
    int n2 = right - mid;


    int leftArr[n1], rightArr[n2];

    for(int i = 0;i < n1;i++){
        leftArr[i] = arr[left + i];
    }
    
    for(int j = 0;j < n2;j++){
        leftArr[j] = arr[mid + 1 +j];
    }
    
    int i = 0;    
    int j = 0;     
    int k = left; 

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < n1) {
        arr[k++] = leftArr[i++];
    }

    while (j < n2) {
        arr[k++] = rightArr[j++];
    }
    
}

void mergeSort(int arr[],int left,int right){
    if(left < right){
        int mid = (left + right)/2;
         
        mergeSort(arr,left,mid);
        mergeSort(arr,mid +1,right);
        merge(arr,left,right,mid);
    }
}

void main(){
    int arr[] = {4,6,7,3,5,8,4,2,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);


}