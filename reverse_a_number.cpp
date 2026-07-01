#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,n;
	cin>>n;
	while (n>0){
	    int d = n%10;
	    n=n/10;
	    cout<<d;
	}
	
}

another formula for reverse is 
while(n != 0){
rev = rev * 10 + n % 10;
n /= 10;
}
