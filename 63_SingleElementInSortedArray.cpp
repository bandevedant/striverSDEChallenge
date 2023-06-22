#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
int singleNonDuplicate(vector<int>& nums)
{
	// Write your code here
	//brute
	// for(int i=0;i<arr.size();i+=2){
	// 	if(arr[i]!=arr[i+1])
	// 	return arr[i];
	// }
	//optimal
	int n=nums.size();
        int l=0,h=n-1,m;
        while(l<=h){
             m=l+(h-l)/2;
    if((m==0 || nums[m]!=nums[m-1]) && (m==n-1|| nums[m] !=nums[m+1])){
                return nums[m];
            }
            int temp;
            if(nums[m]==nums[m-1]){
                temp=m-1;
            }else
            temp=m;
            if(temp%2==0){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return 0;
	// return 0;
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
    