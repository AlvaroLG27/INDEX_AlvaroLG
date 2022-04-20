#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);

    int N;
    int suma=0;
    int div=0, res=0;
    int pilas[10000];

    cin >> N;

    for (int i=0; i<N; i++){
        cin >> pilas[i];
        suma += pilas[i];
    }
    for (int i=0; i<N; i++){
        div=suma/N;
        if(pilas[i]>div){
            res+=pilas[i]-div;
        }
    }
    cout << res;
    return 0;
}
