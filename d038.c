#include<stdio.h>

int main(){
	int length;
	while(scanf("%d",&length)){
		if(length==0) break;
		long long int a,b;
		a=1; b=1;
		for(int i=1;i<length;i++){
			a+=b;
			b=a-b;
		}
		printf("%lld\n",a);
	}
	return 0;
}
