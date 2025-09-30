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
	
	printf("{");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("}");
	printAlternate(arr,size);
}
void printAlternate(int arr[],int size){
	int i;
	printf("\nPrinting Alternate Numbers:- ");
	printf("{");
	for(i=0;i<size;i++){
		if(i%2==0){
			printf(" %d ",arr[i]);
		}
	}
	printf("}");
}