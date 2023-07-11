#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
vector<int>prefix_function(string s){
    int n=s.size();
    vector<int>pi(n);
    pi[0]=0;
    for(int i=1;i<n;i++){
        int j=pi[i-1];
        while(j>0 && s[i]!=s[j])
        j=pi[j-1];
        if(s[i]==s[j])
        j++;

        pi[i]=j;
    }
    return pi;
}
bool findPattern(string p, string s)
{
    // Write your code here.
    int n=p.size();
    int m=s.size();
    p+='#';
    p+=s;
    vector<int>ans=prefix_function(p);
    for(int i=0;i<ans.size();i++){
        if(ans[i]==n)
        return true;
    }
    return false;

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
    