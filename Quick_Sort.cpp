#include "main.h"

void Quick(int arr[MAX],int start, int end){
    if(start>=end)  return;

    int pivot=start;
    int i=pivot+1;
    int j=end;
    int temp;

    while(i<=j){
        while(i <= end && arr[i]<=arr[pivot])  ++i;
        while(j > start && arr[j]>=arr[pivot]) --j;

        if(i>j){
            temp=arr[j];
            arr[j]=arr[pivot];
            arr[pivot]=temp;
        }else{
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    Quick(arr, start, j-1);
    Quick(arr, j+1,end);
}