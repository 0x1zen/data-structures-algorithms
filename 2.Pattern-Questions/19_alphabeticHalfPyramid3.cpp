#include<iostream>
using namespace std;
// E
// D E
// C D E
// B C D E
void print(int n){
    char prev=65;
    for(int i=0;i<n;i++){
        for(char j='E'-i;j<='E';j++){
            cout<<j;
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