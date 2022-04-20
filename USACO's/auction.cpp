#include<bits/stdc++.h>

using namespace std;

long long farmer[1050];

int main(){

    freopen("auction.in","r",stdin);
    freopen("auction.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N,M;
    cin >> N >> M;

    for (int i=0; i<M; i++){
        cin >> farmer[i];
    }

    sort (farmer, farmer+M);

    long long indice;
    long long suma=0;
    
    for (int i=0; i<M; i++){
        long long k=M-i;
        if (k>N){
            k=N;
        }
        if (farmer[i]*k>suma){
            indice=farmer[i];
            suma=farmer[i]*k;
        }
    }
    cout << indice << " " << suma;

    return 0;
}