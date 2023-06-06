#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include <bits/stdc++.h> 
//approach is similar to merge sort algorithm we recursively divide arrayb in two parts and cnt the sum of number 
//of times we do inversion  cnt+=mid -i as we merge two array  mid-i gives no. of time us need to swap
//TC : O(nlogn) 
long long merge(long long *arr,long long temp[],long long left,long long mid,long long right){
    long long i=left;
    long long j=mid;
    long long k=left;
    long long cnt=0;
    while((i<=mid-1) && (j<=right) ){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
            cnt+=(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=right){
        temp[k]=arr[j];
            k++;
            j++;
    }
    for(long long i=left;i<=right;i++){
        arr[i]=temp[i];
    }
  return cnt;
}
long long mergeSort(long long *arr,long long temp[],long long left,long long right){
   
    long long cnt=0;
    long long mid;
    if(left<right){

        mid=left+(right-left)/2;
        cnt+=mergeSort(arr,temp,left,mid);
        cnt+=mergeSort(arr,temp,mid+1,right);
        cnt+=merge(arr,temp,left,mid+1,right);
    }
    return cnt;
}

long long getInversions(long long *arr, long long n){
    // Write your code here.
    long long temp[n];
    return mergeSort(arr,temp,0,n-1);
}


int main(){
  
 srand(time(NULL));
ios::sync_with_stdio(false);
cin.tie(0);
 
long long t;
cin>>t;
while(t--){

}
  return 0;
}
    