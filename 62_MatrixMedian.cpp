#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
//very nice question to understand searching in space see video for better explaantion 
//and intuition
int cntlessthanmid(vector<int>&temp,int m){
    int low=0,high=temp.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(temp[mid]<=m)
        low=mid+1;
        else
        high=mid-1;
    }
        return low;
}
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    int l=0,h=1e9;
    while(l<=h){
        int mid=l+(h-l)/2;
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=cntlessthanmid(matrix[i],mid);
        }
        if(cnt<=(n*m)/2)
        l=mid+1;
        else
        h=mid-1;
    }
    return l;
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
    