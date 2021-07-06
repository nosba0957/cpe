#include<stdio.h>

int main(){
	int n,dec_base;
	scanf("%d",&n); //1 2 3 5 8 13 21 34
	while(n!=0){
		scanf("%d",&dec_base);
		if(dec_base==1){
			printf("1 = 1 (fib)\n");
			n--;
			continue;
		}
		int fib[100];
		int fnum,num1,num2,anum,i,dec;
		num1=0,num2=1,i=0;
		dec=dec_base;
		while(1){
			anum=num2+num1;
			if(anum>=dec){
				if(anum==dec){
					dec-=anum;
					num1=num2;
					num2=anum;
					anum=num2+num1;
				}
				else
					dec-=num2;
				fib[i]=1;
				i++;
				num1=num2;
				num2=anum;
				break;
			}
			num1=num2;
			num2=anum;
		}
		while(1){
			fnum=num2-num1;
			if(fnum<=dec){
				dec-=fnum;
				fib[i]=1;
				if(fnum==1 && dec==0)
					break;
			}
			else
				fib[i]=0;
			if(fnum==1&&dec==0)
				break;
			num2=num1;
			num1=fnum;
			i++;
		}
		printf("%d = ",dec_base);
		for(int j=0;j<=i;j++){
			printf("%d",fib[j]);
		}
		printf(" (fib)\n");
		n--;
	}
	return 0;
}
