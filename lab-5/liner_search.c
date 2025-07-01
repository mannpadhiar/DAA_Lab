#include<stdio.h>
#include<time.h>

void linerSearch(int arr[],int n,int a){
    for(int i=0;i<n;i++){
        if(arr[i] == a){
            printf("Got it");
            return;
        }
    }
    printf("Not in array");
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
    linerSearch(arr,sizeof(arr)/sizeof(arr[0]),5000);
    end = clock();
    printf("sort : %f",(end-start)/CLOCKS_PER_SEC);
}
