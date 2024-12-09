#include <iostream>
#include <limits>
using namespace std;
int giveSecondLargest(int arr[], int size) {
  int largest = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  int secondLargest = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] < largest && arr[i] > secondLargest) {
      secondLargest = arr[i];
    }
  }
  return secondLargest;
}
int main() {
  int arr[] = {1, 5, 3, 2, 8, 32, 76, 11};
  int size = sizeof(arr) / sizeof(int);
  cout << giveSecondLargest(arr, size);
}