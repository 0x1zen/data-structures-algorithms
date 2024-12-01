#include<iostream>
using namespace std;
//         1
//         0 1
//         1 0 1
//         0 1 0 1
//         1 0 1 0 1

void print(int n){
    for(int i=0;i<n;i++){
        int prev=(i%2==0)?1:0;
        for(int j=0;j<i+1;j++){
            cout<<prev;
            prev=1-prev;
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