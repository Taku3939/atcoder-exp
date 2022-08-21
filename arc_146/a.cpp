#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void print(const std::vector<int> &v) {
    std::for_each(v.begin(), v.end(), [](int x) {
        std::cout << x << " ";
    });
    std::cout << std::endl;
}

//桁数を返す
template<typename T>
size_t countDigits(T n) {
    string tmp;

    tmp = to_string(n);
    return tmp.size();
}

int main() {
    int N;
    cin >> N;
    //桁数の最大値
    int MAX = 7;
    //桁数ごとに配列を作る
    vector<vector<int>> a(MAX, vector<int>());
    for (int i = 0; i < N; ++i) {
        int n, ai;
        //入力
        cin >> ai;
        //桁数
        n = countDigits(ai);
        a.at(n).push_back(ai);
    }
    vector<int> dist(3, -1);
    for (int i = MAX - 1; i >= 0; --i) {

        auto ai = a.at(i);
        for (auto p: ai) {
//            char const *num_char = tmp.c_str();
            if (dist[0] < p) {
                dist[2] = dist[1];
                dist[1] = dist[0];
                dist[0] = p;
            } else if (dist[1] < p) {
                dist[2] = dist[1];
                dist[1] = p;
            } else if (dist[2] < p) {
                dist[2] = p;
            }
        }
        //-1の数で現在の要素数を考える
        // 3つあったなら終わる
        if (count(dist.begin(), dist.end(), -1) == 0) {
            break;
        }
    }

    vector<int> three{0, 1, 2};

    ll answer = 0;
    do {
        string tmp = "";
        for (int i = 0; i < 3; i++)
            tmp += to_string(dist[three[i]]);

        answer = max(answer, atoll(tmp.c_str()));
    } while (next_permutation(three.begin(), three.end()));
    cout << answer << endl;
    return 0;
}
