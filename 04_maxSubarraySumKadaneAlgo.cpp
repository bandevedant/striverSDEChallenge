#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    
    long long sum=0,maxSum=0;
    for(long long i=0;i<n;i++){
        sum+=arr[i];
        maxSum=max(maxSum,sum);
        if(sum<0)
        sum=0;
    }
    return maxSum;
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
    