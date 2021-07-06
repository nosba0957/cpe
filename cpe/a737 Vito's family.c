#include<stdio.h>
#include<math.h>

void quicksort(int left,int right);
int number[500];
int main(){
	int n;
	scanf("%d",&n);
	while(n!=0){
		int man,mid,sum;
		scanf("%d",&man);
		for(int i=0;i<500;i++){
			number[i]=0;
		}
		for(int i=0;i<man;i++){
			scanf("%d",&number[i]);
		}
		quicksort(0,man-1);
		if(man%2==0)
			mid=((number[man/2-1])+(number[man/2]))/2;
		if(man%2==1)
			mid=number[man/2];
		sum=0;
		for(int i=0;i<man;i++){
			sum+=fabs(mid-number[i]);
		}
		printf("%d\n",sum);
		n--;
	}
	return 0;
}
void quicksort(int left,int right){
	int mid,i,j,temp;
	if(left>right)
		return;
	mid=number[left];
	i=left; j=right;
	while(i!=j){
		while(number[j]>=mid && i<j)
			j--;
		while(number[i]<=mid && i<j)
			i++;
		if(i<j){
			temp=number[i];
			number[i]=number[j];
			number[j]=temp;
		}
	}
	number[left]=number[i];
	number[i]=mid;

	quicksort(left,i-1);
	quicksort(i+1,right);
}
