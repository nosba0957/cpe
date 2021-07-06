#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t,task=1;
	cin>>t;
	while(t--){
		int n,temp,count=0;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++){
			cin>>temp;
			a.push_back(temp);
		}
		for(int i=1;i<n-1;i++){
			if(a[i]>a[i-1]&&a[i]>a[i+1]){
				count++;
				i++;
			}
		}
		cout<<"Case #"<<task<<": "<<count<<endl;
		task++;
	}
	return 0;
}
