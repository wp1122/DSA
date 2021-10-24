#include <iostream>
using namespace std;
// 	int getBit(int n, int pos){
// 	    return((n&(1<<pos))!=0);
// 	}
// 		int setBit(int n, int pos){
// 	    return(n|(1<<pos));
// 	}
		int clearBit(int n, int pos){
		    int mask = ~(1<<pos);
	    return(mask&n);
	}
	
int main() {
//   cout<< getBit(5,2);
//   cout<< setBit(5,1);
  cout<<clearBit(5,2);
}