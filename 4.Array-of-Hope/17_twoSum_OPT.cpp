#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
  int i = 0, j = nums.size() - 1;
  while (i < j) {
    int value = nums[i] + nums[j];
    if (value == target) {
      return {i, j};
    } else if (value < target) {
      i++;
    } else {
      j--;
    }
  }
  return {};
}
int main() {
  vector<int> nums = {3, 2, 4};
  int target = 6;
  sort(nums.begin(), nums.end());
  // after sorting the array will become 2,3,4
  vector<int> ans = twoSum(nums, target);
  for (int value : ans) {
    cout << value << " ";
  }
  // output =0,2 is corret for the sorted array
}