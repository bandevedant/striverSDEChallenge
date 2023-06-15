#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include "bits/stdc++.h"
int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int cnt=0;
    int mx=INT_MIN;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
        }
        if(cnt>k){
            while(cnt>k){
                if(arr[j]==0)
                cnt--;

                j++;
            }
        }
        mx=max(mx,i-j+1);
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
    