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

int main2() {
    int count = 5;
    map<int, int> inputs;

    int value;
    for (int i = 0; i < count; ++i) {
        cin >> value;
        inputs[value] += 1;
    }

    auto iter = inputs.begin();
    bool flag2 = false;
    bool flag3 = false;

    while (iter != inputs.end()) {
        if (iter->second == 2) flag2 = true;
        if (iter->second == 3) flag3 = true;
        ++iter;
    }

    if (flag2 && flag3) cout << "Yes";
    else cout << "No";

    return 0;
}

// こっちの方がシンプル
int main(){
    vector<int> a(5);
    for (int i = 0; i < 5; ++i) cin >> a.at(i);
    sort(a.begin(), a.end());
    if((a[0] == a[2] && a[3] == a[4]) || (a[0] == a[1] && a[2] == a[4])) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}