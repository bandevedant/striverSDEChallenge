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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    //the logic is clear we are making taking two pointers prev and curr
    //keeping track of next node using additional pointer
    //and then reversing the link 
    LinkedListNode<int>* curr=head,*prev=NULL;
    while(curr!=NULL){
        LinkedListNode<int>*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;

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
    