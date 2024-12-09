#include <iostream>
#include <set>
using namespace std;
int removeDuplicates(int arr[], int size) {
  set<int> st;
  for (int i = 0; i < size; i++) {
    st.insert(arr[i]);
  }
  int index = 0;
  for (int value : st) {
    arr[index++] = value;
  }
  return st.size();
}
int main() {
  int arr[]{1, 1, 2, 2, 2, 3, 3, 3};
  int size = sizeof(arr) / sizeof(int);
  cout << removeDuplicates(arr, size) << endl;
  for (int value : arr) {
    cout << value << " ";
  }
}