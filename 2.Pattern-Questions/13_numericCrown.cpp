#include<iostream>
using namespace std;
//         1      1
//         12    21
//         123  321
//         12344321
// spaces i=0 6
// spaces i=1 4
// sapcces i=2 2
void print(int n){
    for(int i=0;i<n;i++){
        // number
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        // spaces
        for(int j=0;j<n-(2*i)+2;j++){
            cout<<" ";
        }
        for(int j=i;j>=0;j--){
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