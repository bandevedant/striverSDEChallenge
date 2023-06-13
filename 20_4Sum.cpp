#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
#define ll long long

bool solve(vector<int> &arr, int target, int n) {
  for (int i = 0; i < n - 3; i++) {
    for (int j = i + 1; j < n - 2; j++) {
      int l = j + 1, h = n - 1;

      while (l < h) {
      int  sum =arr[i]+arr[l] + arr[j] + arr[h];
        if (sum == target) {
          return true;
        } else if (sum < target) {
          l++;
        } else {
          h--;
        }
      }
    }
  }
  return false;
}
// bool solve(vector<int>&arr, int target, int n){
//     int sum=0;
//  for(int i=0;i<n-3;i++){
//      int l=i+1,h=n-1;
//      while(l<h){
//      sum+=arr[i];
//          int mid=l+(h-l)/2;
//          sum+=arr[l]+arr[mid]+arr[h];
//          if(sum==target){
//              return true;
//          }
//          else if(sum<target){
//              l++;
//              sum=0;
//          }
//          else{
//              h--;
//              sum=0;
//          }
//      }

//  }
//  return false;
// }

string fourSum(vector<int> arr, int target, int n) {
  // Write your code here.
  sort(arr.begin(), arr.end());
  if (solve(arr, target, n))
    return "Yes";

  return "No";
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
    