#include <iostream>
#include <vector>
bool check(std::vector<int> &nums) {
  int count = 0;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i - 1] > nums[i]) {
      count++;
    }
  }
  if (nums[nums.size() - 1] > nums[0]) {
    count++;
  }
  if (count > 1) {
    return false;
  } else
    return true;
}
int main() {
  // std::vector<int> nums = {3, 4, 5, 1, 2};
  std::vector<int> nums = {2, 1, 3, 4};
  std::cout << check(nums) << std::endl;
}