#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &nums1) {
  for (int i = 0; i < nums1.size() - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < nums1.size(); j++) {
      if (nums1[j] < nums1[mini]) {
        mini = j;
      }
    }
    swap(nums1[i], nums1[mini]);
  }
}
vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
  sort(nums1);
  sort(nums2);
  int i = 0, j = 0;
  vector<int> result;
  while (i < nums1.size() && j < nums2.size()) {
    if (nums1[i] < nums2[j]) {
      i++;
    } else if (nums2[j] < nums1[i]) {
      j++;
    } else {
      if (result.empty() || result.back() != nums1[i]) {
        result.push_back(nums1[i]);
      }
      i++;
      j++;
    }
  }
  return result;
}
int main() {
  vector<int> nums1 = {4, 7, 9, 7, 6, 7};
  vector<int> nums2 = {5, 0, 0, 6, 1, 6, 2, 2, 4};
  vector<int> result = intersection(nums1, nums2);
  for (int value : result) {
    cout << value << " ";
  }
}