#include<bits/stdc++.h>

using namespace std;

int main(){

    freopen("hayexp.in","r",stdin);
    freopen("hayexp.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int Q;
    int S, J;
    int sum=0;

    cin >> N >> Q;

    int H[N];

    for (int i=1; i<=N; i++){
        cin >> H[i];
    }
    for (int i=0; i<Q; i++){
        cin >> S >> J;
        for (S; S<=J; S++){
            sum+=H[S];
        }
        cout << sum << endl;
        sum=0;
    }
    return 0;
}
