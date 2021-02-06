#include<stdio.h>
#include<string.h>

int main(){
	char ste[21];
	char mirror[45]={'A','A','E','3','H','H','I','I','J','L','L','J','M','M','O','O','S','2','T','T','U','U','V','V','W','W','X','X','Y','Y','Z','5','0','0','1','1','2','S','3','E','5','Z','8','8'};
	while(scanf("%s",ste) != EOF){
		int len,count,count2;
		len=strlen(ste),count=0,count2=0;
		for(int i=0;i<len;i++){
			if(ste[i] == ste[len-1-i]){
				count++;
			}
		}
		for(int l=0;l<(float)(len/2);l++){
			for(int i=0;i<45;i++){
				if(ste[l]==mirror[i] && ste[len-1-l]==mirror[i+1]){
					count2++;
				}
				i++;
			}
		}
		if(len%2==1) count2++;
		if(count!=len && count2==((int)(len+1)/2)){
			printf("%s -- is a mirrored string.\n",ste);
		}
		if(count==len && count2!=((int)(len+1)/2)){
			printf("%s -- is a regular palindrome.\n",ste);
		}
		if(count==len && count2==((int)(len+1)/2)){
			printf("%s -- is a mirrored palindrome.\n",ste);
		}
		if(count!=len && count2 !=((int)(len+1)/2)){
			printf("%s -- is not a palindrome.\n",ste);
		}
	}
	return 0;
}
