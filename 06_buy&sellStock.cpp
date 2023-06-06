#include<bits/stdc++.h>
#define ll long long
using namespace std;
// int maximumProfit(vector<int> &prices){
//     // Write your code here.
//first approach passed 1 then 3 test cases each time different
//     int n=prices.size();
//     int mx=INT_MIN,mn=INT_MAX;
//     int a,b;
//     for(int i=0;i<n;i++){
//         if(mx<prices[i]){
//             a=i;
//             mx=prices[i];
//         }
//          if(mn>prices[i]){
//             b=i;
//             mn=prices[i];
//         }
//     }
//     if(a>=b){
//         return mx-mn;
//     }
//     else{
//         int ans1=INT_MIN;
//         for(int i=a-1;i>=0;i--){
//             ans1=max(mx-prices[i],ans1);
//         }
//         int ans2=INT_MIN;
//         for(int i=b+1;i<n;i++){
//             ans2=max(prices[i]-mn,ans2);
//         }
    
//         return max(ans1,ans2);
//     }
// }
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int mn=INT_MAX;
    int ans=0;
    for(int i=0;i<n;i++){
        
         if(mn>prices[i]){
            mn=prices[i];
        }
            ans=max(ans,prices[i]-mn);
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
    