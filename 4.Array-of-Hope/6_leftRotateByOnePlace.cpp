#include <iostream>
void rotateByOne(int arr[], int size) {
  int value = arr[0];
  for (int i = 1; i < size; i++) {
    arr[i - 1] = arr[i];
  }
  arr[size - 1] = value;
}
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  rotateByOne(arr, size);
  for (int value : arr) {
    std::cout << value;
  }
}