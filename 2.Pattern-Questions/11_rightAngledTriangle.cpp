#include<iostream>
using namespace std;
//         *
//         * *
//         * * *
//         * * * *
//         * * * * *
//         * * * * 
//         * * * 
//         * * 
//         * 
void print(int n){
    for(int i=1;i<=(2*n)-1;i++){
        if(i<=n){
            for(int j=0;j<i;j++){
            cout<<"* ";
            }
        }
        else{
            for(int j=0;j<(2*n)-i;j++){
                cout<<"* ";
            }
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