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
	printf("The Even Numbers are:- ");
	for(i=0;i<size;i++){
		if(isEven(arr[i])){
			printf("%d ",arr[i]);
		}
	}
	printf("\nThe Odd Numbers are:- ");
	for(i=0;i<size;i++){
		if(isEven(arr[i])==0){
			printf("%d ",arr[i]);
		}
	}
	
}
int isEven(int num){
	if(num%2==0){
		return 1;
	}
	return 0;
}