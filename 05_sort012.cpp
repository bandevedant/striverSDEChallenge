#include<bits/stdc++.h>
#define ll long long
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   //brute force
   // int cnt0=0,cnt1=0,cnt2=0;
   // for(int i=0;i<n;i++){
   //    if(arr[i]==0)
   //    cnt0++;
   //    else if(arr[i]==1)
   //    cnt1++;
   //    else if(arr[i]==2)
   //    cnt2++;
   // }
   // int k,j;
   // for(int i=0;i<cnt0;i++){
   //   arr[i]=0;
   //   k=i;
   // }
   // for(int i=k+1;i<cnt0+cnt1;i++){
   //   arr[i]=1;
   //   j=i;
   // }
   // for(int i=j+1;i<n;i++){
   //   arr[i]=2;
   // }

   //optimal soln  dutch national  flag algo
   int l=0,h=n-1;
   int ptr=0;
   while(ptr<=h){//untill ptr reach end

      if(arr[ptr]==0){
         swap(arr[l],arr[ptr]);
         l++;
         ptr++;
      }
      else if(arr[ptr]==1){
         ptr++;//assuming it is at correct position
      }
      else{
         swap(arr[ptr],arr[h]);
         h--;
      }
   }

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
    