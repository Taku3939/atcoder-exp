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

    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 1; i < N; ++i) {
        cin >> P.at(i);
        P[i]--;
    }

    vector<int> dp(N);
    for (int i = 1; i < N; ++i)
        dp[i] = dp[P[i]] + 1;

    cout << dp[N - 1] << endl;
    return 0;
}
