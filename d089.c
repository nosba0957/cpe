#include<stdio.h>

int day(int a, int b, int c, int d,int m,int h,int *sum2);
int night(int i,int j,int k,int l,int *sum2);
int* cal(int m,int n,int o,int p,int *sum2);
int main(){
	char a;
	int b,c,h1,m1,h2,m2,*sum2;
	float sum;
	*sum2=1;
	while(1){
		scanf("%c",&a);
		if(a=='#')
			break;
		scanf(" %d-%d %d %d %d %d",&b,&c,&h1,&m1,&h2,&m2);
		printf("%d-%d   ",b,c);
		int x,y,z;
		sum2=cal(h1,m1,h2,m2,sum2);
		x=day(h1,m1,h2,m2,8,18,sum2);
		y=day(h1,m1,h2,m2,18,22,sum2);
		z=night(h1,m1,h2,m2,sum2);
		printf("%d   %d   %d",x,y,z);
		if(a=='A')
			sum=0.1*x+0.06*y+0.02*z;
		if(a=='B')
			sum=0.25*x+0.15*y+0.05*z;
		if(a=='C')
			sum=0.53*x+0.33*y+.13*z;
		if(a=='D')
			sum=0.87*x+0.47*y+0.17*z;
		if(a=='E')
			sum=1.44*x+0.8*y+0.3*z;
		printf("  %c",a);
		printf("  %.2f\n",sum);
	}
	return 0;
}
int day(int a, int b, int c, int d,int m,int h,int *sum2){
	if(((a>=h&&a<24)&&((c<24&&c>a)||(c<m)))
	  ||((a<m&&a>=0)&&(c>a&&c<m))
	  ||(*sum2==0)){
		return 0;
	}
	if(a>=m&&a<h){ //在早上時段間開始
		int start;
		start=(h-1-a)*60+(60-b);
		if(*sum2>=start){
			*sum2-=start;
			return start+day(h,0,c,d,m,h,sum2);
		}
		if(*sum2<start){
			int end;
			end=*sum2;
			*sum2=0;
			return end;
		}
	}
	if(c>=m&&c<h){ //結束在早上時段
		int final;
		final=(c-m)*60+d;
		*sum2-=	final;
		return final;
	}
	if((a<m&&c>=h)||(a<m&&c<m)){ //打電話橫跨早上時段
		*sum2-=(h-m)*60;
		return (h-m)*60;
	}
}
int night(int i,int j,int k,int l,int *sum2){
	if((i<22&&i>=8)&&(k>i&&k<22)||(*sum2==0))
		return 0;
	if(i>=22||i<8){ //開始在晚上時段
		int start;
		if(i<24){
			start=(24-i+7)*60+(60-j);
		}
		if(i>0){
			start=(7-i)*60+(60-j);
		}
		if(*sum2>=start){
			*sum2-=start;
			return start+night(8,0,k,l,sum2);
		}
		if(*sum2<start){
			int end;
			end=*sum2;
			*sum2=0;
			return end;
		}
	}
	if(k<8||k>=22){ //結束在晚上時段
		int final;
		if(k>=22){
			final=(k-22)*60+l;
		}
		if(k<8){
			final=(k+2)*60+l;
		}
		*sum2-=final;
		return final;
	}
	if(i<22&&k>=8){ //橫跨整個晚上時段
		*sum2-=10*60;
		return 600;
	}
}
int* cal(int m,int n,int o,int p,int *sum2){
	if(m>o){
		o+=24;
	}
	*sum2=(o-m-1)*60+(p+60-n);
	return sum2;
}
