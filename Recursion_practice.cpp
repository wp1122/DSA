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

// #include <iostream>
// using namespace std;

// int firstInd(int a[], int n, int x, int ind){
//     if(ind==n){
//         return -1;
//     }
    
//     if(a[ind]==x){
//         return ind;
//     }else{
//         int fissa= firstInd(a,n,x,ind+1);
//         return fissa;
//     }
// }

// int main() {
//  int a[] = {5,40,1,4,3,4};
//  cout<<firstInd(a,6,4,0);
// }

//last index of occurence

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


// alt approach for last idx using indexes

// #include <iostream>
// using namespace std;

// int lastInd(int a[], int n, int x, int ind){
//    if(ind==n) return -1;
   
//    int liisa= lastInd(a,n,x,ind+1);
//    if(liisa!=-1){
//        return liisa;
//    }else{
//        if(a[ind]==x){
//            return ind;
//        }else{
//            return -1;
//        }
//    }
// }

// int main() {
//  int a[] = {11,40,1,4,3,4};
//  cout<<lastInd(a,6,4,0);
// }


//all indexes of occurence
// #include <iostream>
// using namespace std;

// void all(int a[], int n, int x, int idx){
//     if(idx==n) return;
    
//     if(a[idx]==x){
//         cout<<idx<<endl;
//     }
//     all(a,n,x,idx+1);
// }

// int main() {
//     int a[]={3,3,4,1,3,3,3};
// 	all(a,7,3,0);
// }

//reverse string- O(n)

// #include <iostream>
// #include <string>
// using namespace std;

// void reverse(string str,int n){
//     if(n==0) return;
    
//      cout<<str[n-1];
//      reverse(str,n-1);
    
    
// }

// int main() {
// 	string str = "hsuya gnik";
// 	int n= str.size();
// 	reverse(str,n);
// }

//reverse string using string as only parameter - O(squareN)
// #include <iostream>
// #include <string>
// using namespace std;

// void reverse(string str){
//    int n= str.size();
//     if(n==0) return;
//    cout<<str[n-1];
   
//    str= str.substr(0,n-1);
//    reverse(str); 
      
// }

// int main() {
// 	string str = "hsuyaaaaa";
// 	reverse(str);
// }

//replace pi with 3.14 in string - O(n2)
// #include <iostream>
// using namespace std;

// string replaceee (string s){
//     if(s.size()==0) return "";
    
//     if(s[0]=='p'&&s[1]=='i'){
//         return "3.14" + replaceee(s.substr(2));
//     }
//     else{
//         return s[0] + replaceee(s.substr(1)); 
//     }
// }

// int main() {
// 	string str= "pippxxppiixpi";
// 	cout<<replaceee(str);
// 	cout<<endl<<replaceee("pipppiiipi");
	
// }

//replace pi with 3.14, O(n) approach using index as extra parameter

// #include <iostream>
// using namespace std;

// void replace(string str, int idx){
//     if(idx==str.length()) return;
//     if(str[idx]=='p'&&str[idx+1]=='i'){
//         cout<<"3.14";
//         replace(str,idx+2);
//     }else{
//         cout<<str[idx];
//         replace(str,idx+1);
//     }
// }

// int main() {

//   string str= "pippppiiiipi";
//   replace(str,0);
    
// }

//Move all X to end of string- O(square n)
// #include <iostream>
// #include <string>
// using namespace std;

// string endx(string str){
//     if(str.size()==0) return "";
//     if(str[0]=='x'){
//          return endx(str.substr(1)) + "x";
//     }
//     else{
//         return str[0] + endx(str.substr(1));
//     }
// }

// int main() {
// 	string str= "hsuyaxoxoChachixoxo";
// 	cout<<endx(str);
	
// }

//Move all x to end of string- O(n) approach
// #include <iostream>
// #include <string>
// using namespace std;

// string endx(string str, int idx){
//     if(idx==str.length()) return "";
    
//     if(str[idx]=='x'){
//         return endx(str,idx+1) + "x";
//     }else{
//         return str[idx] + endx(str,idx+1);
//     }
// }

// int main() {
// 	string str="hsuyaxoxochachixoxo";
// 	cout<<endx(str,0);
// }

//print all subsequences
// #include <iostream>
// #include <string>
// using namespace std;

// void allSubsq(string input, string output, int idx)
// {
//     if(idx==input.size()){
//         cout<<output<<endl;
//         return;
//     }
    
