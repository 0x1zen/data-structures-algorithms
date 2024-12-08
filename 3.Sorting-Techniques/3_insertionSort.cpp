#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void sort(int arr[],int size){
    // Take an element and place it in its current order
    for(int i=0;i<size;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int arr[]={13,26,24,52,20,9};
    // int arr[]={9,8,7,6,5,4,3};
    int size=sizeof(arr)/sizeof(int);
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}