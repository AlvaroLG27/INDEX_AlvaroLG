#include<bits/stdc++.h>

using namespace std;

int cows[50000];

int main(){
    freopen("costume.in","r",stdin);
    freopen("costume.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N, S;
    long long result=0;
    cin >> N >> S;

    for (int i=0; i<N; i++){
        cin >> cows[i];
    }

    sort (cows, cows+N);

    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            long long sum=cows[i]+cows[j];
            if (sum<=S)result++;
        }
    }
    cout << result;

    return 0;
}