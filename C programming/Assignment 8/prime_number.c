#include<stdio.h>
void main(){
	int arr[5];
	for(int i=0;i<5;i++){
		printf("Enter number: ");
		scanf(" %d",&arr[i]);
	}
	printf("Prime numbers in array: ");

    for (int j=0;j<5;j++) {
        int n=arr[j];
        int i=2;
        int prime=1;
        while (i<=n/2) {
            if (n%i==0) {
                prime=0;
                break;
            }
            i++;
        }
        if (prime&&n>1) {
            printf("%d ",n);
        }
    }
	
}