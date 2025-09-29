#include<stdio.h>
#include<strings.h>
void mystrrev(char*);

void main(){
	char str[30];
	int n;
	printf("Enter String 1 ");
	scanf("%s",str);
	mystrrev(str);
	printf("%s",str);
	
	
}
void mystrrev(char* str){
	int i=0;
	int end=strlen(str)-1;
	char temp;
	while(i<end){
		temp=str[i];
		str[i]=str[end];
		str[end]=temp;
		i++;
		end--;	
	}
}
