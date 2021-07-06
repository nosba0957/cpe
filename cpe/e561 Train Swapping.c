#include<stdio.h>

int arrange(int *train,int n,int count);
int main(){
	int all,n;
	scanf("%d",&all);
	for(int j=1;j<=all;j++){
		scanf("%d",&n);
		int train[n],count;
		for(int i=0;i<n;i++){
			scanf("%d",&train[i]);
		}
		count=0;
		int ans;
		ans=arrange(train,n,count);
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
	return 0;
}
int arrange(int *train,int n,int count){
	for(int i=1;i<n;i++){
		if(train[i-1]>train[i]){
			int temp;
			temp=train[i-1];
			train[i-1]=train[i];
			train[i]=temp;
			count+=arrange(train,n,count);
			count++;
		}
	}
	return count;
}
