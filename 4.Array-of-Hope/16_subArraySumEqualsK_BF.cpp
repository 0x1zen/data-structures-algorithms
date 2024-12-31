#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int subarraySum(vector<int> &nums, int k) {
  int count = 0;
  int sum = 0;
  for (int i = 0; i < nums.size(); i++) {
    sum = 0;
    for (int j = i; j < nums.size(); j++) {
      sum += nums[j];
      if (sum == k) {
        count++;
      }
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