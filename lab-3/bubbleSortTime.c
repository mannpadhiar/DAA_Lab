#include <stdio.h>
#include<time.h>


void bubbleSort(int n ,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main(){
    int i;
    FILE* file;
    clock_t start,end;
    int n = 100000;
    int arr[n];

    file = fopen("one.txt","r");
    for(i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);    
    }
    fclose(file);

    start = clock();
    bubbleSort(n,arr);
    end = clock();
    printf("wrost case time bubble sort : %f",(end-start)/CLOCKS_PER_SEC);
}
