#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    //as we know kth node from behind is n-k+1 node from front just maintain two ptrs 
    //with k distance between them i.e fast and slow...
    //start from head and take fast k nodes ahead
    //after traversing fast to end slow comes at node to delete
    //since slow is at point of deletion we want a ref to node before it  so maintain 
    //a temp ptr behind slow while moving in loop
    //but there are some edge cases to keep in mind ...if temp==NULL 
    //i.e slow is the first node and is to be delete...so if temp==NULL return head->next
    if(head==NULL || K==0)
    return NULL;
    
    Node*fast=head,*slow=head,*temp=NULL;
    while(K--){
        fast=fast->next;
    }
    while(fast!=NULL){
        temp=slow;
        slow=slow->next;
        fast=fast->next;
    }
    if(temp==NULL) return head->next;//edge case to keep in mind 
    temp->next=slow->next;

  return head;

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
    