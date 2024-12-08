#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void sort(int arr[6],int size){
    // select the minimum and swap
    for(int i=0;i<=size-2;i++){
        int minimum=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        swap(arr[i],arr[minimum]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
// i=0 j=1 smaller=9 swap i,j 9,26,24,52,20,13
// i=1 j=2 smaller=20 swap i,j 9,13,24,52,20,26
// i=2 j=3 smaller swap i,j 9,13,20,52,24,26
// i=3 j=4 smaller swap i,j 9,13,20,24,52,26
// i=4 j=5 smaller swap i,j 9,13,20,24,26,52
int main()
{
    int arr[]={13,26,24,52,20,9};
    int size=sizeof(arr)/sizeof(int);
    sort(arr,size);
 return 0;
}