#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  int value = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == value) {
      value++;
    } else {
      return value;
    }
  }
  return -1;
}
int main() {
  // vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  vector<int> nums = {0, 1};
  int answer = findMissingNumber(nums);
  cout << answer << endl;
}