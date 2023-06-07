#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<int> majorityElementII(vector<int> &arr) {
  // Write your code here.
  int n = arr.size();
  //learned this boyer moore voting algo
  //my approcah was not efficient used hash map
  int el1 = INT_MIN, el2 = INT_MIN;
  int cnt1 = 0, cnt2 = 0;

  for (int i = 0; i < n; i++) {
    if (cnt1 == 0 && el2 != arr[i]) {
      cnt1 = 1;
      el1 = arr[i];
    } else if (cnt2 == 0 && el1 != arr[i]) {
      cnt2 = 1;
      el2 = arr[i];
    } else if (el1 == arr[i])
      cnt1++;
    else if (el2 == arr[i])
      cnt2++;
    else {
      cnt1--;
      cnt2--;
    }
  }
    vector<int> ans;
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
      if (el1 == arr[i])
        cnt1++;
      if (el2 == arr[i])
        cnt2++;
    }
    int mn = int(n / 3) + 1;
    if (cnt1 >= mn)
      ans.push_back(el1);
    if (cnt2 >= mn)
      ans.push_back(el2);

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
    