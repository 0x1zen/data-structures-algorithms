#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &nums) { sort(nums.begin(), nums.end()); }
int main() {
  vector<int> nums = {2, 0, 2, 1, 1, 0};
  sortColors(nums);
  for (int value : nums) {
    cout << value << " ";
  }
}