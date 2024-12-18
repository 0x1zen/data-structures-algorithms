#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int> nums) {
  int count = 0;
  for (int i = 0; i < nums.size(); i++) {
    int currValue = nums[i];
    count = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] == currValue) {
        count++;
      }
    }
    if (count == 1) {
      return nums[i];
    }
  }
  return -1;
}
int main() {
  // vector<int> nums = {2, 2, 1};
  vector<int> nums = {4, 1, 2, 1, 2};
  cout << singleNumber(nums);
}