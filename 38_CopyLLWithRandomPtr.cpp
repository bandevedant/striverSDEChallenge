#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    LinkedListNode<int> *temp=head,*curr=head;
    unordered_map<LinkedListNode<int> *,LinkedListNode<int> *>mp;
    while(temp!=NULL){
        LinkedListNode<int> *newNode=new LinkedListNode<int> (temp->data);
        mp[temp]=newNode;
        temp=temp->next;
    }
    while(curr!=NULL){
        LinkedListNode<int> *ptr=mp[curr];
        ptr->next=curr->next!=NULL ? mp[curr->next] : NULL;
        ptr->random=curr->random!=NULL ? mp[curr->random] : NULL;
        curr=curr->next;
    }
  return mp[head];
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
    