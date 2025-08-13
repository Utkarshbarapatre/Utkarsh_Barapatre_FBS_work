#include<stdio.h>
int main(){
	int a=78,b=81,c=64,d=87,e=69;
	int total_marks=a+b+c+d+e;
	float percentage=(total_marks/500.0)*100;
	printf("Total Marks: %d and Percentage: %f",total_marks,percentage);
}