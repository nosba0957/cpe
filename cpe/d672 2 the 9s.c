#include<stdio.h>
#include<string.h>

int main(){
	char a[1001];
	while(scanf("%s",a)){
		if(a[0]=='0'&&a[1]=='\0') break;
		int sum=0,degree=0,length=0;
		length=strlen(a);
		for(int i=0;i<length;i++){
			sum+=a[i]-'0';
		}
		while(sum>0){
			if(sum%9!=0) break;
			if(sum==9){
				degree++;
				break;
			}
			int temp=0;
			while(sum>0){
				temp+=sum%10;
				sum/=10;
			}
			sum=temp;
			degree++;
		}
		for(int i=0;i<length;i++){
			printf("%c",a[i]);
		}
		if(degree){
			printf(" is a multiple of 9 and has 9-degree %d.\n",degree);
		}
		else{
			printf(" is not a multiple of 9.\n");
		}
	}
	return 0;
}
