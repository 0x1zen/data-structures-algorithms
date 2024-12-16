#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
  unordered_set<int> st1(nums1.begin(), nums1.end());
  unordered_set<int> st2(nums2.begin(), nums2.end());
  vector<int> result;
  for (int value : st1) {
    if (st2.find(value) != st2.end()) {
      result.push_back(value);
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