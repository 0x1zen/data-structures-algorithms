#include <iostream>
#include <set>
#include <vector>
void unionOfTwoArrays(std::vector<int> nums1, std::vector<int> nums2) {
  std::set<int> st;
  for (int i = 0; i < nums1.size(); i++) {
    st.insert(nums1[i]);
  }
  for (int i = 0; i < nums2.size(); i++) {
    st.insert(nums2[i]);
  }
  for (int value : st) {
    std::cout << value << " ";
  }
}
int main() {
  std::vector<int> nums1 = {1, 1, 2, 3, 4, 5, 3, 9};
  std::vector<int> nums2 = {2, 3, 4, 4, 5};
  unionOfTwoArrays(nums1, nums2);
}