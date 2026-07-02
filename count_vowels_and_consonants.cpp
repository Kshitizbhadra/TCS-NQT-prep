#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  int vowels = 0;
  int conso = 0;
  for (char ch : str) {
    if ('a' <= ch && 'z' >= ch) {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        vowels++;
      } else {
        conso++;
      }
    }
  }
  cout << "vowels" << vowels << endl;
  cout << "conos=" << conso << endl;
}