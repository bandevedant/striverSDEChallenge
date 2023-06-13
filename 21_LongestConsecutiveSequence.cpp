#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    int cnt=1,mx=1;

    for(int i=1;i<n;i++){
          int  temp=arr[i-1];
        if(arr[i]-temp==1){
            cnt++;
        }
        else if(arr[i]-temp>1){
            cnt=1;
        }
        
        mx=max(cnt,mx);
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
    