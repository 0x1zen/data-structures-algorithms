#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  vector<bool> visited(nums.size() + 1, false);
  for (int i = 0; i < nums.size(); i++) {
    visited[nums[i]] = true;
  }
  for (int i = 0; i <= nums.size(); i++) {
    if (visited[i] == false) {
      return i;
    }
  }
  return -1;
}
int main() {
  vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  // vector<int> nums = {0, 1};
  int answer = findMissingNumber(nums);
  cout << answer << endl;
}