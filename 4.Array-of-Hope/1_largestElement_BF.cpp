#include<iostream>
#include<algorithm>
using namespace std;
int giveLargest(int arr[],int size){
    sort(arr,arr+size);
    return arr[size-1];
}
int main()
{
    int arr[]={3,25,1,5,2,};
    int size=sizeof(arr)/sizeof(int);
    cout<<giveLargest(arr,size);
 return 0;
}