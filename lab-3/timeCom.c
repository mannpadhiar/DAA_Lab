#include <stdio.h>
#include<time.h>
#include<stdlib.h>


void main(){
    FILE* file;

    file = fopen("one.txt","w");
    for(int i=0;i<100000;i++){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file = fopen("avgCase.txt","w");
    for(int i=100000;i>0;i--){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file = fopen("wrostCase.txt","w");
    for(int i=100000;i>0;i--){
        fprintf(file,"%d ",rand() % 100000);
    }
    fclose(file);

}
