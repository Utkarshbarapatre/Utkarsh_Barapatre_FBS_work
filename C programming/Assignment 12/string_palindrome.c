#include<stdio.h>
#include<strings.h>
void main(){
	char str1[30],str2[30];
	printf("Enter the string1:");
	scanf("%s",str1);
	int len=strlen(str1);
	int i=len-1,j=0;
	while(i>=0){
		str2[j++]=str1[i--];
	}
	str2[j]='\0';
	printf("%s",str2);
	int res=strcmp(str2,str1);
	if(res==0) printf("\nString is palindrome");
	else printf("\nString is not palindrome");
}