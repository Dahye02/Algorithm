#include "main.h"

void printArr(int *);
void makeArr(int *);

int main(){
    int arr[MAX];
    
    makeArr(arr);
    Bubble(arr);
    printArr(arr);

    makeArr(arr);
    Selection(arr);
    printArr(arr);

    makeArr(arr);
    Quick(arr,0,MAX-1);
    printArr(arr);
}


//배열초기화
void makeArr(int arr[MAX]){
    for(int i=0;i<MAX;i++)  arr[i]=getCSV(i+1);
}

//배열출력
void printArr(int arr[MAX]){
    for(int i=0;i<MAX;i++)  cout<<arr[i]<<endl;
    cout<<"========================================="<<endl;
}