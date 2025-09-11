#include<stdio.h>
void main(){
	int arr1[5];
	int arr2[5];
	int merge[10];
	for(int i=0;i<5;i++){
		printf("Enter number in array 1 : ");
		scanf(" %d",&arr1[i]);
	}
	for(int i=0;i<5;i++){
		printf("Enter number in array 2 : ");
		scanf(" %d",&arr2[i]);
	}
	for(int i=0;i<5;i++) {
        merge[i]=arr1[i];
    }
    for(int i=0;i<5;i++) {
        merge[5+i]=arr2[i];
    }
    printf("Merged array: ");
    for(int i=0;i<10;i++) {
        printf("%d ",merge[i]);
    }
}