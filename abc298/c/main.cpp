#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<multiset<int>> boxes(N);
    map<int, set<int>> cards;

    for (int q = 0; q < Q; ++q) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int i, j;
            cin >> i >> j;
            boxes[j - 1].insert(i);
            cards[i].insert(j);
        } else if (query_type == 2) {
            int i;
            cin >> i;
            auto it = boxes[i - 1].begin();
            while (it != boxes[i - 1].end()) {
                cout << *it;
                ++it;
                if (it != boxes[i - 1].end()) {
                    cout << " ";
                }
            }
            cout << endl;
        } else {
            int i;
            cin >> i;
            auto it = cards[i].begin();
            while (it != cards[i].end()) {
                cout << *it;
                ++it;
                if (it != cards[i].end()) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
