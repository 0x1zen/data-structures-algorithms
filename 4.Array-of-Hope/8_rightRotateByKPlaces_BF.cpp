#include <iostream>
using namespace std;
void rotateByKPlaces(int arr[], int size, int k) {
  if (k == 0 || k % size == 0)
    return;
  k = k % size;
  int temp1[k];
  int temp2[size - k];
  int index = 0;
  for (int i = size - k; i < size; i++) {
    temp1[index++] = arr[i];
  }
  index = 0;
  for (int i = 0; i < size - k; i++) {
    temp2[index++] = arr[i];
  }
  index = 0;
  for (int i = 0; i < k; i++) {
    arr[i] = temp1[index++];
  }
  index = 0;
  for (int i = k; i < size; i++) {
    arr[i] = temp2[index++];
  }
}
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  // expected answer =5,6,7,1,2,3,4
  int size = sizeof(arr) / sizeof(int);
  rotateByKPlaces(arr, size, k);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}