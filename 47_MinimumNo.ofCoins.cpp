#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int coins[]={1,2,5,10,20,50,100,500,1000};
    int mnc=0;
    int k;

    for(int i=8;i>=0;i--){
        k=amount/coins[i];
        mnc+=k;
        amount-=(k*coins[i]);
        if(amount<=0)
        break;
    }
    return mnc;
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
    