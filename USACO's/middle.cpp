#include <bits/stdc++.h>

using namespace std;

int numbers[10010];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("middle.in", "r", stdin);
    freopen("middle.out", "w", stdout);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    sort(numbers, numbers + N);
    int K = N/2;
    cout << numbers[K];
}
