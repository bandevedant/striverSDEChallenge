#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
 //learned it using  mergesort algo didn't knew the approach
 Node* mergeList(Node*slow,Node*fast){
    Node*temp=new Node(0);
    Node*res=temp;
    
    while(slow && fast){
        if(slow->data>=fast->data){
            temp->child=fast;
            temp=temp->child;
            fast=fast->child;
        }
        else{
            temp->child=slow;
            temp=temp->child;
            slow=slow->child;
        }
    }
    if(slow)
    temp->child=slow;
    else
    temp->child=fast;
    
    return res->child;
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL || head->next==NULL)
   return head;
   Node* root=head->next;
   head->next = NULL;
   root=flattenLinkedList(root);
   head=mergeList(head,root);
   
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
    