#include<stdio.h>

int main(){
	int n,sum,start;
	start=0;
	while(scanf("%d",&n) != 0){
		if(start==0){
			printf("PERFECTION OUTPUT\n");
			start++;
		}
		if(n==0){
			printf("END OF OUTPUT");
			break;
		}
		sum=0;
		for(int i=(int)n/2;i>0;i--){
			if(n%i==0){
				sum+=i;
			}
		}
		if(sum==n){
			printf("%5d  PERFECT\n",n);
		}
		if(sum>n){
			printf("%5d  ABUNDANT\n",n);
		}
		if(sum<n){
			printf("%5d  DEFICIENT\n",n);
		}
	}
	return 0;
}
