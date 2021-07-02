#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		int end1,end2,lcs=0;
		end1=s1.size()-1;
		end2=s2.size()-1;
		for(;end1>=0&&end2>=0;){
			if(s1[end1]==s2[end2]){
				lcs++;
				end1--; end2--;
			}
			else if()
		}
	}
}
