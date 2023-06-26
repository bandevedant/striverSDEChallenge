#include<bits/stdc++.h>
#define ll long long
using namespace std;
// #include <bits/stdc++.h> 
// // Implement class for minStack.
// class minStack
// {
// 	// Write your code here.
// 	//No idea ehaty is going here
// 		stack<int>st;
// 		int mn;
		
// 	public:
// 		// Constructor
// 		minStack(int size) 
// 		{ 
// 			// Write your code here.
			
// 		}
		
// 		// Function to add another element equal to num at the topp of stack.
// 		void push(int num)
// 		{
// 			// Write your code here.
// 			if(st.empty()){
// 				mn=num;
// 				st.push(num);
// 			}
// 			else{
// 				if(mn<=num){
// 					st.push(num);
// 				}
// 				int prev=num;
// 				num=2*num-mn;
// 				mn=prev;
// 				st.push(num);
// ;			}
			
// 		}
		
// 		// Function to remove the topp element of the stack.
// 		int pop()
// 		{
// 			// Write your code here.
// 			if(!st.empty()){
// 				int data=st.top();
// 				if(data>=mn){
// 					st.pop();
// 					return data;
// 				}
// 				else{
// 					int prev=mn;
// 					mn=2*mn-data;
// 					st.pop();
// 					return prev;
// 				}
// 			}
// 			return -1;
			
// 		}
		
// 		// Function to return the topp element of stack if it is present. Otherwise return -1.
// 		int top()
// 		{
// 			// Write your code here.
// 			if(!st.empty()){
// 				int data=st.top();
// 				if(data>=mn)
// 				return data;
// 				else
// 				return mn;
// 			}
// 			return -1;
			
// 		}
		
// 		// Function to return minimum element of stack if it is present. Otherwise return -1.
// 		int getMin()
// 		{
// 			// Write your code here.
// 			if(!st.empty()){
// 				return mn;
// 			}
// 			return -1;
// 		}
// };
#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	stack<int> s;
	int mini;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			if(s.empty()){
				mini = num;
				s.push(num);
			}
			else{
				if(mini <= num){
					s.push(num);
				}
				else{
					int prev = num;
					num = 2*num - mini;
					mini = prev;
					s.push(num);
				}
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(!s.empty()){
				int data = s.top();
				if(data >= mini){
					s.pop();
					return data;
				}
				else{
					int prev = mini;
					mini = 2*mini - data;
					s.pop();
					return prev;
				}
			}
			return -1;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(!s.empty()){
				int data = s.top();
				if(data >= mini) return data;
				else return mini;
			}
			return -1;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(!s.empty()){
				return mini;
			}
			return -1;
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
    