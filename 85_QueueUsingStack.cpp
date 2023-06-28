#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
class Queue {
private:
    stack<int> first;
    stack<int> second;
    
public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        first.push(val);
    }

    int deQueue() {
        if(!second.empty()){
            int data = second.top();
            second.pop();
            return data;
        }
        else{
            if(first.empty()){
                return -1;
            }
            else{
                while(!first.empty()){
                    second.push(first.top());
                    first.pop();
                }
                int data = second.top();
                second.pop();
                return data;
            }
        }
    }

    int peek() {
        if(!second.empty()){
            return second.top();;
        }
        else{
            if(first.empty()){
                return -1;
            }
            else{
                while(!first.empty()){
                    second.push(first.top());
                    first.pop();
                }
                return second.top();;
            }
        }
    }

    bool isEmpty() {
        return (first.empty() && second.empty());
    }
};
// class Queue {
//     // Define the data members(if any) here.
//     // private:
//     stack<int>s1;
//     stack<int>s2;
    
//     public:
//     Queue() {
//         // Initialize your data structure here.
//     }

//     void enQueue(int val) {
//         // Implement the enqueue() function.
//         s1.push(val);
//     }

//     int deQueue() {
//         // Implement the dequeue() function.
//         if(!s2.empty())
//         return -1;

//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         int x=s2.top();
//         s2.pop();
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//         return x;
//     }

//     int peek() {
//         // Implement the peek() function here.
//          if(s1.empty())
//         return -1;

//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         int x=s2.top();
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//         return x;


//     }

//     bool isEmpty() {
//         // Implement the isEmpty() function here.
//          if(s1.empty() && s2.empty())
//         return true;

//         return false;

//     }
// };
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
    