#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("squares.in", "r", stdin);
    freopen("squares.out", "w", stdout);

    int A,B; 
    int N;
    int suma=0;

    cin >> N;
    for (int i=1; i<=N; i++){
        for (int j=1; j<=N; j++){
            if (((i*i)-(j*j))==N)suma++;
        }
    }
    cout << suma;
    return 0;
}