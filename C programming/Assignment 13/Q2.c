#include<stdio.h>
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
	search(arr,size);
}
void search(int arr[],int size){
	int num;	
	printf("\nEnter the number you want to search:");
	scanf("%d",&num);
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==num){
			printf("\nFound element at index:%d",i+1);
			return;
		}
	}
	printf("Element not found");
}