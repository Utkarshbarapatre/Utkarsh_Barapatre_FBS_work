#include<stdio.h>
void main(){
	int arr[10];
	int no;
	int found=0;
	for(int i=0;i<10;i++){
		printf("Enter numbers: ");
		scanf(" %d",&arr[i]);
	}
	printf("Enter number to find: ");
	scanf(" %d",&no);
	for(int i=0;i<10;i++){
		if(no==arr[i]){
			found=1;
		}
	}
	if(found==1){
		printf("Number found");
	}
	else{
		printf("Not Found");
	}
	
}