#include<iostream>
using namespace std;
// A
// B B
// C C C
// D D D D
void print(int n){
    char prev=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<prev;
        }
        prev++;
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