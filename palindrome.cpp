#include <iostream>
#include <string>
using namespace std;

bool palindromeChecker(string input) {
  int half = input.size()/2;
  for (int i = 0; i < half; i++) {
    if (input[i] != input[input.size() - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  cout << palindromeChecker("abba") << endl;
  cout << palindromeChecker("aba") << endl;
  cout << palindromeChecker("abbgniogena") << endl;
}
