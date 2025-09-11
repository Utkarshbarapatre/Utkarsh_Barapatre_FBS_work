#include<stdio.h>
void main(){
	int arr[10];
	for(int i=0;i<10;i++){
		printf("Enter numbers: ");
		scanf(" %d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
			
		}
	}
	printf("\n Max number: %d ",max);
	printf("\n Min number: %d ",min);


		
	
}