#include<iostream>
using namespace std;
//0    A
//1   ABA
//2  ABCBA 
//3 ABCDCBA
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char prev=64;
        for(int j=0;j<(2*i)+1;j++){
            if(j<(2*i)/2+1){
                cout<<++prev;
            }
            else{
                cout<<--prev;
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