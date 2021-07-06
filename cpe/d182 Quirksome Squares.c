#include<stdio.h>

int main(){
	int a;
	while(scanf("%d",&a) != EOF){
		int c,d,e,z;
		if(a==2)
			z=9;
		if(a==4)
			z=99;
		if(a==6)
			z=999;
		if(a==8)
			z=9999;
		for(c=0;c<=z;c++){
			for(d=0;d<=z;d++){
				e=(c+d)*(c+d);
				if(e==(c*(z+1))+d){
					printf("%0*d\n",a,e);
				}
			}
		}
	}
	return 0;
}
