#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
    vector<int>ans(n,INT_MIN);
    // vector<int>ans(n+1,INT_MIN);
    vector<int>prevSmall(n+1,-1);
    vector<int>nextSmall(n+1,n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]>=a[i])
        st.pop();

        if(!st.empty())
        prevSmall[i]=st.top();

        st.push(i);
    }
    while(!st.empty())
    st.pop();

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && a[st.top()]>=a[i])
        st.pop();

        if(!st.empty())
        nextSmall[i]=st.top();

        st.push(i);
    }
    for(int i=0;i<n;i++){
        int len=nextSmall[i]-prevSmall[i]-1;
        // ans[len]=max(ans[len],a[i]);
        ans[len-1]=max(ans[len-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
        ans[i]=max(ans[i],ans[i+1]);
    }
    // ans.pop_back();
    return ans;
    // for(int i=n-1;i>=1;i--){
    //     ans[i]=max(ans[i],ans[i+1]);
    // }
    // vector<int>res;
    // for(int i=1;i<n+1;i++){
    //     res.push_back(ans[i]);

    // }
    // return res;


//     for(int i=0;i<n;i++){
//         prevSmall[i]=i;
//         nextSmall[i]=n-i-1;
//     }
    
//     for(int i=0;i<n;i++){
//         while(!st.empty() && a[st.top()]>a[i]){
//             nextSmall[st.top()]=i-st.top()-1;
//             st.pop();
//         }
        
//         st.push(i);
//     }
//     while(!st.empty())
//     st.pop();

//     for(int i=n-1;i>=0;i--){
//         while(!st.empty() && a[st.top()]>a[i]){
//             prevSmall[st.top()]=st.top()-i-1;
//             st.pop();
//         }

//         st.push(i);
//     }

//   for(int i=0;i<n;i++){
//       int len=nextSmall[i]+prevSmall[i];
//       ans[len]=max(ans[len],a[i]);
//   }
//   for (int i = n - 2; i >= 0; i--)
//      if(ans[i]<ans[i+1]) ans[i]=ans[i+1];

    // return ans;
 
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
    