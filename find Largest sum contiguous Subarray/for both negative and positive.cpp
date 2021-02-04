
#include<bits/stdc++.h>
using namespace std;


int maxSubarraySum(int arr[], int n){
    
   int  max_so_far = arr[0];
  int   curr_max = arr[0];

 for(int i = 0; i<n; i++){
  curr_max= max(curr_max+arr[i],arr[i]);
  max_so_far=max(curr_max,max_so_far);
     
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
