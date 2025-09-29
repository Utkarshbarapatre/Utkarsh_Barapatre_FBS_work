#include<stdio.h>

void main(){
	char str1[30],str2[30];
	printf("Enter a string ");
	scanf("%s",str1);
	int len=mystrlen(str1);
	printf("\nLength of String is:%d",len);
	
}
int mystrlen(char* str){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}