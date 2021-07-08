#include<iostream>
using namespace std;

int main(){
	int Z,L,I,M,L2=0,task=1;
	while(cin>>Z>>I>>M>>L){
		int count=0;
		L2=L;
		if(Z==0&&I==0&&M==0&&L==0) break;
		while(1){
			L2=(Z*L2+I)%M;
			L2=(Z*L2+I)%M;
			
			L=(Z*L+I)%M;
			if(L2==L){
				break;
			}
			count++;
		}
		cout<<"Case "<<task<<": "<<count+1<<endl;
		task++;
	}
	return 0;
}
