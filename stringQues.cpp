#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

 string lowercase(string str){
     int n= str.length();
     for(int i=0;i<n;i++){
         if(str[i]<91&&str[i]>64){
             str[i]+=32;
         }
     }
     return str;
 }
 string uppercase(string str){
    int n= str.length();
     for(int i=0;i<n;i++){
         if(str[i]<123&&str[i]>96){
             str[i]-=32;
         }
     }
    return str;
 }

//using transform function
string upperletters(string str){
    int n= str.length();
    transform(str.begin(),str.end()-1,str.begin(),::toupper);
    return str;
}
int main() {
   string s;
   cin>>s;
   cout<<lowercase(s);
   cout<<uppercase(s);
   cout<<upperletters(s);
}




//Given a string of small alphabets, find the maximum repeating character

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
string str;
cin>>str;

int arr[26];
for(int i=0;i<26;i++){
    arr[i]=0;
}
int maxf=0;
char maxc=str[0];

for(int i=0;i<str.size();i++){
arr[str[i]]++;
if(arr[str[i]]>maxf){
    maxf=arr[str[i]];
    maxc=str[i];
}
}
cout<<maxf<<" "<<maxc;

}

