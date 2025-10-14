#include<stdio.h>
int main(){
	int no,i,j,fact,sum=0;
	printf("Enter the number: ");
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		fact=1;
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		sum=sum+fact;
	}
	printf("Sum is %d",sum);
	return 0;
}
	