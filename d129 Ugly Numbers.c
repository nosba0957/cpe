#include<stdio.h>
int max(long int a);
int main(){
	int a=1,count=0;
	long int b=6;
	while(1){
		int c=max(b);
		if(c==1){
			count++;
			printf("%ld\n",b);
		}
		if(count==1495){
			printf("The 1500'th ugly number is %ld",b);
			break;
		}
		b++;
	}
	return 0;
}
int max(long int a){
	if(a%2==0||a%3==0||a%5==0){
		for(int i=2;i<=(a/2);i++){
			if( a%i==0 && (i%2!=0 && i%3!=0 && i%5!=0) ){
				return 0;
			}
		}
		return 1;
	}
	else
		return 0;
}
