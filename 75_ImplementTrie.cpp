#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

struct Node{
    Node*links[26];
    bool flag=false;
    bool checkLetter(char ch){
        return (links[ch-'a']!=NULL);
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node * get(char ch){
        return links[ch-'a'];
    }
    bool setFlag(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie {
private:
Node* root;
public:

    /** Initialize your data structure here. */
    Trie() {
      root=new Node();  
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.size();i++){
            //checks if given letter is present in links
            //if present creates new ont and move reference to it
            if(!node->checkLetter(word[i])){
                node->put(word[i],new Node());
            }
            //and then u just put the given letter in that node links and get reference 
            //for it
            //moves to reference node that 
           node= node->get(word[i]);
        }
        node->setFlag();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->checkLetter(word[i])){
                return false;
            }
           node= node->get(word[i]);
        }
        return node->isEnd();
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         Node* node=root;
        for(int i=0;i<prefix.size();i++){
            if(!node->checkLetter(prefix[i])){
                return false;
            }
           node= node->get(prefix[i]);
        }
        return true;
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
    