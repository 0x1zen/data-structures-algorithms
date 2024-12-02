#include<iostream>
using namespace std;
// A
// A B
// A B C
// A B C D
void print(int n){
    for(int i=0;i<n;i++){
        char prev=65;
        for(int j=0;j<n-i;j++){
            cout<<prev;
            prev++;
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
    }
 return 0;
}