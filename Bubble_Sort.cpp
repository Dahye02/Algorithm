#include "main.h"

void Bubble(int arr[MAX]){
    int num=0;
    int count=0;

    while(1){
        for(int i=0;i<MAX;i++){
            count=0;
            for(int j=i+1;j<MAX;j++){
                if(arr[i]>arr[j]){
                    num=arr[i];
                    arr[i]=arr[j];
                    arr[j]=num;
                    count++;
                }
            }
        }
        if(count==0)    break;
    }
}