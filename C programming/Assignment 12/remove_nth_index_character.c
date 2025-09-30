#include<stdio.h>

void main(){
	char str[30];
	int n;
	printf("Enter a string:");
	scanf("%s",str);
	printf("Enter the number you want to remove character:");
	scanf("%d",&n);
	int i=0;
	while(str[i]!='\0'){
		if(i==n){
			str[i]=' ';
		}
		i++;
	}
	printf("Updated String is:%s",str);
}