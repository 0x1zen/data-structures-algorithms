#include <algorithm>
#include <iostream>
using namespace std;
void rotateByKPlaces(int arr[], int size, int k) {
  if (k == 0 || k % size == 0)
    return;
  k = k % size;
  reverse(arr, arr + k);
  reverse(arr + k, arr + size);
  reverse(arr, arr + size);
}
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  // int arr[] = {-1, -100, 3, 99};
  // int k = 2;
  int k = 3;
  // expected answer =3,4,5,6,7,1,2
  int size = sizeof(arr) / sizeof(int);
  rotateByKPlaces(arr, size, k);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}