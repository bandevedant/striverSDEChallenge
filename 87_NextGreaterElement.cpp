#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<int>st;
    vector<int>ans;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){

        while(!st.empty() && arr[i]>=st.top()){
                st.pop();
        }
           !st.empty()  ? ans.push_back(st.top()) : ans.push_back(-1);    
        st.push(arr[i]);
    }
reverse(ans.begin(),ans.end());
ans.push_back(-1);
        return ans;  
    // stack<int>st;
    // vector<int>ans;
    // for(int i=0;i<n;i++){
    //     int j=i;
    //     while(!st.empty()){
    //         if(arr[j]>st.top()){
    //             st.pop();
    //             ans.push_back(arr[j]);   
    //             break;
    //         }
    //         if(j==n){
    //             ans.push_back(-1);  
    //             break;  
    //         }
    //         j++;
           
    //     }
    //     st.push(arr[i]);
    // }
    //     ans.push_back(-1); 

    //     return ans;  

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
    