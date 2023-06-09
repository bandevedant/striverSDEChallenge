#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  //brute force
  int sum=0;
  int mx=0;
  for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    if(sum==0){
       mx=max(mx,1);
    }
   for(int j=i+1;j<arr.size();j++){
     sum+=arr[j];
     if(sum==0){
       mx=max(mx,j-i+1);
     }
   }
   sum=0;
  }
 return mx;

//optimal
//  int sum=0;
//  int mx=0;
//  unordered_map<int,int>mp;

// for(int i=0;i<arr.size();i++){
//    sum+=arr[i];
//    if(sum==0){
//      mx=i+1;
//    }
//    else{
//      if(mp.find(sum)!=mp.end()){
//        mx=max(mx,i-mp[sum]);
//      }else{
//        mp[sum]=i;
//      }
//    }
   
// }
// return mx;
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
    