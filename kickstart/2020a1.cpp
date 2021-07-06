#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,count=0;
	cin>>t;
	while(t--){
		count++;
		int n,b;
		cin>>n>>b;
		int num[n];
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		sort(num,num+n);
		int i=0;
		for(;i<n;i++){
		    b-=num[i];
		    if(b<0){
		        break;
		    }
		}
		cout<<"Case #"<<count<<": "<<i<<endl;
	}
	return 0;
}