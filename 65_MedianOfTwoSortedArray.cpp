#include<bits/stdc++.h>
#define ll long long
using namespace std;
double median(vector<int> &a, vector<int> &b) {
  // Write your code here.
  // learn from striver
  if (a.size() > b.size())
    return median(b, a);

  int n1 = a.size();
  int n2 = b.size();

  int l = 0, h = n1;
  while (l <= h) {
    int i1 = l + (h - l) / 2;
    int i2 = (n1 + n2 + 1) / 2 - i1;
    int mn1 = (i1 == 0) ? INT_MIN : a[i1 - 1];
    int mx1 = (i1 == n1) ? INT_MAX : a[i1];
    int mn2 = (i2 == 0) ? INT_MIN : b[i2 - 1];
    int mx2 = (i2 == n2) ? INT_MAX : b[i2];

    if (mn1 <= mx2 && mn2 <= mx1) {
      if ((n1 + n2) % 2 == 0) {
        return (double)(max(mn1, mn2) + min(mx1, mx2)) / 2.0;
      } else {
        return (double)max(mn1, mn2);
      }
    }

    else if (mn1 > mx2) {
      h = i1 - 1;
    } else {
      l = i1 + 1;
    }
  }
  return 0.0;
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
    