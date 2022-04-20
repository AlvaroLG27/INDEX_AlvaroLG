#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("countbead.in","r",stdin);
    freopen("countbead.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int N;
    int cont = 0;
    int C[100];
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> C[i];
    }
    for (int i=1; i<N; i++){
            if (C[i-1]!=C[i]){
                cont++;
            }
    }

    cout << cont;

    return 0;
}
