#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
//brute not acceptable O(N! * N)
// void solve(int ind,int n, int k,vector<string>&ans,string s,string temp){
//     if(ind==n){
//         ans.push_back(temp);
//         return;
//     }
//     //for(int i=ind;i<n;i++){
//         temp+=s[ind];
//         solve(ind+1,n,k,ans,s,temp);
//         temp+="";
//         solve(ind+1,n,k,ans,s,temp);
//     //}

// }
string kthPermutation(int n, int k) {
    // Write your code here.
    //learned 
   string ans="";
   int fact=1;
   vector<int>num;
   for(int i=1;i<n;i++){
       fact=fact*i;
       num.push_back(i);
   }
       num.push_back(n);
       k=k-1;
       while(true){
          ans+=to_string(num[k/fact]);
          num.erase(num.begin()+k/fact);
          if(num.size()==0)
          break;
          k=k%fact;
          fact=fact/num.size();
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
    