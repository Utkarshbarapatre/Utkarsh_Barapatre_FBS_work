#include<stdio.h>
int mystrcmp(char*,char*);
void main(){
	char str1[30],str2[30];
	printf("Enter a string 1 ");
	scanf("%s",str1);
	printf("Enter a string 2 ");
	scanf("%s",str2);
	0==mystrcmp(str1,str2)?printf("Both strings are equal"):printf("Both strings not are equal");
	
}
int mystrcmp(char* str1,char* str2){
	int i=0,sum1=0,sum2=0;
	while(str1[i]!='\0'){
		sum1=sum1+str1[i];
		i++;
	}
	i=0;
	while(str2[i]!='\0'){
		sum2=sum2+str2[i];
		i++;
	}
	if(sum1==sum2){
		return 0;
	}
	else if(sum1>sum2){
		return 1;
	}
	else{
		return -1;
	}
}