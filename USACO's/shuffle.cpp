#include <bits/stdc++.h>

using namespace std;

    const int MAX_N = 100;

    int cows[MAX_N+1];
    int orden[MAX_N+1];
    int original[MAX_N+1];

    int main (){
    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for (int i=1; i<=N; i++){
        cin >> cows[i];
    }
    for (int i=1; i<=N; i++){
        cin >> orden[i];
    } 
    
    for (int i=0; i<3; i++) {    
        for (int j=1; j<=N; j++) {
            original[j] = orden[cows[j]];
        }
        for (int j=1; j<=N; j++){
            orden[j] = original[j];
        }
    }
    
    for (int i=1; i<=N; i++){
        cout << orden[i] << "\n";
    }
    return 0;
}