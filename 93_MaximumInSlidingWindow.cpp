#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    deque<int>dq;
    vector<int>ans;
    int n=nums.size();
    for(int i=0;i<n;i++){

        if(!dq.empty() && dq.front()==i-k) 
        dq.pop_front();
        while(!dq.empty() && nums[dq.back()]<=nums[i])
        dq.pop_back();

        dq.push_back(i);
        if(i>=k-1){
            ans.push_back(nums[dq.front()]);
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
    