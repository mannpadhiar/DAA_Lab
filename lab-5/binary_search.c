#include<stdio.h>
#include<time.h>

// void binarySearch(int arr[],int n,int a){
//     int left = 0;
//     int right = n-1;
//     int mid = (left+right)/2;

//     while(left <= right){
//         if(a > arr[mid]){
//             left = mid+1;
//         }
//         else if(a < arr[mid]){
//             right = mid -1;
//         }else if(a == arr[mid]){
//             printf("Got it brother!!");
//             return;
//         }
//         mid = (left+right)/2;
//     }
//     printf("Not found");
// }

void recBinarySearch(int arr[],int n,int x,int left,int right){
    int mid = (left + right)/2;

    if(left > right){
        printf("Not found");
        return;
    }

    if(arr[mid] == x){
        printf("Got it");
        return;
    } if(x > arr[mid]){
        recBinarySearch(arr,n,x,mid + 1,right);
    } if(x < arr[mid]){
        recBinarySearch(arr,n,x,left,mid - 1);
    }
}

void main(){
    FILE *file;
    clock_t start,end;
    int n = 10000;

    int arr[n];
    int a = 3;

    file = fopen("one.txt","r");
    for(int i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);    
    }
    fclose(file);

    start = clock();
    recBinarySearch(arr,sizeof(arr)/sizeof(arr[0]),9999,0,sizeof(arr)/sizeof(arr[0]) -1);
    end = clock();
    printf("sort : %f",(end-start)/CLOCKS_PER_SEC);
}

