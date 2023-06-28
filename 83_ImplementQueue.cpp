#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
class Queue {
    // private:
public:
    int size;
    int *arr;
    int fro;
    int rear;
    Queue() {
        // Implement the Constructor
        size=10001;
        arr=new int[size];
        fro=0;
        rear=0;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(fro==rear)
        return true;
        return false;

    }

    void enqueue(int data) {
        // Implement the enqueue() function
        // if(rear!=size)
        arr[rear]=data;
        rear=(rear+1)%size;

    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty())
        return -1;
        else{
           int temp=arr[fro++]; 
           if(fro==rear){
               fro=0;
               rear=0;
           }
        return temp;
        }
    }

    int front() {
        // Implement the front() function
        if(isEmpty())
        return -1;
        return arr[fro];
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
    