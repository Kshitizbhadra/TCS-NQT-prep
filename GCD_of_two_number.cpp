#include <bits/stdc++.h>
using namespace std;

int main() {
     int a,b;
     cin>>a>>b;
     while(b!=0){
         int temp=b;
         b=a%b;
         a=temp;
     }
    cout<<a;
}
/*euclidean form use kra h ismei. is 2 numbers lete h (a,b) and a k place mei b ko rkhte h
 and b k place mei a%b ko rkhte h */