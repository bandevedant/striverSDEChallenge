#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>

vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	int n=text.size();
	int m=pattern.size();

	int p=31;
	int mod=1e9+9;
	
	vector<long long>p_pow(max(n,m));
	p_pow[0]=1;
	for(int i=1;i<p_pow.size();i++){
		p_pow[i]=(p_pow[i-1]*p)%mod;
	}
	vector<long long>hashofText(n+1,0);
	for(int i=0;i<n;i++){
		hashofText[i+1]=(hashofText[i]+((text[i]-'a'+1)*p_pow[i]))%mod;
	}
	long long hashofPattern=0;
	for(int i=0;i<m;i++){
		hashofPattern=(hashofPattern+((pattern[i]-'a'+1)*p_pow[i]))%mod;
	}
	vector<int >occur;
	for(int i=0;i<n-m+1;i++){
		long long curr_hashValue=(hashofText[i+m]-hashofText[i]+mod)%mod;
		if(curr_hashValue==hashofPattern*p_pow[i]%mod)
		occur.push_back(i+1);

	}
	return occur;

	//  const int p = 31; 
    // const int m = 1e9 + 9;
    // int S = s.size(), T = t.size();

    // vector<long long> p_pow(max(S, T)); 
    // p_pow[0] = 1; 
    // for (int i = 1; i < (int)p_pow.size(); i++) 
    //     p_pow[i] = (p_pow[i-1] * p) % m;

    // vector<long long> h(T + 1, 0); 
    // for (int i = 0; i < T; i++)
    //     h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m; 
    // long long h_s = 0; 
    // for (int i = 0; i < S; i++) 
    //     h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m; 

    // vector<int> occurences;
    // for (int i = 0; i + S - 1 < T; i++) { 
    //     long long cur_h = (h[i+S] + m - h[i]) % m; 
    //     if (cur_h == h_s * p_pow[i] % m)
    //         occurences.push_back(i+1);
    // }
    // return occurences;
}

int main(){
  
 srand(time(NULL));
ios::sync_with_stdio(false);
cin.tie(0);
 
int t;
cin>>t;
while(t--){

}
  return 0;
}
    