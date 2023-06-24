#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 


bool check(char a,char b){
if ((a == '(' && b == ')') || (a == '[' && b == ']') ||
      (a == '{' && b == '}'))
return true;
else
false;
}
bool isValidParenthesis(string str) {
  // Write your code here.
  stack<int> st;
  for(auto it:str){
    if (it == '(' || it == '[' || it == '{')
        st.push(it);
    else {
      if (st.empty() || !check(st.top(), it))
        return false;
      st.pop();
    }
  }
    return st.empty();
    

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
    