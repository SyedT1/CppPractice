#include<iostream>
#include<cstring>
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	//Disabling C++ streams synchronization with C stream after I/O
	cin.tie(NULL);
	/*
	  ?true values = composite:false values = prime */
	int n; cin >> n;
	bool vlo[n + 1] ; memset(vlo, false, sizeof(vlo)); for (int i = 2; i <= n; i++) {
		if (!vlo[i]) {
			cout << i << ' ';
			for (int j = 2; j * i <= n; j++) {
				vlo[j * i] = true;
			}
		}
	}
}
