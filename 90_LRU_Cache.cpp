#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
class LRUCache
{
    public:
    class Node{
        public:
            int key;
            int val;
            Node*next;
            Node*prev;
                Node(int newKey,int newVal){
                    key=newKey;
                    val=newVal;
                }
    };
    Node*head=new Node(-1,-1);
    Node*tail=new Node(-1,-1);
    int size;
    unordered_map<int,Node*>mp;
    
// public:
    LRUCache(int capacity)
    {
        // Write your code here
        size=capacity;
        head->next=tail;
        tail->prev=head;
    }
void addNode(Node* newNode){
    Node*temp=head->next;
    newNode->next=temp;
    newNode->prev=head;
    head->next=newNode;
    temp->prev=newNode; 
}
void deleteNode(Node* delNode){
    Node*delprev=delNode->prev;
    Node*delnext=delNode->next;
    delprev->next=delnext;
    delnext->prev=delprev;
    
}
    int get(int key)
    {
        // Write your code here
        if(mp.find(key)!=mp.end()){
            Node*resNode=mp[key];
            int res=resNode->val;
            mp.erase(key);
            deleteNode(resNode);
            addNode(resNode);
            mp[key]=head->next;
            return res;
        }
            return -1;
        
    }

    void put(int key, int value)
    {
        // Write your code here
        if(mp.find(key)!=mp.end()){
            Node* existingNode=mp[key];
            mp.erase(key);
            deleteNode(existingNode);
        }
        if(mp.size()==size){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
            
        }
        addNode(new Node(key,value));
        mp[key]=head->next;
    }
};

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
    