#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 

int search(int* arr, int n, int key) {
    // Write your code here.
    //brute;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==key)
    //     return i;
    // }
    // return -1;
    //binary search
    // sort(arr,arr+n);without using sort
    int l=0,h=n-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(arr[m]==key)
        return m;
        if(arr[l]<=arr[m]){
            if(key>=arr[l] && key<arr[m])
            h=m-1;
            else
            l=m+1;
        }
        else{
            if(key>arr[m] && key<=arr[h])
            l=m+1;
            else
            h=m-1;
        }
    }
    return -1;
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
    