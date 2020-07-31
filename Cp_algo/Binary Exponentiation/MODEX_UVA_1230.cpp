#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,a,b,m,r;
void binary_exponentiation(ll x,ll y,ll t){
	for(x%=t,r = 1;y>0;y >>= 1,x = x*x%t){
		if(y & 1) r = r * x % t;
	}
	cout<<r<<'\n';
}
int main(){
	while(true){
		cin>>n;
		if(!n) break;
		while(n--){
			cin>>a>>b>>m;
			binary_exponentiation(a,b,m);
		}
	}
}
