#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		int b[n][n]={0};
		for(int i=0;i<n;i++){
			cin>>b[0][i];
		}
		b[1][0]=b[0][0]*2; b[1][1]=0;
		b[2][0]=b[0][0];
		int temp;
		for(int i=1;i<n;i++){
			if(b[1][i-2]!=b[1][i-1]) b[1][i]=0;
			else b[1][i]=b[0][i];
			b[2][i]=b[0][i];
			temp=max(b[1][i-1]+b[1][i]*2,b[2][i-1]+b[2][i]*2);
			b[2][i]=max(b[1][i-1]+b[1][i],b[2][i-1]+b[2][i]);
			b[1][i]=temp;
		}
		cout<<max(b[1][n-1],b[2][n-1])<<endl;
	}
	return 0;
}
