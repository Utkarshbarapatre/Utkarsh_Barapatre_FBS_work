#include<stdio.h>
int main(){
	int h,m,sec,ts;
	printf("Enter hour min sec \n");
	scanf("%d %d %d",&h,&m,&sec);
	ts=h*3600+m*60+sec;
	printf("Total seconds are %d",ts);
}