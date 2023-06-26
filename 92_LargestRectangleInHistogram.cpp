#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>

 int largestRectangle(vector < int > & ht) {
   // Write your code here.
   //naive O(n^2)
  //  int n=ht.size();
  //  int res=0;

  //  for(int i=0;i<n;i++){
  //    int curr=ht[i];
  //    for(int j=i-1;j>=0;j--){
  //      if(ht[j]>=ht[i])
  //      curr+=ht[i];
  //      else
  //      break;
  //    }
  //    for(int k=i+1;k<n;k++){
  //      if(ht[k]>=ht[i])
  //      curr+=ht[i];
  //      else
  //      break;
  //    }
  //    res=max(res,curr);
  //  }
  //  return res;
   //using stack O(N);
stack<int>st;
int n=ht.size();
  int res=0;
  
for(int i=0;i<n;i++){

 while(!st.empty() && ht[st.top()]>=ht[i]){
   int temp=st.top();
   st.pop();
   int curr=ht[temp]*(st.empty() ? i :(i-st.top()-1));
   res=max(curr,res);
 }
 st.push(i);
}
while(!st.empty()){
 int temp= st.top();
 st.pop();
 int curr=ht[temp]*(st.empty() ? n :(n-st.top()-1));
   res=max(curr,res);
}
return res;
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
    