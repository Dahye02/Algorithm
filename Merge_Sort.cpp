#include "main.h"

/*
int count=0;
int returnArr[MAX];

void Merge(int arr[MAX],int left,int right){
    int temp=0;
    count++;
    if(left==right)  return;
    cout<<left<<" "<<right<<endl;
    if(count!=1 && (left==0 && right==MAX-1)){
        right=right/2+1;
        for(int i=0;i<MAX;i++){
            if(arr[left]<arr[right]){
                returnArr[i]=arr[left];
                left++;
            }
            else{
                returnArr[i]=arr[right];
                right++;
            }
        }
        for(int i=0;i<MAX;i++) arr[i]=returnArr[i];
        return;
    }

    if(arr[right]<arr[right-1]){
        temp = arr[right];
        arr[right]=arr[right-1];
        arr[right-1]=temp;
    }
    Merge(arr,right/2+1,right);
    Merge(arr,left,right/2);
}

내가 만든 코드의 문제점
1. 재귀함수 : 재귀를 나눠서 돌린다고 두 재귀가 동시에 돌아가는게 아니라, 위에 재귀먼저 끝내고 밑에 재귀가 돌아간다.
2. mid변수가 없다 : 재귀함수를 제대로 쓴다는 가정하에 mid변수를 만들어
    왼쪽unit, 오른쪽unit을 편하게 계산할 수 있도록 할 수 있다.

*/
int returnArr[MAX];

void merge_sort(int arr[MAX],int left,int middle,int right){
    int i,j,k,l;
    i = left;
    j = middle+1;
    k = left;

    //분할된 list합병
    while(i<=middle && j<=right){
        if(arr[i]>=arr[j])
            returnArr[k++]=arr[j++];
        else
            returnArr[k++]=arr[i++];
    }

    //남아있는 값 일괄 복사
    if(i>middle){
        for(l=j;l<=right;l++)
            returnArr[k++]=arr[l];
    }
    else{
        for(l=i;l<=middle;l++)
            returnArr[k++]=arr[l];
    }

    for(l=left;l<=right;l++){
        arr[l]=returnArr[l];
    }
}

void Merge(int arr[MAX],int left,int right){
    int middle;
    if(left<right){
        middle=(left+right)/2;
        Merge(arr,left,middle);
        Merge(arr,middle+1,right);
        merge_sort(arr,left,middle,right);
    }
}