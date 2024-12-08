#include<iostream>
using namespace std;
int giveLargest(int arr[],int size){
    int largest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[]={1,3,2,7,8,55,45,32};
    int size=sizeof(arr)/sizeof(int);
    cout<<giveLargest(arr,size);
 return 0;
}