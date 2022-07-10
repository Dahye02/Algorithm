#include "main.h"

void Selection(int arr[MAX]){
    int min=0;
    int min_loc=0;
    int temp=0;

    for(int i=0;i<MAX;i++){
        min_loc=i;
        min=arr[i];
        for(int j=i;j<MAX;j++){
            if(arr[j]<min){
                min_loc=j;
                min=arr[j];
            }
        }
        temp=arr[i];
        arr[i]=min;
        arr[min_loc]=temp;
    }
}