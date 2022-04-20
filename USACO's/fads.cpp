#include<bits/stdc++.h>

using namespace std;

    int cows[100010];

int main(){

    freopen("fads.in","r",stdin);
    freopen("fads.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, L, K;
    int result=0;
    cin >> N >> L >> K;
    for (int i=0; i<N; i++){
        cin >> cows[i];
    }
    sort (cows, cows+N);
    for (int i=0; i<N; i++){
        if (L>=cows[i]){
            L+=K;
            result++;
        }
    }
    cout << result;

    return 0;
}