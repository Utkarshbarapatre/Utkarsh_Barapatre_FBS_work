#include<stdio.h>

void main(){
	char str[30];
	printf("Enter a string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='a'){
			str[i]='$';
		}
		i++;
	}
	printf("Updated String is:%s",str);
}