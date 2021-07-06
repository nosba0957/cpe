#include<iostream>
using namespace std;

int main(){
	int m,n;
	while(cin>>m>>n){
		int dp[m][n],task=1;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>dp[i][j];
			}
		}
		for(int i=1;i<m;i++){
			dp[i][0]+=dp[i-1][0];
		}
		for(int j=1;j<n;j++){
			dp[0][j]+=dp[0][j-1];
		}
		for(int i=1;i<m;i++){
			for(int j=1;j<n;j++){
				dp[i][j]+=min(dp[i][j-1],dp[i-1][j]);
			}
		}
		cout<<"Case #"<<task<<" :"<<endl<<dp[m-1][n-1]<<endl;
		task++;
	}
	return 0;
}
