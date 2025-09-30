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
	int res=sum(arr,size);	
	printf("The sum of the array elements is:%d",res);
}
int sum(int arr[],int size){
	int sum=0,i;
	for(i=0;i<size;i++){
			sum=sum+arr[i];
	}
	return sum;
}