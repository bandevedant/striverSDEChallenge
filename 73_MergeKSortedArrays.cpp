#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
vector<int>merge(vector<int>&v1,vector<int>&v2){
  vector<int>temp;
  int i=0,j=0;
  int n=v1.size(),m=v2.size();
  while(i<n && j<m){
      if(v1[i]<=v2[j]){
          temp.push_back(v1[i++]);
      }
      else{
          temp.push_back(v2[j++]);
      }
  }
  while(i<n){
       temp.push_back(v1[i++]);
  }
  while(j<m){
       temp.push_back(v2[j++]);
  }
  return temp;
}
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here.
    //naive but constraints are small so always check constaraints first
    //copy all elements in an array and use sort O(nlogn) + space O(N)
    // vector<int>temp;
    // int n=kArrays.size();
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<kArrays[i].size();j++){
    //         temp.push_back(kArrays[i][j]);
    //     }
    // }
    // sort(temp.begin(),temp.end());
    // return temp;
    //better
    for(int i=k-1;i>=1;i--){
        kArrays[i-1]=merge(kArrays[i-1],kArrays[i]);
    }
    return kArrays[0];
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
    