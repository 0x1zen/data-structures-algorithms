#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int maxOnes(vector<int> nums) {
  int count = 0;
  int maxCount = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 1) {
      count++;
    } else if (nums[i] == 0) {
      maxCount = max(count, maxCount);
      count = 0;
    }
  }
  return max(count, maxCount);
}
int main() {
  // vector<int> nums = {1, 1, 0, 1, 1, 1};
  vector<int> nums = {1, 0, 1, 1, 0, 1};
  cout << maxOnes(nums);
}