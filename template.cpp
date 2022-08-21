#include <bits/stdc++.h>
using namespace std;

//桁数を返す
template<typename T>
size_t countDigits(T n) {
    string tmp;
    tmp = to_string(n);
    return tmp.size();
}

// ベクターのデバック
template<typename T>
void print(const std::vector<T> &v) {
    std::for_each(v.begin(), v.end(), [](int x) {
        std::cout << x << " ";
    });
    std::cout << std::endl;
}

int main() {
    string s;
    cin >> s;

    int result { 0 };

    ////////////////////
    // Write your code.
    ////////////////////

    cout << result << endl;

    return 0;
}
