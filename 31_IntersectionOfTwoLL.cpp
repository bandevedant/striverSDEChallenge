#include<bits/stdc++.h>
#define ll long long
using namespace std;
/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    //brtue force
    if(firstHead==secondHead)
    return firstHead;

    while(secondHead!=NULL){
        Node*curr=firstHead;
        while(curr!=NULL){
             if(curr==secondHead)
             return curr;
            curr=curr->next;
        }
        secondHead=secondHead->next;
    }
    // return 0;
    
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
    