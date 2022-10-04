 #include<bits/stdc++.h>
using namespace std;
const int M = 1e9 +7;
const int N=1e5+10;
int fact[N];

int binaryexp(int n,int b){
	int result =1;
	while(b){

		if(b&1){
			result = (result*1ll *n) % M;
		}
		n = (n *1ll * n) % M;
		b = b>>1;
	}
	return result;
}
int main(){
	fact[0] = 1;
	for(int i=1;i<N;i++){
		fact[i] = (fact[i-1]* 1ll *i) % M;
	}
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>k>>n;
		int num = fact[k];
		int dem = fact[k-n];
		cout<<(num* 1ll *binaryexp(dem ,M-2)) % M;
	}
	return 0;
}