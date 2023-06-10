#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node* reverse(Node*head){
	Node*prev=NULL,*curr=head;
	while(curr!=NULL){
		Node*temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	return prev;
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	//learned this logic 
     //man nahi solve karne ka
	Node*temp=head;
	int len=0;
	while(temp!=NULL){
		temp=temp->next;
		len++;
	}
	Node*dummy=new Node(0);
	dummy->next=head;
	Node*slow=dummy;
	Node*curr;
	Node*fast;
	for(int i=0;i<n;i++){
		 if(b[i]<=len){
         if(b[i]==0)
		 continue;

			while(len>=b[i]){
				curr=slow->next;
				fast=curr->next;
				int t=b[i]-1;
				while(t--){
					curr->next=fast->next;
					fast->next=slow->next;
					slow->next=fast;
					fast=fast->next;
				}
				slow=curr;
			len-=b[i];
			}
		 }
		else{
			slow->next=reverse(slow->next);
			len=0;
		}
	}
	return dummy->next;
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
    