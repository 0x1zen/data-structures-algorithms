#include <iostream>
using namespace std;
//0 *        *
//1 **      **
//2 ***    ***
//3 ****  ****
//4 **********
//5 ****  ****
//6 ***    ***
//7 **      **
//8 *        *
void print(int n){
    int spaces=(2*n)-2;
    for(int i=0;i<(2*n)-1;i++){
        // stars
        int stars;
        i<n?stars=i+1:stars=(2*n)-1-i;
        
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<spaces;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n-1) spaces-=2;
        else spaces+=2;
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