#include<stdio.h>
#include<strings.h>
char* mystrlwr(char*);

void main(){
	char str[30],str1[30];
	int n;
	printf("Enter String 1 ");
	scanf("%s",str);
	printf("%s",mystrlwr(str));
	
	
}
char* mystrlwr(char* str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]+32;
		}
		i++;
		
	}
	str[i]='\0';
	return str;
}
