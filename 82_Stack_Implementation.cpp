#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int *st;
    int topp;
    int n;
public:
    Stack(int capacity) {
        // Write your code here.
        topp=-1;
        n=capacity;
        st=new int[n];
    }

    void push(int num) {
        // Write your code here.
        st[++topp]=num;
    }

    int pop() {
        // Write your code here.
        if(topp!=-1)
         return st[topp--];
         else 
         return -1;
        

    }
    
    int top() {
        // Write your code here.
        if(topp<0)
        return -1;
        else
        return st[topp];
    }
    
    int isEmpty() {
        // Write your code here.
        if(topp==-1)
        return 1;
        else
        return 0;
    }
    
    int isFull() {
        // Write your code here.
         if(topp==n)
        return 1;
        else
        return 0;
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
    