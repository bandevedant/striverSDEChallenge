#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

int romanToInt(string s) {
  // Write your code here
  unordered_map<char, int> mp = {
      {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
      {'C', 100}, {'D', 500}, {'M', 1000},
  };
  int ans = 0;
  for (int i = 0; i < s.size() ; i++) {
    if (mp[s[i]] < mp[s[i + 1]])
    {
        ans -= mp[s[i]];
        continue;
    }
  ans += mp[s[i]];
  }
return ans;
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
    