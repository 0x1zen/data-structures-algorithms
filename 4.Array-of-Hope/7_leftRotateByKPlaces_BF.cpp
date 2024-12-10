#include <iostream>
using namespace std;
void rotateByKPlaces(int arr[], int size, int k) {
  if (k == 0 || k % size == 0)
    return;
  k = k % size;
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }
  // int index = k;
  for (int i = k; i < size; i++) {
    arr[i - k] = arr[i];
  }
  int index = 0;
  for (int i = size - k; i < size; i++) {
    arr[i] = temp[index++];
  }
}
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  // expected answer =3,4,5,6,7,1,2
  int size = sizeof(arr) / sizeof(int);
  rotateByKPlaces(arr, size, k);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}