#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        map<int, int> freq;
        for (int i = 0; i < N; ++i) {
            int height;
            cin >> height;
            freq[height]++;
        }
        if (freq.size() < 2) {
            cout << -1 << endl;
            continue;
        }
        int max = 0, min = N;
        for (auto iter = freq.begin(); iter != freq.end(); ++iter) {
            if (iter->second > max) {
                max = iter->second;
            }
            if (iter->second < min) {
                min = iter->second;
            }
        }
        cout << max - min << endl;
    }
    return 0;
}