#include<bits/stdc++.h>

using namespace std;

int cows[1010];
int copia[1010];

int main(){
    freopen("privc.in","r",stdin);
    freopen("privc.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N;
    int cont=0;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> cows[i];
        copia[i]=cows[i];
    }
    sort (cows, cows+N);
    for (int i=0; i<N; i++){
        if (cows[i]!=copia[i])cont++;
    }
    if (cont%2==1)cont++;
    cout << cont/2;

    return 0;
}