#include<stdio.h>
#include<stdbool.h>

int main(){
	int num;
	while(scanf("%d",&num) != EOF){
		bool count=false;
		int real_num=num;
		for(int i=2;i<=num/2;i++){
			if(num%i==0){
				printf("%d is not prime.\n",real_num);
				count=true;
				break;
			}
		}
		if(count) continue;
		int num2=0;
		while(num!=0){
			num2*=10;
			num2+=num%10;
			num/=10;
		}
		if(real_num==num2){
			printf("%d is prime.\n",real_num);
			continue;
		}
		for(int i=2;i<=num2/2;i++){
			if(num2%i==0){
				printf("%d is prime.\n",real_num);
				count=true;
				break;
			}
		}
		if(count) continue;
		printf("%d is emirp.\n",real_num);
	}
	return 0;
}
