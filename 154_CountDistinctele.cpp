#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
vector<int> countDistinctElements(vector<int> &arr, int k)
{
    // Write your code here
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            if(i>=k-1){
            ans.push_back(mp.size());
            if(--mp[arr[i-k+1]]==0)
            mp.erase(arr[i-k+1]);

            }
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
    