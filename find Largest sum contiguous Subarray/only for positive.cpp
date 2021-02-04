
#include<bits/stdc++.h>
using namespace std;


int maxSubarraySum(int arr[], int n){
    
 int  max_so_far = 0;
  int   max_ending_here = 0;

 for(int i = 0; i<n; i++){
   max_ending_here = max_ending_here + arr[i];
   if(max_ending_here < 0){
            max_ending_here = 0;}
  if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
     
 }
return max_so_far;
}



int main()
{
    int n;
    
   
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    
}












