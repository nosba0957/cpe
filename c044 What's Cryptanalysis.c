#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char text[n][500];
	int count[26]={0};
	for(int i=-1;i<n;i++){
		fgets(text[i],499,stdin);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<1000;j++){
			if(text[i][j]=='\0') break;
			if(text[i][j]>='a'&&text[i][j]<='z'){
				count[text[i][j]-'a']++;
			}
			if(text[i][j]>='A'&&text[i][j]<='Z'){
				count[text[i][j]-'A']++;
			}
		}
	}
	while(1){
		int max=0,maxidx=0,i;
		for(i=0;i<26;i++){
			if(count[i]>max){
				max=count[i];
				maxidx=i;
			}
		}
		count[maxidx]=0;
		if(max==0) break;
		printf("%c %d\n",maxidx+'A',max);
	}
	return 0;
}
