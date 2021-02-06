#include<stdio.h>

int main(){
	char a,count;
	while(scanf("%c",&a) != EOF){
		if(a=='"'){
			if(count==1){
				printf("''");
				count=0;
				continue;
			}
			printf("``");
			count++;
			continue;
		}
		printf("%c",a);
	}
	return 0;
}
