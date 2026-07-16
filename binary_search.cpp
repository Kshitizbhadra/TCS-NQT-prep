#include <iostream>
using namespace std;

int main() {

    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 50;

    int low = 0;
    int high = n - 1;

    while(low <= high){

        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            cout << mid;
            return 0;
        }

        else if(arr[mid] < target){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    cout << -1;

    return 0;
}
