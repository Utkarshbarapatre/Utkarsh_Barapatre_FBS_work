#include<stdio.h>
void main(){
	char str[30];
	int n;
	printf("Enter a string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		if(i%2!=0){
			str[i]=' ';
		}
		i++;
	}
	printf("Updated String is:%s",str);
}