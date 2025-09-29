#include<stdio.h>
#include<strings.h>
void mystrncpy(char*,char*,int);

void main(){
	char str[30],str1[30];
	int n;
	printf("Enter String 1 ");
	scanf("%s",str);
	printf("Enter the number of element you want to copy: ");
	scanf("%d",&n);
	if(strlen(str)>n){
		mystrncpy(str1,str,n);
		printf("First %d elements of string are copied:%s",n,str1);
		
	}
	else{
		printf("Length of string exceeds");
	}
	
}
void mystrncpy(char* des,char* src,int n){
	int len=strlen(src);
	int i=0;
	while(i<n){
		des[i]=src[i];
		i++;
		
	}
	des[i]='\0';
}
