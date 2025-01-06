#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> &nums) {
  int majorityCount = 0;
  int majorityElement;
  for (int i = 0; i < nums.size(); i++) {
    int element = nums[i];
    int count = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] == element) {
        count++;
      }
    }
    if (count > majorityCount) {
      majorityElement = nums[i];
      majorityCount = count;
    }
  }
  return majorityElement;
}
int main() {
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  cout << majorityElement(nums);
}