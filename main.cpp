#include "main.h"

void printArr(int *);
void makeArr(int *);

int main(){
    //MAX개의 숫자를 CSV에서 뽑아 배열에 저장 -----------------
    int arr[MAX];
    
    makeArr(arr);
    Bubble(arr);
    printArr(arr);
}


//배열초기화
void makeArr(int arr[MAX]){
    for(int i=0;i<MAX;i++)  arr[i]=getCSV(i+1);
}

//배열출력
void printArr(int arr[MAX]){
    for(int i=0;i<MAX;i++)  cout<<arr[i]<<endl;
}