#include<stdio.h>
char* mystrchr(char*,char);
void main(){
	char str[30];
	char ch;
	printf("Enter a string 1 ");
	scanf("%s",&str);
	printf("Enter a character you want to search ");
	fflush(stdin);
	scanf("%c", &ch);
	char* ptr=mystrchr(str,ch);
	printf("\nFound at %s",ptr);
	
}
char* mystrchr(char* str,char ch){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==ch){
			return str+i;
		}
		i++;
	}
	return NULL;

}