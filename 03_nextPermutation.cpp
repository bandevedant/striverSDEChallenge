#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here. 
    int temp=-1;
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            temp=i;
            break;
        }
    }
    if(temp!=-1){
        for(int i=n-1;i>=0;i--){
            if(permutation[i]>permutation[temp]){
                swap(permutation[i],permutation[temp]);
                break;
            }
        }
        reverse(permutation.begin()+temp+1,permutation.end());
        return permutation;
    }
        reverse(permutation.begin(),permutation.end());
        return permutation;

    
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
    