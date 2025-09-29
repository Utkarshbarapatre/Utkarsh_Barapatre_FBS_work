#include<stdio.h>
void mystrcpy(char*,char*);
void main(){
	char str1[30],str2[30];
	printf("Enter a string ");
	scanf("%s",str1);
	mystrcpy(str2,str1);
	printf("String is copied: %s ",str2);
}
void mystrcpy(char* des,char* src){
	int i=0;
	while(src[i]!='\0'){
		des[i]=src[i];
		i++;
	}
	des[i]='\0';
}