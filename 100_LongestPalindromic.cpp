#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
//O(N^3) brute
//  bool isPalindrome(string s,int i,int j){
//        int n=s.size();
//        while(i<j){
//            if(s[i]!=s[j])
//            return false;
//            i++;
//            j--;
//        }
//        return true;
//    }
// string longestPalinSubstring(string s)
// {
//     // Write your code here.
//     int n=s.size();
//         int mx=0,st=0;
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                if(isPalindrome(s,i,j)){
//                    if(j-i+1>mx){

//                   mx=j-i+1;
//                   st=i;
//                    }
//                }
//             }
//         }
//        return s.substr(st,mx);

// }
//O(N^2) nice explanation given in LeetCode editorial
int expand(int i,int j,string s){
    int n=s.size();
    int left=i;
    int right=j;
    while(left>=0 && right<n && s[left]==s[right]){
       
        left--;
        right++;
    }
    // if(left<=right)
    return right-left-1;

}
string longestPalinSubstring(string s)
{
    // Write your code here.
    int n=s.size();
    vector<int>ans(2);
    for(int i=0;i<n;i++){
        int olen=expand(i,i,s);
        if(olen>ans[1]-ans[0]+1){
            int dist=olen/2;
            ans[0]=i-dist;
            ans[1]=i+dist;
        }
        if(i!=n-1){

        int elen=expand(i,i+1,s);
        if(elen>ans[1]-ans[0]+1){
            int dist=(elen/2)-1;
            ans[0]=i-dist;
            ans[1]=i+1+dist;
        }
        }
    }
    //keep in check for this ans[1]-ans[0]+1 as it was
    //giving wrong for just s.substr(ans[0],ans[1]-ans[0]+1)
    return s.substr(ans[0],ans[1]-ans[0]+1);

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
    