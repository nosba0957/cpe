#include<stdio.h>
#include<stdlib.h>

int big(int b,int c);
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d %d %d\n",a,b,big(a,b));
	}
	return 0;
}
int cycle(int a){
	int n;
	n=1;
	while(1){
		if(a==1){
			break;
		}
		if(a%2==1){
			a=3*a+1;
			n+=1;
		}
		else{
			a=a/2;
			n+=1;
		}
	}
	return n;
}
int big(int b,int c){
	if(b>c){
		int temp;
		temp=b;
		b=c;
		c=temp;
	}	
	int max,current;
	max=0;
	for(int i=b;i<=c;i++){	
		current=cycle(i);
		if(current>max)
			max=current;
	}
	return max;
}
