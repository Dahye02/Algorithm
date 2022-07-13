#include "main.h"

void Heap(int arr[MAX]){
    int number=MAX;
    int i;
	// 힙 구조로 변환
	for(i = 1 ; i < number ; i++)
	{ 
		int c = i ;
		do{
			int root = (c-1)/2;
			if(arr[root] < arr[c])
			{
				int temp = arr[root];
				arr[root] = arr[c];
				arr[c] = temp;	
			}
			c = root;
		}while(c!=0);
	}

	// 힙 구성
	for(i = number - 1; i >= 0 ; i --)
	{
		int temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		int root = 0;
		int c = 1;
		do{
			c = 2*root +1;

			//자식 중 더 큰 값 찾기
			if(arr[c] < arr[c+1] && c< i-1)
			{
				c++;
			} 
			//루트보다 자식이 크면 교환
			if(arr[root]< arr[c] && c< i) 
			{
				int temp = arr[root];
				arr[root] = arr[c];
				arr[c] = temp;	
			}
			root = c;
		}
    while(c<i);
    }
}