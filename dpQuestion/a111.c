#include<stdio.h>

int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0) break;
		if(n==1){
			printf("1\n");
			continue;
		}
		int ans=1;
		for(int i=2;i<=n;i++){
			ans+=i*i;
		}
		printf("%d\n",ans);
	}
	return 0;
}
