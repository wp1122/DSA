//Transpose of square matrix

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int n;
// cin>>n;
// int a[n][n];

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cin>>a[i][j];
//     }
// }

// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         int temp=a[i][j];
//         a[i][j]=a[j][i];
//         a[j][i]=temp;
//     }
// }

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }

//Matrix multiplication


#include <bits/stdc++.h>
using namespace std;
int main() {
int num1,num2,num3;
cin>>num1>>num2>>num3;
int a[num1][num2];
int b[num2][num3];
int c[num1][num3];

for(int i=0;i<num1;i++){
    for(int j=0;j<num2;j++){
        cin>>a[i][j];
    }
}

for(int i=0;i<num2;i++){
    for(int j=0;j<num3;j++){
        cin>>b[i][j];
    }
}

for(int i=0;i<num2;i++){
    for(int j=0;j<num3;j++){
        c[i][j]=0;
    }
}

for(int i=0;i<num1;i++){
    for(int j=0;j<num3;j++){
        for(int k=0;k<num2;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
}


for(int i=0;i<num1;i++){
    for(int j=0;j<num3;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
}