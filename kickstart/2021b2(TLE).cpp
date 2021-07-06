#include<iostream>
#include<vector>
using namespace std;

int max(vector<int> b,int left,int right);
int solve(vector<int> a,int n){
	vector<int>b(a);
	int ans=max(b,0,n);
	b[0]=b[1]*2-b[2];
	int ans2=max(b,0,n);
	if(ans2>ans) ans=ans2;
	vector<int> d(a);
	d[n-1]=d[n-2]*2-d[n-3];
	ans2=max(d,0,n);
	if(ans2>ans) ans=ans2;
	for(int i=1;i<n;i++){
		vector<int> c(a);
		if((c[i+1]+c[i-1])%2!=0) continue;	
		c[i]=(c[i-1]+c[i+1])/2;
		ans2=max(c,0,n);
		if(ans2>ans){
			ans=ans2;
		}
	}
	return ans;
}
int max(vector<int> b,int left,int right){
	if(left==right) return 0;
	int er,count=1;
	er=b[left+1]-b[left];
	for(int i=left+1;i<right;i++){
		if(b[i]-b[i-1]==er){
			count++;
		}
		else{
			int count2=max(b,i,right);
			if(count2>count) count=count2;
			break;
		}
	}
	return count;
}
int main(){
	int t,count=1;
	cin>>t;
	while(t--){
		int n,temp;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++){
			cin>>temp;
			a.push_back(temp);
		}
		if(n==2){
			cout<<"Case #"<<count<<": 2"<<endl;
			count++;
			continue;
		}
		int ans=solve(a,n);
		cout<<"Case #"<<count<<": "<<ans<<endl;
		count++;
	}
}
