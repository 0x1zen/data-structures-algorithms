#include <iostream>
#include <vector>
using namespace std;
int waysToSplitArray(vector<int> &nums) {
  int n = nums.size();
  long int presum[n];
  presum[0] = nums[0];
  int ans = 0;
  for (int i = 1; i < n; i++) {
    presum[i] = presum[i - 1] + nums[i];
  }
  for (int i = 0; i < n - 1; i++) {
    long int left = presum[i];
    long int right = presum[n - 1] - presum[i];
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