#include<stdio.h>
#include<strings.h>
void main(){
	char str[30];
	char ch;
	printf("Enter a string:");
	scanf("%s",str);
	printf("Enter a character to search in String:");
	fflush(stdin);
	scanf("%c",&ch);	
	char* ptr=strchr(str,ch);
	printf("\nFound Character %c at:%s",ch,ptr);
	
}