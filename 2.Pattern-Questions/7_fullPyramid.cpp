#include<iostream>
using namespace std;
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<"* ";
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