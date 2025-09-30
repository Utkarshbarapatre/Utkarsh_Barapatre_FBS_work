#include<stdio.h>
void main(){
	char str1[30],str2[30];
	int sum1,sum2;
	printf("Enter the string1:");
	scanf("%s",str1);
	printf("Enter the string2:");
	scanf("%s",str2);
	int i=0;
	sum1=0;
	while(str1[i]!='\0'){
		char ch=str2[i];
		if(ch>='A' && ch<='Z') ch+=32;
		sum1+=ch;
		i++;
	}
	i=0,sum2=0;
	while(str2[i]!='\0'){
		char ch=str2[i];
		if(ch>='A' && ch<='Z') ch+=32;
		sum2+=ch;
		i++;
	}
	
	if(sum1==sum2) printf("Both the Strings are Equal:\"%s\" \"%s\"",str1,str2);
	else if(sum1>sum2) printf("String1:\"%s\" is Larger than String2:",str1);
	else printf("String2:\"%s\" is Larger than String1:",str2);
}