//Write a program to know if a number is power of 2 or not
// #include <iostream>
// using namespace std;

// bool isPowerof2(int n){
//     return (n &&!(n & n-1));
// }

// int main(){
//   int n;
//   cin>>n;
//   cout<<isPowerof2(n);
// }

//program to count number of set bits in a number
// #include <iostream>
// using namespace std;

// int numofsetbits(int n){
//     int ctr=0;
//     while(n!=0){
//        n= (n&n-1);
//         ctr++;
//     }
//     return ctr;
// }

// int main(){
//   int n;
//   cin>>n;
//   cout<<numofsetbits(n);
// }

//find number of subsets from an array
// #include <iostream>
// using namespace std;

// void subsets(int a[],int n){
//     for(int i=0;i<(1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i&(1<<j)){
//                 cout<<a[j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int a[]={1,2,3,4}
//     ;
//     int n=4;
//     subsets(a,4);
// }

// #include <iostream>
// using namespace std;

// void unique(int a[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^a[i];
//     }
//     int p=0;
//     while((xorsum & (1<<p))!=1){
//         p++;
//     }
//     int sum2=0;
//     for(int i=0;i<n;i++){
//         if(a[i] & (1<<p)){
//             sum2=sum2^a[i];
//         }
//     }
//     cout<<sum2<<endl;
//     sum2 = sum2^xorsum;
//     cout<<sum2;
// }

// int main() {
// 	int a[]={2,4,6,7,4,5,6,2};
// // 	int n=sizeof(a)/sizeof(int);
// 	unique(a,8);
// }


#include <iostream>
using namespace std;

void unique(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    int p=0;
    while((xorsum & 1)!=1){
        p++;
        xorsum=xorsum>>p;
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i] & (1<<1)){
            sum=sum^a[i];
        }
    }
    int second = sum^(xorsum<<p);
    cout<<sum<< " "<<second;
}
int main() {
	int a[]={1,3,2,6,7,4,2,6,3,4,7,5,8,8,10,10,11,1};
	int n= sizeof(a)/sizeof(int);
	unique(a,n);
}