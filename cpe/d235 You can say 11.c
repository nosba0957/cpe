#include<stdio.h>
#include<string.h>

int main(){
	char num[1000];
	while(scanf("%s",num)){
		int length=0,sum_one=0,sum_two=0;
		if(num[0]=='0'&&num[1]=='\0') break;
		length=strlen(num);
		for(int i=0;i<length;i=i+2){
			sum_one+=num[i]-'0';
		}
		for(int i=1;i<length;i=i+2){
			sum_two+=num[i]-'0';
		}
		sum_one-=sum_two;
		for(int i=0;i<length;i++){
			printf("%c",num[i]);
		}
		if(sum_one%11==0){
			printf(" is a multiple of 11.\n");
		}
		else{
			printf(" is not a multiple of 11.\n");
		}
	}
	return 0;
}
