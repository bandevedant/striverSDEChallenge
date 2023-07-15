#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
using namespace std;
//wow solution for this attempt
class Temp {
public:
    int height;
    int leftIndex;
    int rightIndex;

    Temp(int h, int li, int ri) {
        height = h;
        leftIndex = li;
        rightIndex = ri;
    }
};

int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
    int maxHeight = 0;
    queue<Temp> q;

    if(N >= 1) {
        Temp temp(0, 0, N - 1);
        q.push(temp);
    }
    unordered_map<int, int> map;
    for(int i = 0;i < N; i++) {
        map[inorder[i]] = i;
    }

    for(int i = 0;i < N; i++) {
        Temp temp = q.front();
        q.pop();

        maxHeight = max(temp.height, maxHeight);

        int li = temp.leftIndex;
        int ri = temp.rightIndex;
        int rootIndex;

        rootIndex = map[levelOrder[i]];

        if(rootIndex - 1 >= li) {
            Temp leftSubTree(temp.height + 1, li, rootIndex - 1);
            q.push(leftSubTree);
        }

        if(rootIndex + 1 <= ri) {
            Temp rightSubTree(temp.height + 1, rootIndex + 1, ri);
            q.push(rightSubTree);
        }
    }

    return maxHeight;
}
// #include <bits/stdc++.h> 
// int search(vector<int>&arr,int val,int start,int end){

// 	for(int i=start;i<=end;i++){
// 		if(arr[i]==val){
// 			return i;
// 		}
// 	}
// 	return -1;
// }
// int solve(vector<int>& inorder, vector<int>& levelOrder, 
//                 int N,int start,int end,int &height){

//     if(start>end)
// 	return 0;
// 	//as we know first element of level order traversal is root of tree
// 	int ind=search(inorder,levelOrder[0],0,N);
// 	if(ind==-1)
// 	return 0;
// 	//know we know left part of this ind is leftsubtree and right part is rightsubtree
// 	int leftCnt=ind-start;
// 	int rightCnt=end-ind;

// 	vector<int>leftSubTree(leftCnt);
// 	vector<int>rightSubTree(rightCnt);
//     int lh=0,rh=0;
// 	int k=0;
// 	//take values from levelorder traversal for leftsubtree
// 	for(int i=0;i<N;i++){
// 		for(int j=start;j<ind;j++){
// 			if(inorder[j]==levelOrder[i]){
// 				leftSubTree[k++]=levelOrder[i];
// 				break;
// 			}

// 		}
// 	}
// 	k=0;
// 	//take values from levelorder traversal for rightsubtree
// 	for(int i=0;i<N;i++){
// 		for(int j=start;j<ind;j++){
// 			if(inorder[j]==levelOrder[i]){
// 				rightSubTree[k++]=levelOrder[i];
// 				break;
// 			}

// 		}
// 	}
// 	if(leftCnt>0)
// 	lh=solve(inorder,leftSubTree,leftCnt,start,ind-1,height);
// 	if(rightCnt>0)
// 	rh=solve(inorder,rightSubTree,rightCnt,ind+1,end,height);

// 	height=1+max(lh,rh);
    
// 	leftSubTree.clear();
// 	rightSubTree.clear();
	
// 	return height;	

// }
// int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
// 	// Write your code here.
// 	int start=0,end=N-1;
// 	int height=0;
// 	solve(inorder,levelOrder,N,start,end,height);

// 	return height;
// 	//tle
// 	// int h=0;
// 	// int ind=0;
// 	// int temp=N;
// 	// bool flag=false;
// 	// while(temp!=1){
// 	// 	for(int i=0;i<temp;i++){
// 	// 		if(levelOrder[ind]==inorder[i]){
// 	// 			ind++;
// 	// 			h++;
// 	// 			if(flag=false){
// 	// 			temp=max(N-1-i,i);
// 	// 			flag=true;
// 	// 			}
// 	// 			else{
// 	// 				temp=min(N-1-i,i);
// 	// 			}
// 	// 			break;
// 	// 		}
// 	// 	}
// 	// }
// 	// return h;
// }
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
    