#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if(arr[i] <= arr[minIndex]) {
            minIndex = i;
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);

    if(maxIndex > minIndex) {
        swaps--;
    }

    cout << swaps;

    return 0;
}