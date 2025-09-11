#include<stdio.h>
void main(){
	int arr[5];
	for(int i=0;i<5;i++){
		printf("Enter number: ");
		scanf(" %d",&arr[i]);
	}
	
	printf("Even numbers: ");
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\nOdd numbers: ");
	for(int i=0;i<5;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
	
}