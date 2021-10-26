// array sum  - O(n)
// #include <bits/stdc++.h>
// using namespace std;
// //n is length of array
// int arraySum(int a[],int n){
//     if(n==0) {
//         return 0;
//     }
//     return arraySum(a,n-1)+a[n-1];
// }

// int main() {
//     int a[]= {5,4,3,1,2,6};
//     cout<<arraySum(a,6);
// }




// factorial - O(n)

// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//    if(n==0) return 1;
//    return factorial(n-1)*n;
// }

// int main() {
//     cout<<factorial(5);
// }




// Sum of digits of a number
// #include <iostream>
// using namespace std;

// int digitsum(int n){
//     int sum=0;
//     while(n>0){
//       sum+=n%10;
//       n=n/10;
//     }
//     return sum;
// }

// int digitsum(int n){
//   if(n==0) return 0;
//   return digitsum(n/10)+n%10;   //n%10 gives last digit
// }

// int main() {
// 	cout<<digitsum(1234);
// }

// T- O(logn to base 10)


// print decreasing increasing number

// #include <iostream>
// using namespace std;

// void print_dec_inc(int n){
//    if(n==0) return;
//      cout<<n<<endl;
//     print_dec_inc(n-1);
//     cout<<n<<endl;
// }

// int main() {
// print_dec_inc(5);
// }



// nth power of x

// #include <iostream>
// using namespace std;

// int calcPower(int x, int n){
//     if(n==0) return 1;
//     return calcPower(x,n-1)*x;
// }

// int main() {
// 	int a,b;
// 	cin>>a>>b;
// 	cout<<calcPower(a,b);
// }


//O(logn) approach for calculating nth power of x
// #include <iostream>
// using namespace std;

// int calcPower(int x, int n){
     
//      if(n==0) return 1;
    
//      int ans= calcPower(x,n/2) * calcPower(x,n/2);

//      if(n%2==1){ans=ans*x;}

//      return ans;

// }

// int main(){
//     cout<<calcPower(5,3)<<endl;
//     cout<<calcPower(5,2);
//     return 0;
// }




//zigzag pattern

// #include <iostream>
// using namespace std;


// void print(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     print(n-1);
//     cout<<n<<" ";
//     print(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     print(3);
//     return 0;
// }




//Tower of Hanoi

// #include <iostream>
// using namespace std;

// void hanoi(int n,int x,int y,int z){
// if(n==0) return;
// hanoi(n-1,x,z,y);
// cout<<n<<"("<<x<<"-"<<y<<")";
// hanoi(n-1,z,y,x);
// }
// int main(){
//     // hanoi(3,10,11,12);
//     int n;
//     int x,y,z;
//     cin>>n>>x>>y>>z;
//     hanoi(n,x,y,z);
// }



//display array elements
// #include <iostream>
// using namespace std;
// void display(int a[], int n){
//   if(n==0) return;
//   display(a,n-1);
//   cout<<a[n-1]<<" ";
// }
// int main(){
//     int arr[]={5,4,1,2,3};
//     display(arr,5);
// }
//iteration provides better solution then recursion here.


//print reverse array from end till index mentioned
// #include <iostream>
// using namespace std;
// void displayRev(int a[],int idx, int n){
//   if(idx==n) return;
//   displayRev(a,idx+1,5);
//   cout<<a[idx]<<" ";
// }

// int main(){
//   int a[]= {5,4,1,2,3};
//   displayRev(a,2,5);
// }

//max of array using recursion

// #include <bits/stdc++.h>
// using namespace std;

// int maxArr(int a[],int n){
//     if(n==1) return a[0];
//     return max(maxArr(a,n-1),a[n-1]);
// }

// int main() {
// 	int a[]= {5,4,11,13,8,6,72};
// 	cout<<maxArr(a,7);
// }

//first index of occurence

// #include <iostream>
// using namespace std;

// int firstOcc(int a[], int n, int x){
//     if(n==0){
//         return -1;
//     }

//     if(firstOcc(a,n-1,x)!=-1){
//         return firstOcc(a,n-1,x);
//     }else{
//     if(a[n-1]==x){
//         return n-1;
//     }
//     }
//     return -1;

// }

// int main(){
//     int a[]= {5,4,7,4,2,7,2,5};
//     cout<<firstOcc(a,8,5);
// }

//first index of occurence- better approach using index

#include <iostream>
using namespace std;

int firstOcc(int a[], int n, int num){
  if(n==0) return -1;
  int idx2= firstOcc(a,n-1,num);
  if(idx2!=-1){
      return idx2;
  }
  if(a[n-1]==num){
      int idx=n-1;
      return idx;
  }
}

int main(){
    int a[]= {5,4,7,4,2,7,2,5};
    cout<<firstOcc(a,8,7);
}

// #include <iostream>
// using namespace std;

// int lastOcc(int a[], int n, int x){
//     if(n==0) return -1;

//     if(a[n-1]==x){
//         int idx1=n-1;
//         return idx1;
//     }else{
//     int idx2= lastOcc(a,n-1,x);
//     return idx2;
//     }

// }

// int main(){
//     int a[]= {5,4,7,4,2,7,2,5};
//     cout<<lastOcc(a,8,4);
// }
