#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 
 int b[n];
 b[0]=a[0];
 
 for(int i=1;i<n;i++){
     b[i]=b[i-1]+a[i];
 }
 
 int ans= INT_MIN;
 
 for(int i=0;i<n;i++){
     int sum=0;
     for(int j=0;j<i;j++){
         sum=b[i]-b[j];
         ans=max(ans,sum);
     }
 }

cout<<ans;
 
}