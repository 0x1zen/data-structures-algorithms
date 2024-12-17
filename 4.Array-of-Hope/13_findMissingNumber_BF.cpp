#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++) {
    int flag = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] == i) {
        flag++;
        break;
      }
    }
    if (flag == 0) {
      return i;
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