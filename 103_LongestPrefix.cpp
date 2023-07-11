#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include<bits/stdc++.h>

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    sort(arr.begin(),arr.end());
    int i=0;
    string ans="";
    while(i<min(arr[0].size(),arr[n-1].size())){
        if(arr[0][i]==arr[n-1][i])
        ans+=arr[0][i];
        else
        break;
        i++;
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
    