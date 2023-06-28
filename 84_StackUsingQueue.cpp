#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
    queue<int>q1,q2;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q1.size();

    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(q1.empty())
        return true;

        return false;
    }

    void push(int element) {
        // Implement the push() function.
        while(!q1.empty()){
           q2.push(q1.front());
           q1.pop();
        }
        q1.push(element);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {
        // Implement the pop() function.
        if(q1.empty())
        return -1;
       int x= q1.front();
       q1.pop();
       return x;
    }

    int top() {
        // Implement the top() function.
         if(q1.empty())
        return -1;
       return q1.front();

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
    