#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    stack<int>st;
        vector<int>ans;
        st.push(-1);
    for(int i=0;i<price.size();i++){
        while(st.top()!=-1 && price[st.top()]<=price[i])
        st.pop();
        if(st.top() == -1)
            ans.push_back(i+1);
        else
            ans.push_back(i - st.top());
        st.push(i);
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
    