#include<stdio.h>
void main(){
	int arr[5];
	for(int i=0;i<5;i++){
		printf("Enter number: ");
		scanf(" %d",&arr[i]);
	}
	
	printf("Alternate numbers: ");
	for(int i=0;i<5;i+=2){
		printf("%d",arr[i]);
	}
	
}