#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
/*
        This is signature of helper function 'knows'.
        You should not implement it, or speculate about its implementation.

        bool knows(int A, int B);
        Function 'knows(A, B)' will returns "true" if the person having
        id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
  // Write your code here.
//partially correct passed 3 tc
//   bool flag = false;
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       if (i != j) {
//         if (!knows(i, j) && knows(j, i)) {
//           flag = true;
//           break;
//         }
//       }
//     }
// 	  if(flag)
// 	  return i;
	
//   }
//   return -1;
//brute passed 12/15 tc then tle
//   for (int i = 0; i < n; i++) {
//   bool flag = false,temp=false;
//     for (int j = 0; j < n; j++) {
//       if (i != j) {
//         if (knows(i, j)) {
//           flag = true;
//           break;
//         }
//       }
//     }
//     if (flag == false) {
//       for (int k = 0; k < n; k++) {
//         if (k != i) {
//           if (!knows(k, i)) {
//             temp = true;
//             break;
//           }
//         }
//       }
//     }
// 	  if(flag==false && temp==false)
// 	  return i;
	 

//   }
//   return -1;
//O(N)
stack<int>st;
for(int i=0;i<n;i++)
st.push(i);

while(st.size()>1){
	int p1=st.top();
	st.pop();
	int p2=st.top();
	st.pop();

	if(knows(p1,p2))
	st.push(p2);
	else
	st.push(p1);
}
int celeb=st.top();
for(int i=0;i<n;i++){
	if(i==celeb)
	continue;
	if(knows(celeb,i) || !knows(i,celeb))
	return -1;
}
return celeb;
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
    