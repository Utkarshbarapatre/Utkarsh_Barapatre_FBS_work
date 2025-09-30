#include<stdio.h>
void main(){
	int size,i;
	printf("Enter the size of the both arrays:");
	scanf("%d",&size);
	
	int* arr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter the elements in 1st arr:");
	for(i=0;i<size;i++){
		printf("\narr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int* arr2=(int*)malloc(sizeof(int)*size);
	printf("\nEnter the elements in 2nd arr:");
	for(i=0;i<size;i++){
		printf("\narr[%d]=",i);
		scanf("%d",&arr2[i]);
	}
	
	addArray(arr,arr2,size);	
}
void addArray(int arr[], int arr2[],int size){
	int* arr3=(int*)malloc(sizeof(int)*size);
	int i=0;
	while(i<size){
		int a=arr[i];
		int b=arr2[i];
		int c=0;
		c=a+b;
		arr3[i]=c;
		i++;
	}
	printf("\nBy adding both the arrays:");
	printf("{");
	for(i=0;i<size;i++){
			printf(" %d ",arr3[i]);
	}
	printf("}");
	free(arr);
}