#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int x = a;
  int y = b;
  while (y != 0) {
    int temp = y;
    y = x % y;
    x = temp;
  }
  int lcm = (a * b) / x;
  cout << lcm;
}
/* iske ek trick h gcd nikalo and phir lcm= (a*b)/gcd krdo*/
/*gcd ke liye euclid algo lg jayega*/
/*or ek aur brute force method h ki dono ke common multiple dhundo aur unka first one print krdo*/