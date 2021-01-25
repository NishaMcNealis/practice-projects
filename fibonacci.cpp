#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printFibonacci(int n) {
  if (n <= 0) {
    cout << "n must be positive" << endl;
  }

  else {
    vector<int> arr(n, 1);
    cout << arr[0] << endl;
    if (n > 1) {
      cout << arr[1] << endl;
      for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i] << endl;
      }
    }
  }
}


int main() {
  printFibonacci(15);
  cout << endl;
  printFibonacci(-1);
  cout << endl;
  printFibonacci(1);
}
