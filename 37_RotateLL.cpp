#include<bits/stdc++.h>
#define ll long long
using namespace std;
/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL || head->next==NULL)
     return head;
     Node*slow=head,*fast;
     Node*curr=head,*temp=NULL;
     int l=0;
     while(curr!=NULL){
          curr=curr->next;
          l++;
     }
     int p=l%k;
     if(p==0){
          return slow;
     }
     // Node*dummy=new Node(0);
     // dummy->next=head;
    while(p--){
         fast=fast->next;
    }
    while(fast->next!=NULL){
         slow=slow->next;
         fast=fast->next;
    }
    temp=slow->next;
    fast->next=head;
    slow->next=NULL;


     return temp;
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
    