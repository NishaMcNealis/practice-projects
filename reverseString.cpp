#include <iostream>
#include <string>
#include <stack>

using namespace std;

string reverseString(string input) {
  stack<string> strStack;
  string currString = "";
  for (int i = 0; i < input.size(); i++) {
    if (input[i] == ' ') {
      strStack.push(currString);
      currString = "";
    }
    else {
      currString += input[i];
    }
  }
  string retval;
  while (!strStack.empty()) {
    retval += strStack.top() + " ";
    strStack.pop()
  }
  return retval;
}

int main() {
  cout << reverseString("") << endl;
  cout << reverseString("a b c") << endl;
  cout << reverseString("aa vvv nnnn") << endl;
  cout << reverseString("a") << endl;
  cout << reverseString("aa bnb") << endl;
}
