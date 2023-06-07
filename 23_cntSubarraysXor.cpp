#include<bits/stdc++.h>
#define ll long long
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    //brute failed for 1 tc O(N^2) auxilaary space O(N) as we are clearing vector
    //first I stored xor upto each elemnet in the subarray vector temp
    //and checked the back value of vector then cnt
    // int n=arr.size();
    // int cnt=0;
    // for(int i=0;i<n;i++){
    // vector<int>temp;
    // temp.push_back(arr[i]);
    // if(arr[i]==x)
    // cnt++;    
    //     for(int j=i+1;j<n;j++){
    //        if((temp.back()^arr[j])==x)
    //        cnt++;
    //        temp.push_back((temp.back()^arr[j]));
    //     }
    //     temp.clear();
    // }
    // return cnt;

    //optimal
    //if we have xor of a part =x=x^temp^temp
    //we will keep track of cnt of mp[temp]++

    int n=arr.size();
    int cnt=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    int temp=0;
    for(int i=0;i<n;i++){
        temp=temp^arr[i];
        cnt+=mp[temp^x];
        mp[temp]++;
    }
    return cnt;
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
    