#include <iostream>
#include <limits>
using namespace std;
void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}
void sort(int arr[6], int size) {
  for (int i = 0; i <= size - 2; i++) {
    int minimum = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[minimum]) {
        minimum = j;
      }
    }
    swap(arr[i], arr[minimum]);
  }
}
// sorted array =1,2,3,5,8,11,32,45,76
// largest=76 second largest=-1 arr[i]=45 45<76 secondlargest=45 return 45
int giveSecondLargest(int arr[], int size) {
  sort(arr, size);
  int largest = arr[size - 1];
  int secondLargest = -1;
  for (int i = size - 2; i >= 0; i--) {
    if (arr[i] < largest) {
      secondLargest = arr[i];
      return secondLargest;
    }
  }
  return secondLargest;
}
int main() {
  int arr[] = {1, 5, 3, 2, 8, 32, 45, 76, 11};
  int size = sizeof(arr) / sizeof(int);
  cout << giveSecondLargest(arr, size);
  sort(arr, size);
}