//     allSubsq(input,output,idx+1);
//     allSubsq(input,output+input[idx],idx+1);
// }
// int main() {
// 	string str="abc";
// 	allSubsq(str,"",0);
// }

//Print all words from keypad numbers

// #include <iostream>
// #include <string>
// using namespace std;

// void print(int value, string output,string keys[]){
//    if(value==0){
//        cout<<output<<endl;
//        return;
//    }
   
//    int num1 = value%10;
//    string s1=keys[num1];
//    for(int i=0;i<s1.size();i++){
//       print(value/10,s1[i]+output,keys);
//    }
// }
                  

// int main() {
//     string keys[]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
// 	print(23,"",keys);
// }

// Print stair path when only 1,2,3 steps allowed
// #include <iostream>
// using namespace std;

// void getPath(int n,string output){
//     if(n<0){
//         return;
//     }
//     if(n==0){
//         cout<<output<<endl;
//         return;
//     }
  
  
//   getPath(n-1, output+"1");
//   getPath(n-2, output+"2");
//   getPath(n-3, output+"3");
// }

// int main() {
// 	getPath(4,"");
// }

//Print stair path when all 1 to n steps are allowed
// #include <iostream>
// using namespace std;

// void getPath(int n,string output){
//     if(n<0){
//         return;
//     }
//     if(n==0){
//         cout<<output<<endl;
//         return;
//     }
  
//   for(int i=1;i<=n;i++){
//   getPath(n-i, output+to_string(i));
//   }
// }

// int main() {
// 	getPath(5,"");
// }

//Print permutations of string
// #include <iostream>
// #include <string>
// using namespace std;

// void perm(string input, string output){
//     if(input.size()==0){
//         cout<<output<<endl;
//         return;
//     }
    
//     for(int i=0;i<input.size();i++){
//         char ch = input[i];
//         string s= input.substr(0,i) + input.substr(i+1);
//         perm(s,output+ch);
//     }
// }

// int main() {
// 	perm("abc","");
// }



//Print encodings 1-a, 2-b, 3-c 23-w...26-z(current code messy, write beautiful, works completely fine though for all test cases)

// #include <iostream>
// #include <string>
// using namespace std;

// void decode(string input, string output){
    
//     if(input.size()==0){
//         cout<<output<<endl;
//         return;
//     }

   
//   string o1= input.substr(0,1);
//   string i1= input.substr(1);
//   if(i1[0]!='0'){
//   if(stoi(o1)>=1&&stoi(o1)<=26){
//   char c1= stoi(o1) + 96;    //96 = 'a'-1;
//   decode(i1,output+c1);
//   }}
  
//   if(input.size()>=2){
//   string o2 = input.substr(0,2);
//   string i2= input.substr(2);
//   if(i2[0]!='0'){
//   if(stoi(o2)>=1&&stoi(o2)<=26){
//   char c2= stoi(o2) + 96;
//   decode(i2,output+c2);
//   }
//   }
//   }
  
  
// }

// int main() {
// 	decode("12103","");
// }

//Print maze path without jumps(only unit horiz vertical allowed)

// #include <iostream>
// #include <string>
// using namespace std;

// void maze(int n1, int m1, int n2, int m2, string output){
//     if((n1>n2)||(m1>m2)) return;
//     if(n1==n2&&m1==m2){
//         cout<<output<<endl;
//         return;
//     }
    
//     maze(n1+1,m1,n2,m2,output+"v");
//     maze(n1,m1+1,n2,m2,output+"h");

    
// }

// int main() {
// 	maze(1,1,3,3,"");
// }



//Print maze path with jumps allowed
// #include <iostream>
// #include <string>
// using namespace std;

// void maze(int n1, int m1, int n2, int m2, string output){
//     // if((n1>n2)||(m1>m2)) return;
//     if(n1==n2&&m1==m2){
//         cout<<output<<endl;
//         return;
//     }
    
//     for(int i=1;i<=n2-n1;i++){
//     maze(n1+i,m1,n2,m2,output+"v"+to_string(i));
//     }
//     for(int i=1;i<=m2-m1;i++){
//     maze(n1,m1+i,n2,m2,output+"h"+to_string(i));
//     }
//     for(int i=1;i<=m2-m1&&i<=n2-n1;i++){
//     maze(n1+i,m1+i,n2,m2,output+"d"+to_string(i));
//     }
    
// }

// int main() {
// 	maze(2,2,4,4,"");
// }

