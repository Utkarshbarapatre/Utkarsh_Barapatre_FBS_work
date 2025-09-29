#include<stdio.h>
#include<strings.h>
char* mystrrchr(char*,char);
void main(){
	char str[30];
	char ch;
	printf("Enter a string 1 ");
	scanf("%s",&str);
	printf("Enter a character you want to search ");
	fflush(stdin);
	scanf("%c", &ch);
	char* ptr=mystrrchr(str,ch);
	printf("\nFound at %s",ptr);
	
}
char* mystrrchr(char* str,char ch){
	int i=strlen(str);
	while(i>0){
		if(str[i]==ch){
			return str+i;
		}
		i--;
	}
	return NULL;

}