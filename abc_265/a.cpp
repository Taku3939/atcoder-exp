#include <bits/stdc++.h>
#define inf 100100100100;

using namespace std;

//桁数を返す
template<typename T>
size_t countDigits(T n) {
    string tmp;
    tmp = to_string(n);
    return tmp.size();
}

// mapのデバック
template<typename T1, typename T2>
void print(const std::map<T1, T2> &v) {
    auto iter = v.begin();
    while (iter != v.end()) {
        cout << "[" << iter->first << ","
             << iter->second << "]\n";
        ++iter;
    }
    cout << endl;
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

    int x, y, n;
    cin >> x >> y >> n;
    if(y / 3 < x)
        cout << (n / 3) * y + (n % 3) * x;
    else
        cout << n * x;

    return 0;
}
