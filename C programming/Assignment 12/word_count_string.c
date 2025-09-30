#include<stdio.h>
#include<strings.h>
void main(){
	char str[30];
	printf("Enter a string:");
	gets(str);
	int len=strlen(str);
	int i=0,count=0;
	int word=0;
	while(str[i] != '\0'){
		if(str[i]==' '){
			word=0;
		}else if(!word){
			word=1;
			count++;
		}
		i++;
	}
	printf("Total Number of words are:%d",count);
}