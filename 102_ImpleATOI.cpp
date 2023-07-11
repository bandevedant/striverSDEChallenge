#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    //still cant figure whats wrong in this
    string ans;
    int num=0;
    for(int i=0;i<str.size();i++){
    if(str[i]=='-' || str[i]=='0' || str[i]== '1' ||  str[i]=='2'||  str[i]=='3' ||  str[i]=='4' 
    ||  str[i]=='5' ||  str[i]=='6' ||  str[i]=='7' ||  str[i]=='8' ||  str[i]=='9')
    // num=(num*10)+(str[i]-'0');
    ans+=str[i];
    }
    // if(str[0]=='-')
    // return -num;

    // return num;

    return stoi(ans);


    
    
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
    