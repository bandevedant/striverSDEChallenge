#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
class Kthlargest {
    private:
    int t;
    priority_queue<int,vector<int>,greater<int>>pq;
    void hp(vector<int> &arr,int t){
        for(int i=0;i<arr.size();i++){
         pq.push(arr[i]);
         if(pq.size()>t)
         pq.pop();

        }
    }
public:
    Kthlargest(int k, vector<int> &arr) {
       // Write your code here.
        t=k;
       hp(arr,k);
    }

    void add(int num) {
        // Write your code here.
       pq.push(num);
       if(pq.size()>t)
       pq.pop();

    }

    int getKthLargest() {
       // Write your code here.
      
       return pq.top();
    }

};
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
    