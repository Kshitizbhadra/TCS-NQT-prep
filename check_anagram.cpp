#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string str1, string str2){
        if(str1==str2){
            return true;
        }
        else{
            return false;
        }
    }

int main() {
	string str1;
	string str2;
	cin >> str1>> str2;
    sort(str1.begin(),str1.end());
    cout<<str1;
    sort(str2.begin(),str2.end());
    cout<<str2;
    bool answer = isAnagram(str1,str2);
    cout<< answer;
}
