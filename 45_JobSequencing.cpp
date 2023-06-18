#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
bool cmp(vector<int> a, vector<int> b) {
  return a[1] > b[1] ;//|| (a[1] == b[1] && a[0] >= b[0]);
}
int jobScheduling(vector<vector<int>> &jobs) {
  
  
  // Write your code here
  sort(jobs.begin(), jobs.end(), cmp);
  int mx = jobs[0][0];
  int n = jobs.size();


  for (int i = 1; i < n; i++) {
    mx = max(mx, jobs[i][0]);
  }
  int slot[mx + 1];

  for (int i = 0; i <= mx; i++)
    slot[i] = -1;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = jobs[i][0]; j > 0; j--) {
      if (slot[j] == -1) {
        slot[j] = i;
        sum += jobs[i][1];
        break;
      }
    }
  }

  return sum;
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
    