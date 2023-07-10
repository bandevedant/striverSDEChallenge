#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
int compareVersions(string a, string b) 
{
    // Write your code here
    int i=0,j=0;
    int n=a.size();
    int m=b.size();
    while(i<n || j<m){
       long long x=0,y=0;
       while(i<n && a[i]!='.')
       x=x*10+(a[i++]-'0');
       while(j<m && b[j]!='.')
       y=y*10+(b[j++]-'0');
       if(x>y)
       return 1;
       else if(x<y)
       return -1;
       i++;
       j++;
    }
     return 0;
    
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
    