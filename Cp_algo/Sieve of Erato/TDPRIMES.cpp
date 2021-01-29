#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cmath>
using namespace std;
using ll = long long int;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll d = sqrt(ll(1e8)),p = 0;
	vector<char>com_(ll(1e8),true);
	com_[0]=com_[1]=false;
	for(ll i = 2;i<=d;i++){
		if(com_[i]){
		   p++;
		   if(p%100==1){
             cout<<i<<' ';
		   }
           for(ll j = i*i;j<ll(1e8);j+=i){
              com_[j]=false;
           }
		}
	}
	for(ll i = ll(1e4)+1;i<ll(1e8);i++){
		if(com_[i]){
			p++;
			if(p%100==1){
				cout<<i<<'\n';
			}
		}
	}
}
