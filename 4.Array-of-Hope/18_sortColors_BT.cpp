#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &nums) {
  int countZero = 0, countOne = 0, countTwo = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0) {
      countZero++;
    } else if (nums[i] == 1) {
      countOne++;
    } else {
      countTwo++;
    }
  }
  int index = 0;
  while (countZero > 0) {
    nums[index++] = 0;
    countZero--;
  }
  while (countOne > 0) {
    nums[index++] = 1;
    countOne--;
  }
  while (countTwo > 0) {
    nums[index++] = 2;
    countTwo--;
  }
}
int main() {
  vector<int> nums = {2, 0, 2, 1, 1, 0};
  sortColors(nums);
  for (int value : nums) {
    cout << value << " ";
  }
}