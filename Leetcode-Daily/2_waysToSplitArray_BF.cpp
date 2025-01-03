#include <iostream>
#include <vector>
using namespace std;
int waysToSplitArray(vector<int> &nums) {
  int ans = 0;
  for (int i = 0; i < nums.size() - 1; i++) {
    int left = 0;
    for (int j = 0; j <= i; j++) {
      left += nums[j];
    }
    int right = 0;
    for (int j = i + 1; j < nums.size(); j++) {
      right += nums[j];
    }
    if (left >= right) {
      ans++;
    }
  }
  return ans;
}
int main() {
  vector<int> nums = {10, 4, -8, 7};
  cout << waysToSplitArray(nums);
}