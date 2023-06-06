#include<bits/stdc++.h>
#define ll long long
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    //good method to find repeated element through hashing
	// for(int i=0;i<n-1;i++){
	// 	arr[arr[i+1]%n]+=n;
	// }
	// int m,r;
	// for(int i=0;i<n;i++){
	// 	if(arr[i]>=2*n)
	//     r=i;
	// }
	
        // code here
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        int a=0,b=0;
        for(int i=1;i<=n;i++){
            if(hash[i]==2)
            a=i;
            else if(hash[i]==0)
            b=i;
        if(a!=0 && b!=0)
        break;
            
        }
        return {b,a};
    
	
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
    