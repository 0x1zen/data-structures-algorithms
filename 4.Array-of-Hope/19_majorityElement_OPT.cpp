#include <iostream>
#include <vector>
using namespace std;
// Boyer Moore Algorithm.Only works if the array always has a majority element
int majorityElement(vector<int> &nums) {
  int count = 0;
  int result = nums[0];
  for (int i = 0; i < nums.size(); i++) {
    if (count == 0) {
      result = nums[i];
    }
    nums[i] == result ? count++ : count--;
  }
  return result;
}
int main() {
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  cout << majorityElement(nums);
}