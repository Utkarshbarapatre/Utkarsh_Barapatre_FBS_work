#include<stdio.h>
void main(){
	int arr[5];
	int n=5;
	int temp;
	for(int i=0;i<5;i++){
		printf("Enter number in array: ");
		scanf(" %d",&arr[i]);
	}
	for(int i=0;i<n/2;i++){
		temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	} 
	
}