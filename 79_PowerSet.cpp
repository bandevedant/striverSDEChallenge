#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
void solve(int ind,vector<int>&v, vector<vector<int>>&ans,vector<int>&temp){
    if(ind==v.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(v[ind]);
    solve(ind+1,v,ans,temp);
    temp.pop_back();
    solve(ind+1,v,ans,temp);


}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>>ans;
    vector<int>temp;
    solve(0,v,ans,temp);
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
    