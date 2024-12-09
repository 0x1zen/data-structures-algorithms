#include <iostream>
#include <set>
using namespace std;
int removeDuplicates(int arr[], int size) {
  int i = 0;
  int j = 1;
  while (j < size) {
    if (arr[i] == arr[j]) {
      j++;
    } else if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[]{1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5};
  int size = sizeof(arr) / sizeof(int);
  cout << removeDuplicates(arr, size) << endl;
  for (int value : arr) {
    cout << value << " ";
  }
}