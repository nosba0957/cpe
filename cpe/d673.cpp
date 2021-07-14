#include<iostream>
using namespace std;

int main(){
	int t,task=1;
	while(cin>>t){
		if(t<0) break;
		int a[12],b[12];
		for(int i=0;i<12;i++)
			cin>>a[i];
		for(int i=0;i<12;i++)
			cin>>b[i];
		cout<<"Case "<<task<<":"<<endl;
		for(int i=0;i<12;i++){
			if(i>0) t+=a[i-1];
			if(b[i]<=t){
				t-=b[i];
				cout<<"No problem! :D"<<endl;
			}
			else
				cout<<"No problem. :("<<endl;
		}
		task++;
	}
	return 0;
}
