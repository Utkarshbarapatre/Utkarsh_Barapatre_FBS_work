#include<stdio.h>
#include<strings.h>
void main(){
	char str1[30],str2[30];
	printf("Enter a string:");
	scanf("%s",str1);
	int len=strlen(str1);
	int start=0,end=len-1;
	str2[start]=str1[end];
	int i=start+1;
	while( i<len-1){
		str2[i]=str1[i];
		i++;
	}
	str2[end]=str1[start];
	str2[end+1]='\0';
	printf("%s",str2);
}