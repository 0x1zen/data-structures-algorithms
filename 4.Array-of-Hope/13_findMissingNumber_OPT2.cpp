#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int> &nums) {
  int x = 0;
  for (int i = 0; i < nums.size(); i++) {
    x = x ^ nums[i];
    x = x ^ i + 1;
  }
  return x;
}
int main() {
  // vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  vector<int> nums = {0, 1};
  int answer = findMissingNumber(nums);
  cout << answer << endl;
}