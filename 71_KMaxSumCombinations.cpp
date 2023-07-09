#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k) {
  // Write your code here.
  //tc=2*O(nlogn)+O(n^2)+O(klogn)
//   sort(a.rbegin(), a.rend());
//   sort(b.rbegin(), b.rend());
//   vector<int> ans;
//   priority_queue<int>pq;
//   for(int i=0;i<n;i++){
// 	  for(int j=0;j<n;j++){
// 		  pq.push(a[i]+b[j]);
// 	  }
//   }
//   for(int i=0;i<k;i++){
// 	  ans.push_back(pq.top());
// 	  pq.pop();
//   }
//   return ans;

  //O(nlogn)
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  vector<int> ans;
  priority_queue<pair<int,pair<int,int>>>pq;
  set<pair<int,int>>st;

  pq.push({a[n-1]+b[n-1],{n-1,n-1}});
  st.insert({n-1,n-1});

  while(k--){
	  pair<int,pair<int,int>>temp=pq.top();
	  pq.pop();

	  ans.push_back(temp.first);

	  int i=temp.second.first;
	  int j=temp.second.second;

	  int sum=a[i-1]+b[j];

	  if(st.find({i-1,j})==st.end()){
		  pq.push({sum,{i-1,j}});
		  st.insert({i-1,j});
	  }
	   sum=a[i]+b[j-1];

	  if(st.find({i,j-1})==st.end()){
		  pq.push({sum,{i,j-1}});
		  st.insert({i,j-1});
	  }

  }
return ans;
  //was trying to solve in linear but seems only 3 test cases passed
//   int i = 0, j = 0;
//   for (int m = 0; m < k; m++) {
//     if (i < n && j < n) {

//       sum += a[i] + b[j];
//       ans.push_back(sum);
//       sum = 0;
//       if (m == 0) {
//         if (a[i] > b[j])
//           j++;
// 		else if(a[i]==b[j]){
// 			while( i<n && j<n){
// 				if(a[i+1]>b[j]){
// 					i++;
// 					break;
// 				}
// 				else if( b[j+1]>a[i]){
// 					j++;
// 					break;
// 				}
// 				else if(a[i+1]==b[j+1]){
// 					i++;
// 					j++;
// 				}
// 			}
// 		}
//         else
//           i++;
//         continue;
//       }

//       if (a[i] > b[j])
//         j++;
// 	  else if(a[i]==b[j]){
// 			while(true && i<n && j<n){
// 				if(a[i+1]>b[j]){
// 					i++;
// 					break;
// 				}
// 				else if( b[j+1]>a[i]){
// 					j++;
// 					break;
// 				}
// 				else if(a[i+1]==b[j+1]){
// 					i++;
// 					j++;
// 				}
// 			}
// 		}
//       else
//         i++;
//     } else
//       break;
//   }
//   return ans;
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
    