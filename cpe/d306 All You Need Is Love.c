#include<stdio.h>
#include<string.h>

int main(){
	int n,count=0,len1,len2;
	scanf("%d",&n);
	while(count!=n){
		char key[32],love[32];
		int ten1=0,ten2=0,temp;
		scanf("%s",key);
		scanf("%s",love);
		len1=strlen(key);
		len2=strlen(love);
		for(int i=0;i<len1;i++){
			if(i==len1-1&&key[i]=='1'){
				ten1++;
				break;
			}
			temp=key[i]-'0';
			for(int j=0;j<len1-i-1;j++){
				temp*=2;
			}
			ten1+=temp;
		}
		for(int i=0;i<len2;i++){
			if(i==len2-1&&love[i]=='1'){
				ten2++;
				break;
			}
			temp=love[i]-'0';
			for(int j=0;j<len2-i-1;j++){
				temp*=2;
			}
			ten2+=temp;
		}
		while(ten1>0&&ten2>0){
			if(ten1>ten2)
				ten1-=ten2;
			else
				ten2-=ten1;
		}
		if((ten1==0&&ten2!=1)||(ten2==0&&ten1!=1))
			printf("Pair #%d: All you need is love!\n",count+1);
		else
			printf("Pair #%d: Love is not all you need!\n",count+1);
		count++;
	}
	return 0;
}
