#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int> &nums) {
  int n = nums.size();
  int totalSum = (n * (n + 1)) / 2;
  int actualSum = 0;
  for (int i = 0; i < n; i++) {
    actualSum += nums[i];
  }
  if (totalSum != actualSum) {
    return totalSum - actualSum;
  }
  return -1;
}
int main() {
  vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  // vector<int> nums = {0, 1};
  int answer = findMissingNumber(nums);
  cout << answer << endl;
}