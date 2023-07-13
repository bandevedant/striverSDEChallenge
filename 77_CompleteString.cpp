#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
struct Node{
    Node*links[26];
    bool flag=false;

    bool containKey(char ch){
        return (links[ch-'a']!=NULL);
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node*get(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }

};
class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root=new Node();
    }
    public:

    void insert(string word){
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i]))
            node->put(word[i],new Node());

            node=node->get(word[i]);
        }
        node->setEnd();
    }
    public:
    bool checkPrefix(string &word){
        
      Node*node=root;
      for(int i=0;i<word.size();i++){
          if(node->containKey(word[i])){
              node=node->get(word[i]);
              if(node->isEnd()==false)
              return false;
          }
          else
          return false;
      }
      return true;
    }
};
string completeString(int n, vector<string> &a){
    // Write your code here.
    Trie trie;
    for(auto it:a){
        trie.insert(it);
    }
    string ans="";
    for(auto it:a){
        if(trie.checkPrefix(it)){
            if(it.size()>ans.size())
            ans=it;
        else if(it.size()==ans.size() && it<ans)
        ans=it;
        }
        //as we have to return lexographically small string
    }
    if(ans=="")
    return "None";

    return ans;
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
    