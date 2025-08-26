#include<stdio.h>
void main(){
	int no,rem,temp,fact,sum,num;
	printf("Enter the range: ");
    scanf("%d", &no);
    for(num=1;num<=no;num++){
    	temp=num;
    	sum=0;
    	while(temp>0){
			rem=temp%10;
			fact=1;
			for(int i=1;i<=rem;i++){
				fact=fact*i;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==num){
			printf("%d ",num);
		}
    }

}