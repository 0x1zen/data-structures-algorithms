#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// Works only if there are positive values
int subarraySum(vector<int> &nums, int k) {
  int i = 0, j = 0, sum = 0, count = 0;
  while (j < nums.size()) {
    sum += nums[j];
    j++;
    while (sum > k && i < j) {
      sum -= nums[i];
      i++;
    }
    if (sum == k) {
      count++;
    }
  }
  return count;
}
int main() {
  // vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
  vector<int> nums = {1, 1, 1};
  int k = 2;
  cout << subarraySum(nums, k);
}