#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
//it is a unique question with different approach
//all that we want is  min of leftmost building from i to rightmost building from i
//we will do it using prefix and suffix sum  
long getTrappedWater(long *arr, int n){
    // Write your code here.
    vector<long>pre;
    vector<long>suf(n,0);
    long temp=arr[0];
    pre.push_back(temp);
    for(int i=1;i<n;i++){
        pre.push_back(max(pre[i-1],arr[i]));
    }
    long temp2=arr[n-1];
    suf[n-1]=temp2;
    for(int i=n-2;i>=0;i--){
        suf[i]=max(suf[i+1],arr[i]);
    }
    long ans=0;
    for(int i=0;i<n;i++){
        ans+=min(pre[i],suf[i])-arr[i];
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
    