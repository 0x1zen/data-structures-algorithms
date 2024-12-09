#include <climits>
#include <iostream>
using namespace std;
int giveSecondSmallest(int arr[], int size) {
  int smallest = arr[0];
  int secondSmallest = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
    } else if (arr[i] > smallest && arr[i] < secondSmallest) {
      secondSmallest = arr[i];
    }
  }
  return secondSmallest;
}
int main() {
  int arr[] = {2, 3, 4, 5, 6, 7, 8, 8, 8, 9};
  int size = sizeof(arr) / sizeof(int);
  cout << giveSecondSmallest(arr, size);
}