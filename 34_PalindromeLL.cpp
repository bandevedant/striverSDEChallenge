#include<bits/stdc++.h>
#define ll long long
using namespace std;

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
LinkedListNode<int>*reverse(LinkedListNode<int>*head){
    LinkedListNode<int>*prev=NULL,*curr=head;
    while(curr!=NULL){
        LinkedListNode<int>*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL)
    return true;
    LinkedListNode<int>*slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

    }
     LinkedListNode<int>*prev=slow,*curr=slow->next;
    slow->next=NULL;
    while(curr!=NULL){
        LinkedListNode<int>*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    slow=head;
    fast=prev;
    while(fast){
        if(slow->data!=fast->data)
        return false;

        slow=slow->next;
        fast=fast->next;
    }
    return true;

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
    