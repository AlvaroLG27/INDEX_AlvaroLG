#include<bits/stdc++.h>

using namespace std;

int main(){

    freopen("read.in","r",stdin);
    freopen("read.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,K;
    int cont=0;
    int aux=0;
    int apoyo=0;
    cin >> N >> K;
    for (int i=0; i<K; i++){
        int S,T,R;
        cin >> S >> T >> R;
        while (aux<N){
            if (apoyo>=T){
                cont+=R;
                apoyo=0;
            }
            cont++;
            apoyo++;
            aux+=S;
        }
        cout << cont << endl;
        cont=0;
        aux=0;
        apoyo=0;
    }


    return 0;
}