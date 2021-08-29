
//Brute force approach - O n^2
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//  int n;
//  cin>>n;
//  int a[n];
//  for(int i=0;i<n;i++){
//      cin>>a[i];
//  }
 
//  int b[n];
//  b[0]=a[0];
 
//  for(int i=1;i<n;i++){
//      b[i]=b[i-1]+a[i];
//  }
 
//  int ans= INT_MIN;
 
//  for(int i=0;i<n;i++){
//      int sum=0;
//      for(int j=0;j<i;j++){
//          sum=b[i]-b[j];
//          ans=max(ans,sum);
//      }
//  }

// cout<<ans;
 
// }


// Kadane's algorithm


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//  int n;
//  cin>>n;
//  int a[n];
//  for(int i=0;i<n;i++){
//      cin>>a[i];
//  }
 
//  int currSum=0;
//  int sum=INT_MIN;
 
//  for(int i=0;i<n;i++){
//      currSum+=a[i];

//here the order matters, first we calculate max of sum and curr sum, then we check if currsum <0
// if this order is reversed it will create problems in arrays having all negative integers 

//      if(currSum>sum){
//          sum=currSum;
//      }
//      if(currSum<0){
//          currSum=0;
//      }
//  }
 
//  cout<<sum;
 
// }


//Circular subarray


#include <bits/stdc++.h>
using namespace std;


int kadane(int a[],int n){
    int currSum=0;
    int maxSum=INT_MIN;
    
    for(int i=0;i<n;i++){
        currSum+=a[i];
        if(currSum>maxSum){
            maxSum=currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}

int main() {
 int n;
 cin>>n;
 int a[n];
 int b[n];

 for(int i=0;i<n;i++){
     cin>>a[i];
     b[i]=-a[i];
 }
 
 //Max sum = sum of all elements of array - sum of non contributing elements
 // Sum of non contributing elements is received by applying kadane's algo
//  in an array b which has reverse sign of elements of array a
 

 int wrapSum;
 int nonWrapSum;
 
 int non_contri_element= kadane(b,n);
 
 nonWrapSum=kadane(a,n);
 
 int totalSumOfArray=0;
  for (int i=0;i<n;i++){
      totalSumOfArray +=a[i];
  }
  
  wrapSum= totalSumOfArray + non_contri_element;
  
  
  //if statement is here to take care of array having all negative numbers
  if(nonWrapSum<0){
      cout<<nonWrapSum;
  }
  else{
  cout<<max(wrapSum,nonWrapSum);
  }
}