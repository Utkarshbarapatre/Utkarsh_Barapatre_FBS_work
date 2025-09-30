#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	int i;
	printf("Enter the elements in arr:");
	for(i=0;i<size;i++){
		printf("\narr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Prime Numbers in the array are:-");
	printf("{");
	for(i=0;i<size;i++){
		if(isPrime(arr[i])){
			printf(" %d ",arr[i]);
		}
	}
	printf("}");
}
int isPrime(int a){
	int num=a;
	int prime=0;
	int i;
	if(num==1){
		return 0;
	}
	for(i=2;i<num;i++){
		if(num%i==0){
			prime=1;
			break;
		}
	}
	if(prime==1){
		return 0;
	}
	return 1;
}