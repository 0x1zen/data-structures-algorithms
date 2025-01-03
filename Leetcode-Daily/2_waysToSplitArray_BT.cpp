#include <iostream>
#include <vector>
using namespace std;
int waysToSplitArray(vector<int> &nums) {
  int n = nums.size();
  long int presum[n];
  presum[0] = nums[0];
  long int postsum[n];
  postsum[n - 1] = nums[n - 1];
  int ans = 0;
  for (int i = 1; i < n; i++) {
    presum[i] = presum[i - 1] + nums[i];
  }
  for (int i = n - 2; i >= 0; i--) {
    postsum[i] = postsum[i + 1] + nums[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (presum[i] >= postsum[i + 1]) {
      ans++;
    }
  }
  return ans;
}
int main() {
  vector<int> nums = {10, 4, -8, 7};
  cout << waysToSplitArray(nums);
}