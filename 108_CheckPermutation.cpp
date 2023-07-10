#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;

    for(int i=0;i<str1.size();i++){
        mp1[str1[i]]++;
    }
    for(int i=0;i<str2.size();i++){
        mp2[str2[i]]++;
    }
    if(mp1==mp2)
    return true;

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
    