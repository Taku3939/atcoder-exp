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

    int N, M, T;
    cin >> N >> M >> T;
    vector<long long> a(N);
    for (int i = 0; i < N - 1; ++i) cin >> a.at(i);

    map<int, long long> xy;
    for (int i = 0; i < M; ++i) {
        int x, y;
        cin >> x >> y;
        xy[x - 1] = y;
    }

    vector<long long> dp(N);
    dp[0] = T;

    for (int i = 0; i < N - 1; ++i) {
        dp[i + 1] = dp[i] - a[i] + xy[i];
        // 0以下になるような移動はダメ
        if (dp[i + 1] <= 0)
            break;
    }

    if (dp[N - 1] > 0) cout << "Yes";
    else cout << "No";
    return 0;
}
