#include<stdio.h>
#include<strings.h>
int mystrcasecmp(char*,char*);

void main(){
	char str1[30],str2[30];
	printf("Enter String 1 ");
	scanf("%s",str1);
	printf("Enter String 2 ");
	scanf("%s",str2);
	int res=mystrcasecmp(str1,str2);
	if(res==0){
		printf("First %d characters of the string are equal");
	}else if(res==1){
		printf("First %d characters of the string are not equal");
	}else{
		printf("String 1 is greater than String 2");
	}
	
	
}
int mystrcasecmp(char* str1,char*  str2){
	int i=0,sum1=0,sum2=0;
	while(str1[i]!='\0'){
		char ch=str1[i];
		if(ch>='A'&&ch<='Z'){
			ch=ch+32;
		}
		sum1=sum1+ch;
		i++;
	}
	i=0;
	while(str2[i]!='\0'){
		char ch=str2[i];
		if(ch>='A'&&ch<='Z'){
			ch=ch+32;
		}
		sum2=sum2+ch;
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
