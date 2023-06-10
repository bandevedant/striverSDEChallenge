#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    //we can copy the data of next node of the pointed node  to be  deleted
   
    LinkedListNode<int>*slow= node->next;
   
    node->data=slow->data;
    node->next=slow->next;
    delete(slow);

    
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
    