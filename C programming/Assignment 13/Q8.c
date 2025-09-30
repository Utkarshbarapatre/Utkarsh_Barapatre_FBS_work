#include<stdio.h>
void main(){
	int size,size2,i;
	printf("Enter the size of the 1st arrays:");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter the elements in 1st arr:");
	for(i=0;i<size;i++){
		printf("\narr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the size of the 2nd arrays:");
	scanf("%d",&size2);	
	int* arr2=(int*)malloc(sizeof(int)*size2);
	printf("\nEnter the elements in 2nd arr:");
	for(i=0;i<size2;i++){
		printf("\narr[%d]=",i);
		scanf("%d",&arr2[i]);
	}
	mergeArray(arr,arr2,size,size2);
}
void mergeArray(int arr[],int arr2[],int p,int q){
	int size2 = p+q;
	int* arr3=(int*)malloc(sizeof(int)*size2);
	int i=0;
	int j=0;
	while(i<size2 && j<p){
		arr3[i] = arr[j];
		i++;
		j++;
	}
	i=p;
	int k=0;
	while(i<size2 && k<q){
		arr3[i] = arr2[k];
		i++;
		k++;
	}
	printf("{");
	for(i=0;i<size2;i++){
			printf(" %d ",arr3[i]);
	}
	printf("}");
}