#include<stdio.h>
void main(){
	int no,i,j,sum;
	printf("Enter a number "); 
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==i){
		printf("%d ",i);
	}
		
	}
	
	
}