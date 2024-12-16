#include <iostream>
#include <set>
#include <vector>
std::vector<int> unionOfTwoArrays(std::vector<int> &a, std::vector<int> &b) {
  std::vector<int> result;
  int i = 0;
  int j = 0;
  while (i < a.size() && j < b.size()) {
    if (a[i] < b[j]) {
      if (result.empty() || result.back() != a[i]) {
        result.push_back(a[i]);
      }
      i++;
    } else if (b[j] < a[i]) {
      if (result.empty() || result.back() != b[j]) {
        result.push_back(b[j]);
      }
      j++;
    } else {
      if (result.empty() || result.back() != a[i]) {
        result.push_back(a[i]);
      }
      i++;
      j++;
    }
  }
  while (i < a.size()) {
    if (result.empty() || result.back() != a[i]) {
      result.push_back(a[i]);
    }
    i++;
  }
  while (j < b.size()) {
    if (result.empty() || result.back() != b[j]) {
      result.push_back(b[j]);
    }
    j++;
  }
  return result;
}
int main() {
  std::vector<int> a = {1, 1, 2, 3, 4, 5, 9};
  std::vector<int> b = {2, 3, 4, 4, 5};
  std::vector<int> result = unionOfTwoArrays(a, b);
  for (auto it : result) {
    std::cout << it << " ";
  }
}