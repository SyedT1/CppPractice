#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
int main(){
/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);   */
	vector<int>sieve(3001,0);
	vector<bool>co_(3001,true);
	co_[0]=co_[1]=false;
	for(int i = 2;i<3001;i++){
		if(co_[i]){
			for(int j = 2*i;j<3001;j+=i){
				co_[j]=false;
				sieve[j]++;
			}
		}
	}
	int n,pl = 0;cin>>n;
	for(int i = 2;i<=n;i++){
           pl+=(sieve[i]==2?1:0);
	}
	cout<<pl<<'\n';
}
