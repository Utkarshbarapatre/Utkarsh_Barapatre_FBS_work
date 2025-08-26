#include<stdio.h>
void main(){
	int no,sum=0,count=0,i,res,rem,temp;
	printf("Enter a number ");
	scanf("%d",&no);
	for(int num = 1; num <= no; num++) {
        int temp = num, sum = 0, count = 0, rem, res;
		while(temp>0){
			count++;
			temp=temp/10;
		}
		temp=num;
		while(temp>0){
			rem=temp%10;
			res=1;
			for(i=1;i<=count;i++){
				res=res*rem;
			}
			sum=sum+res;
			temp=temp/10;
		}
		if(sum==num){
			printf("%d ",num);
		}
	}
}