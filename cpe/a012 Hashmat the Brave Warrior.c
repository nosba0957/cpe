#include<stdio.h>
#include<math.h>

int main(){
	long long a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		if(a>=b)
			printf("%lld",a-b);
		if(a<b)
			printf("%lld",b-a);
	}
	return 0;
}
