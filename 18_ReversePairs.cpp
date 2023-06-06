#include<bits/stdc++.h>
#define ll long long
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr
    int cnt=0;
    //storing elements in the temporary array in a sorted manner//
    for (int i = low; i <= mid; i++) {
      while (right <= high && (long long)arr[i] > (long long)2 * arr[right])
        right++;

      cnt += (right - (mid + 1));
    }
	 left = low;      // starting index of left half of arr
     right = mid + 1; 
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
	return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt=0;

    if (low < high) {

    int mid = low+( high-low) / 2 ;
   cnt+= mergeSort(arr, low, mid);  // left half
   cnt+=  mergeSort(arr, mid + 1, high); // right half
    // cnt+= solve(arr,low,mid,high);
   cnt+= merge(arr, low, mid, high);  // merging sorted halves
    }

    return cnt;
}
int reversePairs(vector<int> &nums, int n){
	// Write your code here.
	//	
	        return mergeSort(nums,0,nums.size()-1);

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
    