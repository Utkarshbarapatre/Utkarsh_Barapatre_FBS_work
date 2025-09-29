#include<stdio.h>
#include<strings.h>
char* mystrstr(char*,char*);

void main(){
	char str1[30],str2[30];
	printf("Enter String 1 ");
	scanf("%s",str1);
	printf("Enter substring ");
	fflush(stdin);
	scanf("%s",str2);
	char* ptr=mystrstr(str1,str2);
	printf("%s",ptr);
	
	
}
char* mystrstr(char* str1,char*  str2){
	int i,start,j;
	for(i=0;str1[i]!='\0';i++){
		start=i;
		j=0;
		while(str1[i]==str2[j]&&str1[i]!='\0'&&str2[j]!='0'){
			i++;
			j++;
		}
		if(str2[j]=='\0'){
			return str1+start;
		}
		i=start;
	}
	return NULL;
}
