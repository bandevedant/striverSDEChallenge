#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
struct Node{
    Node*links[26];
    int cntendwith=0;
    int cntPrefix=0;

    bool containKey(char ch){
        return (links[ch-'a']!=NULL);
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node*get(char ch){
        return links[ch-'a'];
    }
    void increaseEnd(){
        cntendwith++;
    }
    void increasePrefix(){
        cntPrefix++;
    }
    void deleteEnd(){
        cntendwith--;
    }
    void reducePrefix(){
        cntPrefix--;
    }
    int getEndWith(){
        return cntendwith;
    }
    int getPrefix(){
        return cntPrefix;
    }
};
class Trie{
    private:
    Node*root;
    public:

    Trie(){
        // Write your code here.
        root=new Node();
    }

    void insert(string &word){
        // Write your code here.
        Node*node=root;
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
            node->increasePrefix();
        }
        node->increaseEnd();

    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        Node*node=root;
        for(int i=0;i<word.size();i++){
            if(node->containKey(word[i])){
               node= node->get(word[i]);
            }
            else
            return 0;
        }
       return  node->getEndWith();

    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        Node*node=root;
        for(int i=0;i<word.size();i++){
             if(node->containKey(word[i])){
                node=node->get(word[i]);
            }
            else
            return 0;
        }
        return node->getPrefix();
    }

    void erase(string &word){
        // Write your code here.
         Node*node=root;
        for(int i=0;i<word.size();i++){
            if(node->containKey(word[i])){
               node= node->get(word[i]);
               node->reducePrefix();
            }
            else
            return ;
        }
       return  node->deleteEnd();

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
    