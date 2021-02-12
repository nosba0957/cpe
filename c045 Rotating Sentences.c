#include<stdio.h>
#include<string.h>

int main(){
	char text[100][101];
	int lenth[100],i,max;
	i=0,max=0;
	while(fgets(text[i],101,stdin)){ //Zerojudge不會過因為C11的fgets會不太對勁
		lenth[i]=strlen(text[i]);
		if(lenth[i]>max){
			max=lenth[i];
		}
		i++;
	}
	for(int j=0;j<100;j++){
		for(int k=lenth[j];k<max;k++){
			text[j][k]=' ';
		}
	}
	for(int j=0;j<max;j++){
		for(int k=i-1;k>=0;k--){
			printf("%c",text[k][j]);
		}
		printf("\n");
	}
	return 0;
}
