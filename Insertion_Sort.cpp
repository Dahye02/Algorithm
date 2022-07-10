#include "main.h"

void Insertion(int arr[MAX]){
    int temp;

    for(int i=1;i<MAX;i++){
        if(arr[i]<arr[i-1]){
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
        for(int j=1;j<i;j++){
            if(arr[i-j]>arr[i-j-1]) break;
            else{
                temp=arr[i-j];
                arr[i-j]=arr[i-j-1];
                arr[i-j-1]=temp;
            }
        }
    }
}