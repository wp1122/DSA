//sieve algo
// #include <iostream>
// using namespace std;

// void primesieve(int n){
//     bool prime[n+1];
    
//     for(int i=0;i<n+1;i++){
//         prime[i]=1;
//     }
    
//     for(int i=2;i<=n;i++){
//         if(prime[i]==1){
//             for(int j=i*i;j<=n;j+=i){  //or j = 2*i
//                 prime[j]=0;
//             }
//         }
//     }
    
//     for(int i=2;i<=n;i++){
//         if(prime[i]==1){
//             cout<<i<<" ";
//         }
//     }
    
// }

// int main() {
// 	int n;
// 	cin>>n;
// 	primesieve(n);
// }

//lowest highest prime factor

#include <bits/stdc++.h>
using namespace std;

void findLowest_HighestPrimeFactor(int n){
    bool prime[n+1];
    int lp[n+1]; int hp[n+1];
    for(int i=2;i<n+1;i++){
        prime[i]=1;
        lp[i]=0;
        hp[i]=0;
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<=n;j+=i){
                prime[j]=0;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
    
    for(int i=2;i<n+1;i++){
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
    
   }

int main() {
findLowest_HighestPrimeFactor(18);
}


//all prime factors 

#include <bits/stdc++.h>
using namespace std;

void all_primefactors(int n){
    bool prime[n+1];
    int lp[n+1]; int hp[n+1];
    prime[0]=prime[1]=0;
    for(int i=2;i<n+1;i++){
        prime[i]=1;
        lp[i]=0;
        hp[i]=0;
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<=n;j+=i){
                prime[j]=0;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }

        
    while(n>1){
        cout<<lp[n]<<" ";
        n=n/lp[n];
    }
    
   }

int main() {
all_primefactors(24);
}

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *ans = dummy;

        int siz = lists.size();

        while (1)
        {
            int i = 0;
            bool notOver = false;
            while (i < siz)
            {
                if (lists[i] != NULL)
                {
                    notOver = true;
                    break;
                }
                i++;
            }
            if (notOver == false)
                break;
            int mn = INT_MAX;
            ListNode *temp;
            i = 0;
            while (i < siz)
            {
                if (lists[i] != NULL)
                {
                    int value = lists[i]->val;
                    if (value < mn)
                    {
                        temp = lists[i];
                        mn = value;
                    }
                }
                if (lists[i] != NULL)
                    lists[i] = lists[i]->next;
                i++;
            }
            ans->next = temp;
            ans = ans->next;
        }
        return dummy->next;
    }
};