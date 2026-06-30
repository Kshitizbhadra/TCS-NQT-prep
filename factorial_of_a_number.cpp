#include <bits/stdc++.h>
using namespace std;

int main() {
    int fact, i, n;

    cin >> n;

    fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout << fact;
}
