//all indexes of elmt in array
#include <iostream>
using namespace std;
int glob=0;
int b[100];

void allind(int a[], int n, int x, int *ptr){
 if(n==0) return;

 allind(a,n-1,x,&glob);
 if(a[n-1]==x){
   b[glob]=n-1;
   glob++;

 }
}
int main(){
   int a[]={3,3,3,4,7,3,6,3};
   allind(a,8,3,&glob);
   for(int i=0;i<glob;i++){
       cout<<b[i];
   }
}


//reverse string

#include <iostream>
#include <cstring>
using namespace std;

void rev(string str, int n){
    if(n==0) return;
    
    cout<<str[n-1];
    rev(str,n-1);
    
}

int main() {
string str="";
int n= str.size();
rev(str,n);
}
