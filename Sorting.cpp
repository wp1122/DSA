// Insertion sort 
// #include <iostream>
// using namespace std;

// int main() {
//  int a[] = { 4, 1, 3, 9, 7 };
//  int n=  sizeof(a)/sizeof(int);
//  for(int i=1;i<n;i++){
//      int j=i;
//      int k=a[j];
//      while(k<a[j-1]&&j>=1){
//          a[j]=a[j-1];
//          j--;

//      }
//      a[j]=k;
//  }
 
//  for(int i=0;i<n;i++){
//      cout<<a[i]<<endl;
//  }
// }


//Binary sort

// #include <iostream>
// using namespace std;

// int main() {
//  int a[] = { 4, 1, 3, 9, 7 };
//  int n=  sizeof(a)/sizeof(int);
 
//  for(int i=0;i<n-1;i++){
//      bool swapped = false;
//      for(int j=0;j<n-i-1;j++){
//          if(a[j+1]<a[j]){
//              swapped=true;
//              int temp=a[j+1];
//              a[j+1]=a[j];
//              a[j]=temp;
//          }
//      }
//      if(!swapped){
//          break;
//      }
//  }
 
//  for(int i=0;i<n;i++){
//      cout<<a[i]<<endl;
//  }
// }


//Selection sort

#include <iostream>
using namespace std;

int main() {
 int a[] = { 5,8,13,11,99,66,23,07 };
 int n=  sizeof(a)/sizeof(int);
 
 for(int i=-1;i<n-1;i++){
     int mn=a[i+1];
     int elem=i+1;
     for(int j=i+1;j<n;j++){
         if(a[j]<mn){
             mn=a[j];
             elem=j;
         }
     }
     
     int temp=a[i+1];
     a[i+1]=mn;
     a[elem]=temp;
     
 }
 for(int i=0;i<n;i++){
     cout<<a[i]<<endl;
 }
}




