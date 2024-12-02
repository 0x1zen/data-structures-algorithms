#include<iostream>
using namespace std;
// 1
// 2 3
// 4 5 6
// 7 8 9 10
void print(int n){
    int prev=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<++prev<<" ";
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