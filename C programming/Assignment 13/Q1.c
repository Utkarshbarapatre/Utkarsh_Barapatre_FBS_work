#include<stdio.h>
#include<stdlib.h>
void main(){
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	int i;
	printf("Enter the elements in arr:");
	for(i=0;i<size;i++){
		printf("\narr[%d]=",i+1);
		scanf("%d",&arr[i]);
	}
	int res=max(arr,size);
	printf("Maximum element is:%d",res);
	int res2=min(arr,size);
	printf("\nMinimum element is:%d",res2);
	free(arr);
}
int max(int arr[],int size){
	int maximum=arr[0];
	int i;
	for(i=1;i<size;i++){
		if(maximum<arr[i]){
			maximum=arr[i];
		}
	}
	return maximum;
}
int min(int arr[],int size){
	int minimum=arr[0];
	int i;
	for(i=1;i<size;i++){
		if(minimum>arr[i]){
			minimum=arr[i];
		}
	}
	return minimum;
}