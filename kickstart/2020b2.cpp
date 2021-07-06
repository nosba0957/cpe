#include<iostream>
using namespace std;

int main(){
	int t,task=1;
	cin>>t;
	while(t--){
		int n,min=100000;
		long long int d;
		cin>>n>>d;
		long long int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		a[n-1]=d-(d%a[n-1]);
		for(int i=n-2;i>=0;i--){
			long long int ini=a[i];
			a[i]=d-(d%a[i]);
			while(a[i]>a[i+1]){
				a[i]-=ini;
			}
		}
		cout<<"Case #"<<task<<": "<<a[0]<<endl;
		task++;
	}
}
