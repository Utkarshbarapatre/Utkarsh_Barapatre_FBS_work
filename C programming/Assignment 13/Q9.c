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
	printf("\nArray is:-");
	printf("{");
	for(i=0;i<size;i++){
			printf(" %d ",arr[i]);
	}
	printf("}");
	reverseArray(arr,size);
}
void reverseArray(int arr[],int size){
	int i=0;
	int j=size-1;
	while(i<j){
		if(i<j){
			swap(&arr[i],&arr[j]);
		}
		i++;
		j--;
	}
	printf("\nReversed Array is:-");
	printf("{");
	for(i=0;i<size;i++){
			printf(" %d ",arr[i]);
	}
	printf("}");
}
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}