#include <iostream>
#include <vector>
using namespace std;
void moverZerosToEnd(int nums[], int n) {
  if (n == 1)
    return;
  int i = 0;
  int j = 0;
  // 1, 0, 2, 3, 2, 0, 0, 4, 5, 1
  // 1, 2, 3, 2, 0, 0, 0, 4, 5, 1
  while (i < n) {
    if (nums[j] > 0 || nums[j] < 0) {
      j++;
      i = j + 1;
    } else if (nums[i] > 0 || nums[i] < 0) {
      swap(nums[i], nums[j]);
      i++;
      j++;
    } else if (nums[i] == 0) {
      i++;
    }
  }
}

int main() {
  // int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
  int arr[] = {73348,  66106,  -85359, 53996, 18849, -6590,
               -53381, -86613, -41065, 83457, 0};
  int size = sizeof(arr) / sizeof(int);
  moverZerosToEnd(arr, size);
  for (int value : arr) {
    cout << value << " ";
  }
}