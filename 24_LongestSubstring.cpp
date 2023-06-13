#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    //seen from discussion
    int mx=1;
    int n=input.size();
    vector<int>mp(26,0);
       int cnt=0;
    for(int i=0;i<n;i++){
        mp[input[i]-'a']++;
        while(mp[input[i]-'a']>1){
            mp[input[cnt]-'a']--;
            cnt++;
        }
            mx=max(mx,i-cnt+1);
       
    }
    return mx;
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
    