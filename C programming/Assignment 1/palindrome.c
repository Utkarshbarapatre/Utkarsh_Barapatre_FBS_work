#include<stdio.h>
void main(){
	int y=2004;
	if(y%4==0&&y%100!=0||y%400==0){
		printf("Its Leap Year");
		
	}
	else{
		printf("Not a Leap Year");
	}
	
	
	
}