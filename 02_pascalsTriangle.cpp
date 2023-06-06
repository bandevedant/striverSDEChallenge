#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<long long int>generateRow(long long int row){
       vector<long long int>ansRow;
       long long  res=1;
       ansRow.push_back(1);
       for(long long int i=1;i<row;i++){
           res=res*(row-i);
           res=res/i;
           ansRow.push_back(res);
       }
       return ansRow;
   }
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
   vector<vector<long long int>>ans;
        
        for(long long int i=1;i<=n;i++){
            ans.push_back(generateRow(i));
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
    