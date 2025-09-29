#include<stdio.h>
char* mystrcat(char*,char*);

int main(){
	char str[30],str1[30];
	printf("Enter String 1 ");
	scanf("%s",str);
	printf("Enter String 2 ");
	scanf("%s",str1);
	printf("%s",mystrcat(str,str1));
	
}
char* mystrcat(char* str,char* str1){
	int len=mystrlen(str),j=0;
	int i=len;
	while(str1[j]!='\0'){
		str[i++]=str1[j++];
		
	}
	str[i]='\0';
	return str;
}
int mystrlen(char* str){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}