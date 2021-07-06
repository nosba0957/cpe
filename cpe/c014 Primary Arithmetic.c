#include<stdio.h>

int main(){
	int num1,num2;
	while(scanf("%d %d",&num1,&num2)){
		if(num1==0&&num2==0) break;
		int count=0,part=(num1%10)+(num2%10);
		while(num1 !=0 || num2 !=0){
			if(part>=10){
				count++; num1/=10; num2/=10;
				part=(num1%10)+(num2%10)+1;
				continue;
			}
			num1/=10; num2/=10;
			part=(num1%10)+(num2%10);
		}
		if(count==0)
			printf("No carry operation.\n");
		else if(count==1)
			printf("1 carry operation.\n");
		else
		printf("%d carry operations.\n",count);
	}
	return 0;
}
