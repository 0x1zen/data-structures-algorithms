#include<iostream>
using namespace std;
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
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
// g++ -o program program.cpp -mconsole
