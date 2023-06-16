#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
bool isValid(int matrix[9][9],int k,int i,int j){
    for(int p=0;p<9;p++){
        if(matrix[p][j]==k)
        return false;
        if(matrix[i][p]==k)
        return false;
        if(matrix[3*(i/3)+p/3][3*(j/3)+p%3]==k)
           return false;

    }
    return true;
}


bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){

            if(matrix[i][j]==0){

                for(int k=1;k<=9;k++){

                    if(isValid(matrix,k,i,j)){

                       matrix[i][j]=k;
                       if(isItSudoku(matrix))
                       return true;
                       
                       matrix[i][j]=0;
                    }
                    
                }
                return false;
            }
        }
    }
    return true;
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
    