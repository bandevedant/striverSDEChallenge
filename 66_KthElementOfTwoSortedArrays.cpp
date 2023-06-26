#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    //O(n)
//    int cnt=0;
//    int r1=0,r2=0;
//    while(r1<m && r2<n){
//        if(row1[r1]<=row2[r2]){
//            cnt++;
//            if(cnt==k){
//                return row1[r1];
//            }
//            r1++;
//        }
//        else if(row1[r1]>row2[r2]){
//            cnt++;
//            if(cnt==k){
//                return row2[r2];
//            }
//            r2++;
//        }
//    }
//    while(r1<m){
//        cnt++;
//        if(cnt==k){
//            return row1[r1];
//        }
//        r1++;
//    }
//    while(r2<n){
//        cnt++;
//        if(cnt==k){
//            return row2[r2];
//        }
//        r2++;
//    }
//O(logN)
     if(m > n) {

        return ninjaAndLadoos(row2, row1, n, m, k); 

    }
       
            int l=max(0,k-n),h=min(m,k);//it should be n1-1
            while(l<=h){
            int i1=l+(h-l)/2;
            int i2=k-i1;//algo so as n1 is greater to adjust we added +1 there
                int min1=(i1==0) ? INT_MIN : row1[i1-1];
                int min2=(i2==0) ? INT_MIN : row2[i2-1];
                int max1=(i1==m) ? INT_MAX : row1[i1];
                int max2=(i2==n) ? INT_MAX : row2[i2];
                
                //left1<=right2
                if(min1<=max2 && min2<=max1){
                         return max(min1,min2);
                }
                else if(min1>max2)
                h=i1-1;
                else
                l=i1+1;
            }
        return 0;
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
    