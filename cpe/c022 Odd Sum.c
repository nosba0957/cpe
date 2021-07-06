#include<stdio.h>

int main(){
	int n,count=1;
	scanf("%d",&n);
	while(n--){
		int u,d,sum=0;
		scanf("%d",&d);
		scanf("%d",&u);
		for(int i=d;i<=u;i++){
			if(i%2!=0){
				sum+=i;
			}
		}
		printf("Case %d: %d\n",count++,sum);
	}
	return 0;
}
