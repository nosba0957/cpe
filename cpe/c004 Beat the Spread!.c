#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int sum,abs,big;
		scanf("%d %d",&sum,&abs);
		if(abs>sum||(sum+abs)%2==1){
			printf("impossible\n");
			continue;
		}
		big=(sum+abs)/2;
		printf("%d %d\n",big,sum-big);
	}
	return 0;
}
