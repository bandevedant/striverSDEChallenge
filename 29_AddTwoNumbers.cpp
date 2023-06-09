#include<bits/stdc++.h>
#define ll long long
using namespace std;
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2) {
  // Write your code here.
  
  // was trying finding solution in O(1) space
  //  int l1=0,l2=0;
  //  while(curr1!=NULL){
  //      l1++;
  //      curr1=curr1->next;
  //  }
  //  while(curr2!=NULL){
  //      l2++;
  //      curr2=curr2->next;
  //  }
  //  if(l2>l1){
  //      return addTwoNumbers(num2,num1);
  //  }
  //  curr1=num1,curr2=num2;
  //  int carry=0;

  // while(curr1!=NULL){
  //  curr1->data=curr1->data+curr2->data +carry;
  //    if(curr1->data>9){
  //        carry=(curr1->data)%10;
  //        curr1->data=(curr1->data)/10;
  //    }
  //    curr1=curr1->next;
  //    curr2=curr2->next;
  // }
  // if(carry==1){
  //     Node*newNode=new Node(carry);
  //     curr1->next=newNode;

  // }
  // return num1;

  if (num1 == NULL)
    return num2;
  if (num2 == NULL)
    return num1;
  Node *ans = new Node();
  Node *temp = ans;
  Node *curr1 = num1, *curr2 = num2;
  int carry = 0;
  while (curr1 || curr2 || carry) {
    int sum = 0;
    if (curr1) {
      sum += curr1->data;
      curr1 = curr1->next;
    }
    if (curr2) {
      sum += curr2->data;
      curr2 = curr2->next;
    }
    sum += carry;
    carry = sum / 10;
    Node *newNode = new Node(sum % 10);
    temp->next=newNode;
    temp=temp->next;
  }
  return ans->next;
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
    