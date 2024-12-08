#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void sort(int arr[6],int size){
    // push the max to the last by adjuscent swaps
    for(int i=size-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={13,26,24,52,20,9};
    int size=sizeof(arr)/sizeof(int);
    sort(arr,size);
 return 0;
}