#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    const char str[] = "atcoder";
    for (int i = L-1; i < R; ++i) {
        cout << str[i];
    }

    return 0;
}
