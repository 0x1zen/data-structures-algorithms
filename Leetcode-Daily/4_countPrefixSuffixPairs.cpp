#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isPrefixAndSuffix(string mainString, string subString) {
  size_t leftPos = mainString.find(subString);
  size_t rightPos = mainString.rfind(subString);
  if (leftPos == 0 && rightPos == mainString.length() - subString.length()) {
    return true;
  }
  return false;
}
int countPrefixSuffixPairs(vector<string> &words) {
  int count = 0;
  for (int i = 0; i < words.size() - 1; i++) {
    for (int j = i + 1; j < words.size(); j++) {
      if (isPrefixAndSuffix(words[j], words[i])) {
        count++;
      }
    }
  }
  return count;
}
int main() {
  vector<string> words = {"abc", "ab", "bc", "ab"};
  cout << countPrefixSuffixPairs(words);
}