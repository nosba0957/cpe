#include<iostream>
#include<string>
using namespace std;

int main(){
	int t,t_count=1;
	cin>>t;
	while(t--){
		int n,temp,count=1;
		string s;
		cin>>n>>s;
		temp=s[0];
		cout<<"Case #"<<t_count<<": "<<count;
		for(int i=1;i<n;i++){
			if(s[i]>temp){
				count++;
				cout<<" "<<count;
			}
			else if(s[i]<=temp){
				count=1;
				cout<<" "<<count;
			}
			temp=s[i];
		}
		cout<<endl;
		t_count++;
	}
}
