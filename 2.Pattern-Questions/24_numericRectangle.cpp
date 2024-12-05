#include <iostream>
using namespace std;
// 0 4444444
// 1 4333334
// 2 4322234
// 3 4321234
// 4 4322234
// 5 4333334
// 6 4444444
void print(int n){
    for(int i=0;i<2*n-1;i++){
       for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int bottom=2*n-2-i;
            int right=2*n-2-j;
            cout<<n-min(min(top,bottom),min(left,right));
       }
        cout<<endl;
    }
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print(n);
    }

    return 0;
}