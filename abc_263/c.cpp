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
    int N, M;
    cin >> N >> M;

    vector<int> a;
    for (int i = 0; i < N; i++) a.push_back(0);
    for (int i = 0; i < M - N; i++) a.push_back(1);


    do {
        for (int i = 0; i < M; ++i) {
            if (a[i] == 0)cout << i + 1 << " ";
        }
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}
