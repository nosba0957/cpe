#include<stdio.h>

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		long long int array[n+1];
		array[0]=1; array[1]=1;
		for(int i=2;i<=n;i++){
			array[i]=array[i-2]+array[i-1];
		}
		printf("%lld\n",array[n]);
	}
}
