#include<iostream>
using namespace std;
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void print(int n){
    for(int i=0;i<n;i++){
        // stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        // stars
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<(2*n)-(2*i)-2;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print(n);
        print2(n);
    }
 return 0;
}