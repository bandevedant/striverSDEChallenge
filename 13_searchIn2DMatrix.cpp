#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(vector<int>temp,int m,int target){
   int l=0,h=m-1;
   while(l<=h){
       int mid=l+(h-l)/2;
       if(temp[mid]==target)
       return true;
       else if(temp[mid]>target)
       h=mid-1;
       else
       l=mid+1;

   }
   return false;
}
bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int n=mat.size();
        int m=mat[0].size();
        //naive
        //tc:O(n*m)
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(mat[i][j]==target)
        //         return true;
        //     }
        // }
        // return false;

        //optimal
        //tc: O(nlogm)
        for(int i=0;i<n;i++){
            if(check(mat[i],m,target))
            return true;
        }
    return false;
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
    