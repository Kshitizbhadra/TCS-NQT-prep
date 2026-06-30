#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, a, n;
  cin >> a;
  bool prime = true;
  for (i = 2; i <= n / 2; i++) {
    if (a % i == 0) {
      prime = false;
      break;
    }
  }
  cout << prime << endl;
  cout << (prime ? "true" : "false");
  return 0;
}