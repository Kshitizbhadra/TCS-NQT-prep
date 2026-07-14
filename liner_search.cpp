#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={10,30,60,40,50};
    int target = 40;
    int n = 5;
    int index = -1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    cout<<index;
    return 0;

    
    
}
