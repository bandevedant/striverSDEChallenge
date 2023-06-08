#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int>* merge(Node<int>* slow, Node<int>* fast){
    Node<int>*temp=new Node<int>(0);
    Node<int>*res=temp;

    while(slow && fast){
        if(slow->data<fast->data){
            temp->next=slow;
            temp=temp->next;
            slow=slow->next;
        }
        else{
            temp->next=fast;
            temp=temp->next;
            fast=fast->next;
        }
    }
    if(slow){
        temp->next=slow;
        temp=temp->next;
        slow=slow->next;
    }
    if(fast){
        temp->next=fast;
        temp=temp->next;
        fast=fast->next;
    }
    return res->next;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL )
    return second;
    if(second==NULL)
    return first;
    return merge(first,second);
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
    