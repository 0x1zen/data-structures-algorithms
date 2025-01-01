#include <iostream>
#include <string.h>
using namespace std;
int maxScore(string s) {
  int ones = 0;
  int zeros = 0;
  int result = 0;
  for (int i = 1; i < s.length(); i++) {
    if (s[i] == '1')
      ones++;
  }
  for (int i = 1; i < s.length(); i++) {
    if (s[i - 1] == '0')
      zeros++;
    result = max(result, zeros + ones);
    if (s[i] == '1')
      ones--;
  }
  return result;
}
int main() {
  string s = "011101";
  cout << maxScore(s);
}
