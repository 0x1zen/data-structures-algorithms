#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void sort(int arr[6],int size){
    // push the max to the last by adjuscent swaps
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
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