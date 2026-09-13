#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    // int input[10] = {5, 8, 2, 10, 7, 15, 13, 11, 20, 18};
    int input[10];
    for (int i = 0; i < 10; ++i)
        cin >> input[i];
    sort(input, input + 10);
    for (int val : input)
        cout << val << " ";
}