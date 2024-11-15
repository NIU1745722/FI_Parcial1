/*
#include <iostream>

using namespace std;
#define DIM 10
int main() {
    int nums[DIM], i=0;
    bool ordenat = true;

    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }

    while (i < DIM && ordenat) {
        i++;
        if (nums[i - 1] > nums[i]) {
            ordenat = false;
        }
    }

    cout << i-1;
}
*/