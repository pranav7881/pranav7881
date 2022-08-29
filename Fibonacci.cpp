#include<iostream>
using namespace std;

 int main()
 {
    int n,curr;
cin>>n;
 int prev1=1;
 int prev2=0;

 if(n==0)
 return prev2;
                                 //Time Complexity=O(n)
 for(int i=2;i<=n;i++)
 {
    curr=prev1+prev2;
    curr=prev1;
    prev1=prev2;
    prev2=curr;
 }
 cout<<prev1<<endl;
return 0;
 }