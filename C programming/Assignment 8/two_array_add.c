#include<stdio.h>
void main(){
	int arr1[5];
	int arr2[5];
	int sum_array[5];
	for(int i=0;i<5;i++){
		printf("Enter number in array 1 : ");
		scanf(" %d",&arr1[i]);
	}
	for(int i=0;i<5;i++){
		printf("Enter number in array 2 : ");
		scanf(" %d",&arr2[i]);
	}
	for(int i=0;i<5;i++) {
        sum_array[i]=arr1[i]+arr2[i];
    }
    printf("Sum Array: ");
    for(int i=0;i<5;i++) {
        printf("%d ",sum_array[i]);
    }
}