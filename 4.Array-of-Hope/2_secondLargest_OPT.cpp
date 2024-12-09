#include <iostream>
#include <limits>
using namespace std;
int giveSecondLargest(int arr[], int size) {
  int largest = -1;
  int secondLargest = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
    } else if (arr[i] < largest && arr[i] > secondLargest) {
      secondLargest = arr[i];
    }
  }
  return secondLargest;
}
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 9};
  int size = sizeof(arr) / sizeof(int);
  cout << giveSecondLargest(arr, size);
}