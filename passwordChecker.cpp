#include <string>
#include <iostream>
using namespace std;

bool passwordChecker(string password) {
  if (password.size() < 8 || password.size() > 15) return false;
  bool hasDigit = false;
  bool hasLower = false;
  bool hasUpper = false;
  bool hasSpecial = false;
  for (int i = 0; i < password.size(); i++) {
    if (password[i] == ' ') {
      return false;
    }
    else if (password[i] >= '0' && password[i] <= '9') {
      hasDigit = true;
    }
    else if (password[i] >= 'a' && password[i] <= 'z') {
      hasLower = true;
    }
    else if (password[i] >= 'A' && password[i] <= 'Z') {
      hasUpper = true;
    }
    else if ((password[i] >= '!' && password[i] <= '/') || (password[i] >= ':' && password[i] <= '@')) {
      hasSpecial = true;
    }
  }
  return (hasDigit && hasLower && hasSpecial && hasUpper);
}

int main(int argc, char *argv[])
{
  cout << passwordChecker("GeeksForGeeks") << endl;
  cout << passwordChecker("Geek$ForGeeks7") << endl;
  cout << passwordChecker("$9nM$") << endl;
  cout << passwordChecker("has space") << endl;
  cout << passwordChecker("hasnoDig!T") << endl;
  cout << passwordChecker("NOL0W#R") << endl;
  cout << passwordChecker("noupper8*") << endl;
  cout << passwordChecker("noSPECIAL3") << endl;

}
