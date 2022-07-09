#include "main.h"

int main(){
    //MAX개의 숫자를 CSV에서 뽑아 배열에 저장 -----------------
    int arr[MAX];
    for(int i=0;i<MAX;i++)  arr[i]=getCSV(i+1);
    //-------------------------------------------------------

    Bubble(arr);
    /* 
        <malloc>
        arr=(int *)malloc(sizeof(int)*length);
    */

    //배열출력------------------------------------------------
    for(int i=0;i<MAX;i++){
         cout<<arr[i]<<endl;
    }
    //-------------------------------------------------------
}

