#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 


vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    //brute
//     vector<int>ans;
//     int mn=INT_MAX;
//    for(int i=0;i<n;i++){
//        if(q[i][0]==1){
//            //push the minimum elem in ans
//            ans.push_back(mn);

//        }
//        else{
//            //insert
//            mn=min(q[i][1],mn);

//        }
//    }
//     return ans;
priority_queue<int,vector<int>,greater<int>>pq;
vector<int>ans;
for(int i=0;i<n;i++){
    if(q[i][1]){
        pq.push(q[i][1]);
    }
    if(q[i][0]==1){
      ans.push_back(pq.top());
      pq.pop();
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
    