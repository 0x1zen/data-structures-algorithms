#include <iostream>
#include <vector>
using namespace std;
void moverZerosToEnd(int arr[], int n) {
  int countPosValue = 0;
  int countNegValue = 0;
  vector<int> nums;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      nums.push_back(arr[i]);
      countPosValue++;
    } else if (arr[i] < 0) {
      nums.push_back(arr[i]);
      countNegValue++;
    }
  }
  int total = countPosValue + countNegValue;
  for (int i = 0; i < n; i++) {
    if (i < total) {
      arr[i] = nums[i];
    } else {
      arr[i] = 0;
    }
  }
}

int main() {
  int arr[] = {73348,  66106,  -85359, 53996, 18849, -6590,
               -53381, -86613, -41065, 83457, 0};
  // int arr[] = {0, 1, 0, 3, 12};
  int size = sizeof(arr) / sizeof(int);
  moverZerosToEnd(arr, size);
  for (int value : arr) {
    cout << value << " ";
  }
}