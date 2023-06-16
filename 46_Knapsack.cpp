#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
//descending order of ratio
bool cmp(pair<int,int>&a,pair<int,int>&b){
    return ((double)a.second/a.first) > ((double)b.second/b.first);

}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    double ans=0;
    sort(items.begin(),items.end(),cmp);

    int wt=0;
    for(auto it:items){
        if(wt+it.first<=w){
            wt+=it.first;
            ans+=it.second;
        }
        else{
            ans+=double((double)it.second*(w-wt))/it.first;
            break;
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
    