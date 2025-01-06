#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &nums) {
  int left = 0, i = 0, right = nums.size() - 1;
  while (i <= right) {
    if (nums[i] == 2) {
      swap(nums[i], nums[right]);
      right--;
      i--;
    } else if (nums[i] == 0) {
      swap(nums[left], nums[i]);
      left++;
    }
    i++;
  }
}
int main() {
  vector<int> nums = {2, 0, 2, 1, 1, 0};
  sortColors(nums);
  for (int value : nums) {
    cout << value << " ";
  }
}