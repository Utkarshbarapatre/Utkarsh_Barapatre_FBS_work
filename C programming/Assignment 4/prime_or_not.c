#include<stdio.h>
void main(){
	int no,num,count=0,i;
	printf("Enter a number "); 
	scanf("%d",&no);
	for(num=1;num<=no;num++){
		count=0;
		for(i=1;i<=num;i++){
			if(num%i==0){
				count++;
			}
			
		}
		if(count==2){
			printf("%d ",num);
		}	
	}
	
}