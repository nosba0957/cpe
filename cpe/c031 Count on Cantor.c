#include<stdio.h>

int main(){
	int a,b,n,i;
	while( scanf("%d",&a) != EOF){
		b=a;
		for(i=1;;i++){
			if(((1+i)*i/2)>=a){
				i-=1;
				break;
			}
		}
		a=a-((1+i)*i/2);
		if(((i+1)%2)==1){
			if(a==0){
				printf("TERM %d IS %d/1\n",b,i-1);
			}
			printf("TERM %d IS %d/%d\n",b,(i+1)-(a-1),1+(a-1));
		}
		if(((i+1)%2)==0){
			if(a==0){
				printf("TERM %d IS 1/%d\n",b,i-1);
			}
			printf("TERM %d IS %d/%d\n",b,a,(i+1)-(a-1));
		}
	}
	return 0;
}
