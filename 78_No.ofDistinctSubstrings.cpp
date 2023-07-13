#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
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

int distinctSubstring(string &word) {
    //  Write your code here.
    //naive willbe done using two for loops and set
    //O(n^2)
  int cnt=0;
Node* root=new Node();
    for(int i=0;i<word.size();i++){
        Node*node=root;
        for(int j=i;j<word.size();j++){

            if(!node->checkLetter(word[j])){
                cnt++;
                node->put(word[j],new Node());
            }
            node= node->get(word[j]);
        }
    node->setFlag();
    }
    
  return cnt;

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
    