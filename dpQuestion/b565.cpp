#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int a[n],mx=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i>0){
				if(a[i-1]<0) a[i-1]=0;
				a[i]=a[i-1]+a[i];
				mx=max(a[i],mx);
			}
		}
		cout<<mx<<endl;
	}
	return 0;
}
