#include <iostream>
using namespace std;
bool isSorted(int arr[], int size) {
  bool flag = true;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i + 1] >= arr[i]) {

    } else if (arr[i + 1] < arr[i]) {
      flag = false;
    }
  }
  return flag;
}
int main() {
  int arr[] = {4, 3};
  int size = sizeof(arr) / sizeof(int);
  int ans = isSorted(arr, size);
  ans == 0 ? cout << "False" : cout << "True";
}